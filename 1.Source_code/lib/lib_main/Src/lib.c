/*
 * lib.c
 *
 *  Created on: Mar 27, 2025
 *      Author: quan
 */

#include "stm32f4xx_hal.h"
#include "lib.h"

void blink_led(void)
{
	for(int i=0;i<5;i++)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, 1);
		HAL_Delay(100);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, 0);
		HAL_Delay(100);
	}
}
