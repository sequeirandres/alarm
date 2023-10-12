#ifndef __SYSTEM_SPEAKER_
#define __SYSTEM_SPEAKER_
/**
 * @file speaker.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el modulo speaker.
 * @see www.iua.edu.ar
 * @version 2023/10/09 v1.0.0 Versión inicial del modulos speaker.
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


/*==================[inclusions]=============================================*/
#include "../code/modules.h"
/*==================[macros and definitions]=================================*/
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/

typedef struct speaker
{
	int frequency;
	int volumen;
	GPIOA gpio;
	// port_x
}speaker;

/** @brief Implementa la función para inicializar el modulo speaker
**
** La funcion recibe un puntero al modulo speaker para inicializar sus parametros 
**
** @param spk puntero a la structura speaker. Dentro de la funcion se inicializan los parametros
** @return la funcion no retorna valor
**/

void speakerInit(speaker* spk);

/** @brief Implementa la función para configurar los parametros modulo speaker
**
** La funcion recibe un puntero al modulo speaker para inicializar sus parametros 
**
** @param spk puntero a la structura speaker.
** @param freq Valor entero (1 a 4), cantidad de pip´s por segundo que emite el speaker
** @param volumen Intensidad (0,100) del pip que emite el speaker 
** @return la funcion no retorna valor
**/

void speakerConfig(speaker* spk,int freq,int volmunen,pin_t pinout);

/** @brief Implementa la función para inicar la emision de sonido con el speaker
**
** La funcion recibe un puntero al modulo speaker. Implementa mecanismos para emitir una sirena constante
**
** @param spk puntero a la structura speaker. 
** @return la funcion no retorna valor.
**/

void speakerSoundRun(speaker* spk);

/** @brief Implementa la función para deterner la emision de sonido con el speaker
**
** La funcion recibe un puntero al modulo speaker. Implementa mecanismos detener la emision una sirena constante.
**
** @param spk puntero a la structura speaker.
** @return la funcion no retorna valor.
**/

void speakerSoundStop(speaker* skp);

/** @brief Implementa la función para emitir una sirena con el modulo speaker
**
** La funcion recibe un puntero al modulo speaker y genera los mecanismos para emitir un pip y detenerlo
** @param spk puntero a la structura speaker.
** @return la funcion no retorna valor.
**/

void speakerRing(speaker *spk);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif
