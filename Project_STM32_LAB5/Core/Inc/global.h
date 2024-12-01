/*
 * global.h
 *
 *  Created on: Nov 25, 2024
 *      Author: phan thanh huy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define CMD_CONTENT_MAX_LENGTH		50
#define MIN_CMD_LENGTH				3
#define RESPONSE_LENGTH				50
#define TIMER_CYCLE					10
#define TIME_FOR_3S					3000

enum UART_STATE {UART_IDLE, UART_RST, UART_WAIT_OK, UART_RESPONSE, UART_END, UART_ERROR};
enum CMD_STATE	{CMD_IDLE, CMD_R, CMD_S, CMD_T, CMD_O, CMD_K, CMD_EXCLAMATION, CMD_HASTAG_K, CMD_HASTAG_T};
enum ERROR_STATE{ERROR_IDLE, CMD_NOT_EXISTED, BUFFER_IS_FULL, INVALID_INPUT};

extern enum UART_STATE 	uartState;
extern enum CMD_STATE	cmdState;
extern enum ERROR_STATE	errState;

extern uint8_t cmdBuffer[CMD_CONTENT_MAX_LENGTH];
extern uint8_t cmd_content_index;
extern uint8_t buffer_flag;

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint32_t ADC_value;
extern char response[RESPONSE_LENGTH];

extern uint8_t flagForOK;

extern int isRST;
extern int isOK;

#endif /* INC_GLOBAL_H_ */
