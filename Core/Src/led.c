/*
 * led.c
 *
 *  Created on: Dec 10, 2022
 *      Author: USER
 */


#include "main.h"
#include "led.h"

void led_one_shot_toggle(void) {
	HAL_GPIO_TogglePin(GPIOA, LED_ONE_SHOT_Pin);
}
void led_0_5_toggle(void) {
	HAL_GPIO_TogglePin(GPIOA, LED_0_5_Pin);
}
void led_1_toggle(void) {
	HAL_GPIO_TogglePin(GPIOA, LED_1_Pin);
}
void led_1_5_toggle(void) {
	HAL_GPIO_TogglePin(GPIOA, LED_1_5_Pin);
}
void led_2_toggle(void) {
	HAL_GPIO_TogglePin(GPIOA, LED_2_Pin);
}
