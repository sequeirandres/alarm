/**
 * @file speaker.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el modulo speaker.
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del programa.
 **
 ** Histórico de modificaciones:
 **
 **
 ** 2023/10/09 v1.0.0 Versión inicial del programa.
 */

/** \addtogroup PROYECTO Alarma Hogareña.
 ** @{ */
/** \brief En este módulo se encuentran las funciones para la estructura speaker
 **
 ** Este módulo contiene 4 funciones que operan con la estructura speaker.
 **
 **/
/** \addtogroup SPEAKER Funciones para la estructura speaker
 ** @{ */

#include <stdio.h>
//#include "../code/modules.h"
#include "speaker.h"

#define SPEAK_FREQUENCY	1	// 1 pip por segundo 
#define SPEAK_VOLUMEN	50  // 50% del volumen  -- 0 a 100

void speakerInit(speaker *spk)
{
	//printf("Init speaker ...\n");
	spk->frequency=SPEAK_FREQUENCY;
	spk->volumen=SPEAK_VOLUMEN;
	spk->gpio.output= LOW;
}

void speakerConfig(speaker *spk,int frequency ,int volumen,pin_t pinout)
{
	spk->frequency=frequency;
	spk->volumen=volumen;
	spk->gpio.pin = pinout;
	spk->gpio.output = LOW;
}

void speakerSoundRun(speaker *spk)
{
	printf("Buzzer ON");
	spk->gpio.output=HIGH ;
}

void speakerSoundStop(speaker *spk)
{
	printf("BUzzer OFF");
	spk->gpio.output=LOW ;
	
}

void speakerRing(speaker *spk)
{	
	speakerSoundRun(spk);
	// Delay(NTIME)
	speakerSoundStop(spk);
	// Delay(NTIME)
}

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
