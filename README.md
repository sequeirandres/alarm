# Proyecto Alarma

## Maquina De estado

![Maquina De Estado](/imag/maquinaEstado.png)

### Estados


|  Estados           | Descripciones    | 
|:------------------:|:-----------------| 
| power off          | Named 1          | 
| power on           | Named 2          | 
| reset & init       | Named 3          | 
| alarm on           | Named 3          | 
| alarm off          | Named 3          | 
| alarm triggered    | Named 3          | 
| verification cycle | Named 3          | 

### Transiciones

|  Estados                    | Descripciones    | 
|:---------------------------:|:-----------------| 
| power off ->  power on      | Named 1          | 
| power on -> Alarm on        | Named 2          | 
| Alarm on -> alarm triggered | Named 3          | 
| alarm triggered- > Alarm on | Named 3          | 
| alarm off                   | Named 3  | 
| alarm triggered             | Named 3          | 
| verification cycle          | Named 3          | 


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


## Armado

## Video

## Requerimientos :

|  ID  | Descripciones    | 
|:-----|:----------------:| 
| RF01 | Named 1          | 
| RF02 | Named 2          | 
| RF02 | Named 3          | 








