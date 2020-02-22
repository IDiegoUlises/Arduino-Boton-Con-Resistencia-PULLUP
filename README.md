# Arduino Utilizando Resistencia PullUP interna


### Esto es un Pulsador Mecanico

<img src="https://github.com/IDiegoUlises/Boton-Con-Resistencia-PULLUP-Interna/blob/master/images/pulsador.jpg" width="200" height="200" />

* La razon por cual debe utilizar una resistencia **PullUP** es porque que el **microcontrolador** es demasiado **rapido** 

Es decir tu presionas el boton solo 1 vez pero el arduino como es muy rapido detectara que tu pulsaste el boton mas de 10 veces es decir que la intruccion que hayas programado se ejecutara 10 veces seguidas.

**Como evitar esto:** Con una resistencia **PullUP** y simplemente es una resistencia comun y corriente con la diferencia que se utilizara con el proposito de evitar este problema

**¿Porque lo soluciona una resistencia?**
Imagina un capicitador que lo que hace es retener una corriente esta resistencia hace lo contrario elimina la corriente inecesaria

**¿Porque existe este problema?** Simplemente porque somos seres humanos y tenemos que presionar el boton con nuestra mano y al hacerlo nos demoramos **microsegundos** es como si presionaramos el boton mas de 10 veces seguidas.


## Solucion Con Codigo

```C++
delay(150); 
```

Agregando un tiempo de retarto despues de realizar la lectura del boton ``` read(); ```

* No recomendado
* Nuestro arduino se volvera lento
* No se pueden utilizar en interupciones 
