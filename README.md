# os202210u1e2-Mcestradad
os202210u1e2-Mcestradad created by GitHub Classroom

# Patrón Observer

### El patrón observer consiste en la implementación de dos roles fundamentales en dos actores ficticios en un código.
### El primero sería el observador, que es aque pendiente de todo lo que hace el otro rol para actuar en respuesta a eso que visualiza, el segundo es el sujeto; aquel que realiza acciones para ser vistas por los observadores.

### Para emplear este metodo, primeramente es importante crear un sujeto y un observador. El sujeto, incluirá el observador y el sujeto .h mientras el observador solo incluirá el observador .h .
### Es importante entender que el sujeto debe tener las interfaces necesarias y mínimo dos métodos (registrar y eliminar) para un funcionamiento básico del patrón además de que el observador implementa dichas interfaces y funciones, para ejecutar los métodos de respuesta correspondientes a la información recibida en la notificación del sujeto y que dichos metodos pueden cambiar según sea la respuesta de algún observador.

## Para mi ejemplo:

### Mi ejemplo consiste en la implementación de una orquesta donde el sujeto es el director que realiza movimientos y los observadores son los músicos que responden a este con acciones diferentes.
### Es posible agregar unos cuantos observadores más para este problema de forma que más músicos o instrumentos diferentes respondan a los movimientos del director. Para ello se crean los archivos .c y .h con el nombre del instrumento y el código de las interfaces y los métodos para solo cambiar el nombre de algunas variables que claramente se incluyen en las líneas del sujeto

### Se puede probar el código, generando un main más pequeño con las entradas deseadas (nombres de músicos particulares tal como un violinistas o clarinetistas aislados)  y configuradas de forma manual o crear archivos de ejemplo para manejar la página a su antojo. Los comandos para ejecutar serían:
- gcc -Wall -c director.c -o director.o
- gcc -Wall -c violin.c -o violin.o
- gcc -Wall -c clarinete.c -o clarinete.o
- gcc -Wall -c timbal.c -o timbal.o
- gcc -Wall -c main.c -o main.o
- gcc -Wall main.o director.o violin.o clarinete.o timbal.o -o app

# LICENSE
The MIT License (MIT)

Copyright (c) <2014>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
