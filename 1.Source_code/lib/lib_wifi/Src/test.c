/*
 * lib.c
 *
 *  Created on: Mar 27, 2025
 *      Author: quan
 */

#include "stm32f4xx_hal.h"
#include "test.h"

void tongle_gpio(void)
{
	// blink led
	for(int i=0;i<5;i++)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, 1);
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, 0);
		HAL_Delay(500);
	}
}
