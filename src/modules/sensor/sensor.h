#ifndef __SYSTEM_SENSOR_
#define __SYSTEM_SENSOR_

/**
 * @file sensor.h
 * @author Sequeira Andres
 * @date 9 de Octubre de 2023
 * @brief Archivo de código fuente para el modulo sensor analogico y digital.
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
/** \brief En este módulo se encuentran las funciones para la estructura sensor analogico y digital
 **
 ** Este módulo contiene las funciones del modulo sensor analogico y binario
 **
 **/
/** \addtogroup SENSOR Funciones para la estructura sensor Analogico y Digital
 ** @{ */

/*==================[inclusions]=============================================*/
#include "../code/modules.h"

/*==================[macros and definitions]=================================*/
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/

/*
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
*/

// struct for sensor analog :
typedef struct sensorAnalog
{
	bool_t status;
	float value;
	float threshold;
	GPIOB input;
	//int duty;	
	// port_x
}sensorAnalog;

// struct for sensor binary :
typedef struct sensorBinary
{
	bool_t status;
	binary_t value;
	binary_t threshold;  // 0 -> 1 or 1 -> 0
	GPIOB input;
		//int duty;	
	// port_x
}sensorBinary;

/** @brief Implementa la función para Inicializar la estructura sensor analogico.
**
** La funcion recibe un puntero a la estuctura del sensor. Inicializa el modulo con los parametros por default.
**
** @param sensor puntero a la structura sensor analogico.
** @return la funcion no retorna valor.
**/

void sensorAnalogInit(sensorAnalog* sensor);

/** @brief Implementa la función para configurar algun parametro de la estructura sensor analogico.
**
** La funcion recibe un puntero a la estuctura del sensor, un bool y un valor flotante. Utiliza los parametros para configura los parametros de la estructura.
**
** @param sensor puntero a la structura sensor analogico.
** @param status recibe el estado del sensor, activo o desactivado.
** @param threshold recibe un valor flotante como valor de umbral, el cual utilizará para disparar la alarma.
** @return la funcion no retorna valor.
**/

void sensorAnalogConfig(sensorAnalog* sensor,bool_t status,float threshold);

/** @brief Implementa la funcion para leer el valor del sensor analogico.
**
** La funcion recibe un puntero a la estuctura del sensor. Implementa mecanismos para leer el puerto del sensor analogico y almacena el valor en la estructura.
**
** @param sensor puntero a la structura sensor analogico.
** @return la funcion no retorna valor.
**/

void sensorAnalogReadValue(sensorAnalog* sensor);

/** @brief Implementa la funcion triggered del sensor analogico.
**
** La funcion recibe un puntero a la estuctura del sensor. Implementa mecanismos para comparar el valor analogico del sensor y el umbral
** @param sensor puntero a la structura sensor analogico.
** @return la funcion un bool, es decir un true o false.
**/

bool_t sensorAnalogTriggered(sensorAnalog* sensor);

void sensorBinaryInit(sensorBinary* sensor);
void sensorBinaryConfig(sensorBinary* sensor,bool_t status,binary_t threshold);
void sensorBinaryReadValue(sensorBinary* sensor);
bool_t sensorBinaryTriggered(sensorBinary* sensor);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif

