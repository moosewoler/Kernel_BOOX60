/*
 *
 * linux/arch/sh/boards/se/7206/setup.c
 *
 * Copyright (C) 2006  Yoshinori Sato
 * Copyright (C) 2007 - 2008  Paul Mundt
 *
 * Hitachi 7206 SolutionEngine Support.
 */
#include <linux/init.h>
#include <linux/platform_device.h>
#include <linux/smc91x.h>
#include <asm/se7206.h>
#include <asm/io.h>
#include <asm/machvec.h>
#include <asm/heartbeat.h>

static struct resource smc91x_resources[] = {
	[0] = {
		.name		= "smc91x-regs",
		.start		= PA_SMSC + 0x300,
		.end		= PA_SMSC + 0x300 + 0x020 - 1,
		.flags		= IORESOURCE_MEM,
	},
	[1] = {
		.start		= 64,
		.end		= 64,
		.flags		= IORESOURCE_IRQ,
	},
};

static struct smc91x_platdata smc91x_info = {
	.flags	= SMC91X_USE_16BIT,
};

static struct platform_device smc91x_device = {
	.name		= "smc91x",
	.id		= -1,
	.dev		= {
		.dma_mask		= NULL,
		.coherent_dma_mask	= 0xffffffff,
		.platform_data		= &smc91x_info,
	},
	.num_resources	= ARRAY_SIZE(smc91x_resources),
	.resource	= smc91x_resources,
};

static unsigned char heartbeat_bit_pos[] = { 8, 9, 10, 11, 12, 13, 14, 15 };

static struct heartbeat_data heartbeat_data = {
	.bit_pos	= heartbeat_bit_pos,
	.nr_bits	= ARRAY_SIZE(heartbeat_bit_pos),
	.regsize	= 32,
};

static struct resource heartbeat_resources[] = {
	[0] = {
		.start	= PA_LED,
		.end	= PA_LED,
		.flags	= IORESOURCE_MEM,
	},
};

static struct platform_device heartbeat_device = {
	.name		= "heartbeat",
	.id		= -1,
	.dev	= {
		.platform_data	= &heartbeat_data,
	},
	.num_resources	= ARRAY_SIZE(heartbeat_resources),
	.resource	= heartbeat_resources,
};

static struct platform_device *se7206_devices[] __initdata = {
	&smc91x_device,
	&heartbeat_device,
};

static int __init se7206_devices_setup(void)
{
	return platform_add_devices(se7206_devices, ARRAY_SIZE(se7206_devices));
}
__initcall(se7206_devices_setup);

/*
 * The Machine Vector
 */

static struct sh_machine_vector mv_se __initmv = {
	.mv_name		= "SolutionEngine",
	.mv_nr_irqs		= 256,
	.mv_inb			= se7206_inb,
	.mv_inw			= se7206_inw,
	.mv_outb		= se7206_outb,
	.mv_outw		= se7206_outw,

	.mv_inb_p		= se7206_inb_p,
	.mv_inw_p		= se7206_inw,
	.mv_outb_p		= se7206_outb_p,
	.mv_outw_p		= se7206_outw,

	.mv_insb		= se7206_insb,
	.mv_insw		= se7206_insw,
	.mv_outsb		= se7206_outsb,
	.mv_outsw		= se7206_outsw,

	.mv_init_irq		= init_se7206_IRQ,
};
