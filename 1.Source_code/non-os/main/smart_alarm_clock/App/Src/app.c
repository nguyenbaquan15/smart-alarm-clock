/*
 * app.c
 *
 *  Created on: Mar 27, 2025
 *      Author: quan
 */

#include "lib.h"
#include "test.h"

void run_led(void)
{
	// blink led
	tongle_gpio();
	blink_led();
}
