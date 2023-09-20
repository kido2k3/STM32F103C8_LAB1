/*
 * clock12led.c
 *
 *  Created on: Sep 20, 2023
 *      Author: HP
 */
#include"clock12led.h"
// By default: GPIO 4 is 0; GPIO 5 is 1;... GPIO 15 is 11
void clearAllClock() {
	uint16_t led = GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7
			| GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12
			| GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
	HAL_GPIO_WritePin(GPIOA, led, 1);
}
void setNumberOnClock(uint8_t num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 0);
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 0);
		break;
	default:
		clearAllClock();
		break;
	}
}
void clearNumberOnClock(uint8_t num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 1);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1);
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1);
		break;
	default:
		clearAllClock();
		break;
	}
}
void SetClock(uint8_t hour, uint8_t minute, uint8_t second) {
	clearAllClock();
	if (hour > 11 || hour < 0 || minute < 0 || minute > 59 || second < 0
			|| second > 59) {
	} else {
		setNumberOnClock(hour);
		setNumberOnClock(minute / 5);
		setNumberOnClock(second / 5);
	}
}
