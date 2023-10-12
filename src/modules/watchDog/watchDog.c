/**
 * @file watchDog.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el watchDog
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del modulo watchDog.
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/09 v1.0.0 Versión inicial del programa.
 */

/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief En este módulo se encuentran las funciones para la estructura light
 **
 ** Este módulo contiene las funciones de la estructura light que controla leds
 **
 **/
/** \addtogroup WATCHDOG Funciones para la estructura Keep Alive
 ** @{ */

/*==================[inclusions]=============================================*/

#include <stdio.h>
#include "watchDog.h"

/*==================[macros and definitions]=================================*/

#define WATCHDOG_FREQUENCY 1
#define WATCHDOG_DUTY 50
#define PIN_GPIO_PORT_WATCHDOG	5

/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/
/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/

void watchdogInit(watchdog* wdog)
{
	wdog->status = false;
	wdog->frequency=WATCHDOG_FREQUENCY;
	wdog->duty=WATCHDOG_DUTY;
}

void watchdogConfig(watchdog* wdog,bool_t status,int frequency, int duty, pin_t pinout)
{
	wdog->status=status;
	wdog->frequency= frequency;
	wdog->duty=duty;
	wdog->gpio.pin = pinout;
}


void watchdogStart(watchdog* wdog)
{
	printf("Start watch dog \n");
	wdog->gpio.output= HIGH;
}

void watchdogStop(watchdog* wdog)
{
	printf("Stop watch dog \n");
	wdog->gpio.output = LOW;
}

/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/