#ifndef __SYSTEM_MODULES_
#define __SYSTEM_MODULES_

//#include <stdbool.h>
/* 
#define PIN_0	0x00000000
#define PIN_1	0x00000010
#define PIN_2	0x00000100
#define PIN_3	0x00001000
#define PIN_4	0x00010000
#define PIN_5	0x00100000
#define PIN_6	0x01000000
#define PIN_7	0x10000000
*/

typedef enum
{
	LOW,
	HIGH,
}binary_t;

typedef enum
{
	false,
	true,
}bool_t;

typedef enum
{
	PIN_0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7,
}pin_t;

typedef struct GPIOA
{
	pin_t pin;
	binary_t output;
}GPIOA;

typedef struct GPIOB
{
	pin_t pin;
	binary_t output;
}GPIOB;

typedef struct GPIOC
{
	pin_t pin;
	binary_t output;
}GPIOC;

// Funciones generales GPIO
void Delay(int delaytime);

#endif
