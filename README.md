# Proyecto Alarma

## Maquina De estado

![Maquina De Estado](/imag/maquinaEstado.png)

### Estados


|  Estados           | Descripciones      | 
|:------------------:|:-------------------| 
| power off          | Apagada            | 
| power on           | Encendido          | 
| reset & init       | Reset              | 
| alarm on           | Alarma Activada    | 
| alarm off          | Alarma Desactivada | 
| alarm triggered    | Alarma Disparada   | 
| verification cycle | Verificar Sensor   | 

### Transiciones

|  Estados                        | Descripciones    | 
|:-------------------------------:|:-----------------| 
| power off ->  power on          | LLave ON         | 
| power on -> Alarm on            | Sistema                   | 
| Alarm on -> alarm triggered     | Supera el nivel o estado    | 
| alarm triggered- > Alarm on     | Pulsar 1 segundo          | 
| Alarm on -> Verification cycle  | Pulsar 5 segundos | 
| Verification cycle ->  Alarm on | Al finalizar       | 
|  Alarm on -> Reset              | Sistema externo         | 


## Maquina De estado en codigo

![Maquina De Estado](/imag/maquinaEstadoCode.png "Maquina De Estado")


## Test 1
[Codigo Test 1](https://github.com/sequeirandres/alarm/tree/master/src/TestCode-1)

<p> \make </p> <p> \make clean </p><p> .\TC-1</p>

![TestCode1](/imag/testCode1.png)

## Test 2

[Codigo Test 2](https://github.com/sequeirandres/alarm/tree/master/src/TestCode-2)

<p> \make </p> <p> \make clean </p><p> .\TC-2</p>

![TestCode2](/imag/testCode2.png)


# Construcción
## Componentes
- MICROCONTROLADOR : STM32F106 Blue Pill [(Datasheet)](https://www.alldatasheet.com/datasheet-pdf/pdf/201596/STMICROELECTRONICS/STM32F103C8T6.html)
- DISPLAY OLE I2C : SH1306 128x64 Pixels 
- PULSADORES :
- POTENCIOMETRO : 50 K lineal 
- LED : 5 mm
- BUZZER : AX-1003-LF 5V [(Datasheet)](https://www.aatc.tw/images/pdf/20201125a0d45.pdf)

## Diagrama de conexionado

![DiagramaConexionado](/imag/DiagramaConexionado.png)

|  Indicador         | Descripcion                          | 
|:------------------:|:-------------------------------------| 
| Led 1              | Estado De la alarma ON/OFF           | 
| Led 2              | Pulsos de  Keep Alive                | 
| Led 3              | Indicador Luminoso junto a la sirena | 


## Implementación

![Implementacion](/imag/Implementacion.png)


## Video

[VIDEO TEST](https://drive.google.com/file/d/1UD9CIfe8KOxT1QfAv9p_cZdwUCxesQyv/view)

## Requerimientos :
 
|  ID  | Descripciones         | |
|:-----|:---------------------:|:----: |
| RF01 | Sirena                |   OK    |
| RF02 | Indicador luminoso    |   OK    |
| RF03 | Sensor Analogico      |   OK
| RF04 | Sensor Digital        |  OK |
| RF05 | Botonera / pulsador   |    OK   |
| RF06 | Autoarmado            |    OK   |
| RF07 | Calibrar Umbral       |    OK   |
| RF08 | Sonar e iluminar      |    OK   |
| RF09 | Disparo Por Nivel     |    OK   |
| RF10 | Desarmar Alarma       |    OK   |
| RF11 | Pulso Keep Alive      |    OK   |
| RF12 | Calibrar Umbral       |    OK   |
| RF13 | Ciclos Armado/Disparo |    OK   |
| RF14 | Auto Verificar sensor |    OK   |

# Documentación Doxygen

![Documentacion](/imag/Documentacion.png)










