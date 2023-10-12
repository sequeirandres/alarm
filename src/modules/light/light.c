/**
 * @file light.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el modulo light.
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del modulo sensor.
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
/** \addtogroup LIGHT Funciones para la estructura light
 ** @{ */

/*==================[inclusions]=============================================*/
#include <stdio.h>
#include "light.h"

/*==================[macros and definitions]=================================*/
#define LIGHT_FREQUENCY 1
#define LIGHT_INTENSITY 100
#define LIGHT_DUTY 50

/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/

void lightInit(light* lg)
{
	lg->frequency = LIGHT_FREQUENCY ; 
	lg->intensity = LIGHT_INTENSITY ;
	lg->duty = LIGHT_DUTY;
	lg->gpio.output = LOW;
}

void lightConfig(light* lg,int frequency_ ,int intensity_, int duty_, pin_t pinout)
{
	lg->frequency = frequency_ ; 
	lg->intensity = intensity_ ;
	lg->duty = duty_;
	lg->gpio.pin = pinout ;
}

void lightTurnOn(light* lg)
{	
	printf("light on \n");
	lg->gpio.output = HIGH;
}

void lightTurnOff(light* lg)
{
	printf("light off \n");
	lg->gpio.output = LOW;
}

void lightBlink(light* lg)
{
	lightTurnOn(lg);
	// HAL_Delay(NTIME) ;
	lightTurnOff(lg);
}
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/