# Arduino Utilizando Resistencia PullUP


### Esto es un Pulsador Mecanico

<img src="https://github.com/IDiegoUlises/Boton-Con-Resistencia-PULLUP-Interna/blob/master/images/pulsador.jpg" width="200" height="200" />

* La razon por cual debe utilizar una resistencia **PullUP** es porque que el **microcontrolador** es demasiado **rapido** 

Es decir tu presionas el boton solo 1 vez pero el arduino como es muy rapido detectara que tu pulsaste el boton mas de 10 veces es decir que la intruccion que hayas programado se ejecutara 10 veces seguidas.

**Como evitar esto:** Con una resistencia **PullUP** es una resistencia comun y corriente con la diferencia que se utilizara con el proposito de evitar este problema.

**¿Porque lo soluciona una resistencia?**
Imagina un condensador que lo que hace es retener una corriente esta resistencia hace lo contrario elimina la corriente inecesaria.

**¿Porque existe este problema?** Porque tenemos que presionar el boton con nuestra mano y al hacerlo nos demoramos microsegundos es como si presionaramos el boton mas de 10 veces seguidas.


## Solucion Con un tiempo de retardo


Agregando un tiempo de retardo

```C++
delay(150); 
```

* **No recomendado** 
* **Nuestro arduino se volvera lento**
* **No se puede utilizar para interupciones** 

El arduino detectara que el boton es pulsado 10 veces seguidas se agrega un tiempo de retardo al terminar la accion dependiente del boton con la intenccion que la accion que se ejecuta 10 veces se ejecute 1 vez.

## Solucion Utilizando una resistencia externa

<img src="https://github.com/IDiegoUlises/Boton-Con-Resistencia-PULLUP-Interna/blob/master/images/Boton-con-resistencia-externa.png" width="400" height="600" />

* **Recomendado**
* **Este es el procedimiento correcto para incorporar una resistencia PullUP**

## Solucion Utilizando la Resistencia interna incorporada en el Arduino

<img src="https://github.com/IDiegoUlises/Boton-Con-Resistencia-PULLUP-Interna/blob/master/images/Version-Solo-Boton-foto-real.jpg" width="900" height="600" />

Lo que sucede es que se esta utilizando la resistencia interna que tiene incorporada dentro del arduino con esto no necesitaras agregar una resistencia.


* **Para utilizar la resistencia interna agrega esta linea de codigo**

```C++
pinMode(boton, INPUT_PULLUP);
```
* **Recomendado para pruebas**
* **En caso que se queme no puedes remplazarla**
* **Evitas agregar una resistencia** 

**Advertencia:** La resistencia que tiene incorporada el arduino es una resistencia **SMD** tiene dificultades en disipar el calor y es mas propensa a quemarse en el caso que se presione durante largos periodos de tiempo.

**Advertencia 2:** Esta resistencia solo debe ser utilizarse para una comunicacion serial o para un boton porque son especializadas para esto en el caso que se utilize para otra cosa puedes quemar el arduino.

**Advertencia 3:** Nunca intentes utilizar esta resistencia para limitar la corriente de un motor o de un led no estan diseñadas para eso en el caso que se haga quemara el arduino.

## Conexion

<img src="https://github.com/IDiegoUlises/Boton-Con-Resistencia-PULLUP/blob/master/images/version-solo-boton-final.png" width="400" height="600" />

* Todos los pins del Arduino incorpora una resistencia **INPUT_PULLUP** para cada pin digital y analogico
