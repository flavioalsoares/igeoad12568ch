/*
 * igeoad12568ch.c -- igeoad12568ch Intergeo Analog/Converter board driver
 *
 * Copyright (C) 2010 Flavio Alberto Lopes Soares
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/sched.h>

#include <linux/spi/spi.h>

static int igeoad_probe(struct spi_device *spi)
{
    return 0;
}

static int __devexit igeoad_remove(struct spi_device *spi)
{
    return 0;
}

/*-------------------------------------------------------------------------*/

static struct spi_driver igeoad_driver = {
	.driver = {
		.name		= "igeoad12568ch",
		.owner		= THIS_MODULE,
	},
	.probe		= igeoad_probe,
	.remove		= __devexit_p(igeoad_remove),
};

static int __init igeoad_init(void)
{
	return spi_register_driver(&igeoad_driver);
}
module_init(igeoad_init);

static void __exit igeoad_exit(void)
{
	spi_unregister_driver(&igeoad_driver);
}
module_exit(igeoad_exit);

MODULE_DESCRIPTION("Driver for InterGeo Analog/Digital Converter");
MODULE_AUTHOR("Flavio Alberto Lopes Soares");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:igeoad12568ch");
