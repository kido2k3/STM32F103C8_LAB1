/*
 * segment_led.c
 *
 *  Created on: Sep 15, 2023
 *      Author: HP
 */

#include"segment_led.h"
void display7SEG(struct seven_led *led, unsigned short i) {
	switch (i) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 0);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, led->a, 1);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 1);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 1);
		HAL_GPIO_WritePin(GPIOA, led->g, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 1);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 0);
		HAL_GPIO_WritePin(GPIOA, led->f, 1);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 1);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, led->a, 1);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 1);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 1);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 1);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 0);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 1);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 1);
		HAL_GPIO_WritePin(GPIOA, led->g, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 0);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, led->a, 0);
		HAL_GPIO_WritePin(GPIOA, led->b, 0);
		HAL_GPIO_WritePin(GPIOA, led->c, 0);
		HAL_GPIO_WritePin(GPIOA, led->d, 0);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 0);
		HAL_GPIO_WritePin(GPIOA, led->g, 0);
		break;
	default:
		HAL_GPIO_WritePin(GPIOA, led->a, 1);
		HAL_GPIO_WritePin(GPIOA, led->b, 1);
		HAL_GPIO_WritePin(GPIOA, led->c, 1);
		HAL_GPIO_WritePin(GPIOA, led->d, 1);
		HAL_GPIO_WritePin(GPIOA, led->e, 1);
		HAL_GPIO_WritePin(GPIOA, led->f, 1);
		HAL_GPIO_WritePin(GPIOA, led->g, 1);
	}
}
void init7SEG(struct seven_led *led, uint16_t aa, uint16_t bb, uint16_t cc,
		uint16_t dd, uint16_t ee, uint16_t ff, uint16_t gg) {
	led->a = aa;
	led->b = bb;
	led->c = cc;
	led->d = dd;
	led->e = ee;
	led->f = ff;
	led->g = gg;
}
