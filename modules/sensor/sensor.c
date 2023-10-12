
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
/** \brief En este módulo se encuentran las funciones para la estructura sensor analogico y digital
 **
 ** Este módulo contiene las funciones del modulo sensor analogico y binario
 **
 **/
/** \addtogroup SENSOR Funciones para la estructura sensor
 ** @{ */


/*==================[inclusions]=============================================*/
#include <stdio.h>
#include "sensor.h"

/*==================[macros and definition]==================================*/

#define SENSOR_ANALOG_THRESHOLD	50
#define SENSOR_BINARY_THRESHOLD	false

/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/
/*==================[internal functions definition]==========================*/

/* Sensor Analog*/
void sensorAnalogInit(sensorAnalog* sensor)
{
	sensor->status = true;
	sensor->value = 0;
	sensor->threshold=SENSOR_ANALOG_THRESHOLD; 
}

void sensorAnalogConfig(sensorAnalog* sensor,bool_t status,float threshold) 
{
	sensor->status = status;
	sensor->threshold=threshold;	
}

void sensorAnalogReadValue(sensorAnalog* sensor)
{
	printf("Read value from ADC converter \n");
}

bool_t sensorAnalogTriggered(sensorAnalog* sensor)
{
	if(sensor->status)
	{
		if(sensor->threshold<sensor->value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

/* Sensor Binary*/
void sensorBinaryInit(sensorBinary* sensor)
{
	sensor->status= true;
	sensor->value=LOW;
	sensor->threshold= LOW;  // 0 -> 1 or 1 ->
}

void sensorBinaryConfig(sensorBinary* sensor,bool_t status,binary_t threshold)
{	
	sensor->status= status;
	sensor->threshold= threshold;  // 0 -> 1 or 1 ->
}

void sensorBinaryReadValue(sensorBinary* sensor)
{
	printf("Read binary value from PIN \n");
}

bool_t sensorBinaryTriggered(sensorBinary* sensor)
{
	//printf("Read binary value from PIN \n");
	if(sensor->value != sensor->threshold)
	{
		return true;
	}
	else
	{
	}
	
	return false;
}

/*==================[external functions definition]==========================*/

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
