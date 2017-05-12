/*
 * (C) Copyright 2016
 * Emcraft Systems, <www.emcraft.com>
 * Yuri Tikhonov <yur@emcraft.com>
 *
 * This software may be distributed under the terms of the GNU General
 * Public License ("GPL") version 2 as distributed in the 'COPYING'
 * file from the main directory of the linux kernel source.
 */

#ifndef _MACH_STM32_PWM_H_
#define _MACH_STM32_PWM_H_

#include <linux/init.h>

struct stm32_pwm_data {
	int tmr;
	int chan;
	bool high_on_init;
	bool trigger_output;
	int period;
	int duty_cycle;
};

void __init stm32_pwm_init(void);

#endif /* _MACH_STM32_CAN_H_ */
