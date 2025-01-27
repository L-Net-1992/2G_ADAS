/*
 * Copyright (c) 2018 Endre Karlson <endre.karlson@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file SoC configuration macros for the STM32L1 family processors.
 *
 * Based on reference manual:
 *   STM32L1X advanced ARM ® -based 32-bit MCUs
 *
 * Chapter 2.2: Memory organization
 */


#ifndef _STM32L1_SOC_H_
#define _STM32L1_SOC_H_

#define GPIO_REG_SIZE         0x400
/* base address for where GPIO registers start */
#define GPIO_PORTS_BASE       (GPIOA_BASE)

#ifndef _ASMLANGUAGE

#include <device.h>
#include <misc/util.h>
#include <random/rand32.h>

#include <stm32l1xx.h>

#include "soc_irq.h"

#include <stm32l1xx_ll_system.h>

#ifdef CONFIG_SERIAL_HAS_DRIVER
#include <stm32l1xx_ll_usart.h>
#endif

#ifdef CONFIG_CLOCK_CONTROL_STM32_CUBE
#include <stm32l1xx_ll_utils.h>
#include <stm32l1xx_ll_bus.h>
#include <stm32l1xx_ll_rcc.h>
#endif /* CONFIG_CLOCK_CONTROL_STM32_CUBE */

#ifdef CONFIG_I2C_STM32_V2
#include <stm32l1xx_ll_i2c.h>
#endif

#ifdef CONFIG_SPI_STM32
#include <stm32l1xx_ll_spi.h>
#endif

#endif /* !_ASMLANGUAGE */

#endif /* _STM32L1_SOC_H_ */
