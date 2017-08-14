/*
 * Module:	LCD driver
 * Author:	Lvjianfeng
 * Date:	2012.8
 */

#ifndef _DRV_LCD_H_
#define _DRV_LCD_H_


#include "global.h"


//Constant define

#define DRV_LCD_DATA_ALL_ON		0xFF
#define DRV_LCD_DATA_ALL_OFF	0x00

#define DRV_LCD_TEST_ENABLE		0


//Type definition

typedef enum
{
	DRV_LCD_PARAM_BLINK,
	DRV_LCD_PARAM_RESET,
	DRV_LCD_COUNT_PARAM
} drv_lcd_param;

typedef enum
{
	DRV_LCD_OFFSET_MONTH_TENS = 0,
	DRV_LCD_OFFSET_MONTH_UNITS,
	DRV_LCD_OFFSET_DAY_TENS,
	DRV_LCD_OFFSET_DAY_UNITS,
	DRV_LCD_OFFSET_HOUR_TENS,
	DRV_LCD_OFFSET_HOUR_UNITS,
	DRV_LCD_OFFSET_MINUTE_TENS,
	DRV_LCD_OFFSET_MINUTE_UNITS,
	DRV_LCD_OFFSET_GLUCOSE_TENS,
	DRV_LCD_OFFSET_GLUCOSE_UNITS,
	DRV_LCD_OFFSET_GLUCOSE_FRACTION,
	DRV_LCD_OFFSET_DATE_BAR,
	DRV_LCD_OFFSET_TIME_COLON,
	DRV_LCD_OFFSET_GLUCOSE_POINT,
	DRV_LCD_OFFSET_PM,
	DRV_LCD_OFFSET_AM,
	DRV_LCD_OFFSET_DAY_AVG,
	DRV_LCD_OFFSET_BLOOD,
	DRV_LCD_OFFSET_STRIP,
	DRV_LCD_OFFSET_READINGS,
	DRV_LCD_OFFSET_HISTORY,
	DRV_LCD_OFFSET_POUND,
	DRV_LCD_OFFSET_CONTROL,
	DRV_LCD_OFFSET_BATTERY,
	DRV_LCD_OFFSET_ALARM,
	DRV_LCD_OFFSET_AUDIO,
	DRV_LCD_OFFSET_CODE,
	DRV_LCD_OFFSET_HYPO,
	DRV_LCD_OFFSET_HYPER,
	DRV_LCD_OFFSET_KETONE,
	DRV_LCD_OFFSET_BLUETOOTH,
	DRV_LCD_OFFSET_BEFORE_MEAL,
	DRV_LCD_OFFSET_AFTER_MEAL,
	DRV_LCD_OFFSET_MMOL,
	DRV_LCD_OFFSET_MG,
	DRV_LCD_COUNT_OFFSET
} drv_lcd_offset;

typedef enum
{
	DRV_LCD_CHARACTER_0 = 0,
	DRV_LCD_CHARACTER_1,
	DRV_LCD_CHARACTER_2,
	DRV_LCD_CHARACTER_3,
	DRV_LCD_CHARACTER_4,
	DRV_LCD_CHARACTER_5,
	DRV_LCD_CHARACTER_6,
	DRV_LCD_CHARACTER_7,
	DRV_LCD_CHARACTER_8,
	DRV_LCD_CHARACTER_9,
	DRV_LCD_CHARACTER_A,
	DRV_LCD_CHARACTER_B,
	DRV_LCD_CHARACTER_C,
	DRV_LCD_CHARACTER_D,
	DRV_LCD_CHARACTER_E,
	DRV_LCD_CHARACTER_F,
	DRV_LCD_CHARACTER_G,
	DRV_LCD_CHARACTER_H,
	DRV_LCD_CHARACTER_I,
	DRV_LCD_CHARACTER_J,
	DRV_LCD_CHARACTER_L,
	DRV_LCD_CHARACTER_N,
	DRV_LCD_CHARACTER_O,
	DRV_LCD_CHARACTER_P,
	DRV_LCD_CHARACTER_Q,
	DRV_LCD_CHARACTER_R,
	DRV_LCD_CHARACTER_T,
	DRV_LCD_CHARACTER_U,
	DRV_LCD_CHARACTER_Y,
	DRV_LCD_CHARACTER_BAR,
	DRV_LCD_CHARACTER_ALL_OFF,
	DRV_LCD_CHARACTER_ALL_ON,
	DRV_LCD_COUNT_CHARACTER	
} drv_lcd_character;

typedef enum
{
	DRV_LCD_SYMBOL_OFF = 0,
	DRV_LCD_SYMBOL_ON,
	DRV_LCD_COUNT_SYMBOL	
} drv_lcd_symbol;


//Function declaration

uint DrvLCD_Initialize(void);
uint DrvLCD_SetConfig
(
	uint ui_Offset,
	uint ui_Parameter,
	const uint8 *u8p_Value
);
uint DrvLCD_GetConfig
(
	uint ui_Offset,
	uint ui_Parameter,
	uint8 *u8p_Value
);
uint DrvLCD_Write
(
	uint ui_Offset,
	const uint8 *u8p_Data,
	uint ui_Length
);
uint DrvLCD_Read
(
	uint ui_Offset,
	uint8 *u8p_Data,
	uint *uip_Length
);
void DrvLCD_Enable(void);
void DrvLCD_Disable(void);
void DrvLCD_Interrupt(void);
void DrvLCD_Tick
(
	uint16 u16_TickTime
);

#if DRV_LCD_TEST_ENABLE == 1
void DrvLCD_Test(void);
#endif

#endif
