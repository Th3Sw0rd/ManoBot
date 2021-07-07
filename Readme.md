# ManoBot

## Resumen
El proyecto *ManoBot* consta del diseño y desarrollo de una mano ortopédica que consta de un controlador para adquihirir la capacidad de hacer lectura de las señales EMG que se obtienen del brazo para luego procesarlas y codificarles en señales que pueda reproducir movimientos intencionales en los motores del prototipo ortopédico. El proyecto fue presentado en la Universidad Nacional Tecnologíca (UTN, Argentina) por un grupo de estudiantes del Instituto Técnico Maria Reina. Aunque el prototipo no alcanzó a funcionar correctamente para las presentaciones de los proyectos finales recibió grandes halagos por el equipo de ingenieros que calificó el trabajo.

## Abstract
*ManoBot* is a project that consist in the development and designment of a orthopedic hand with a in-built controller and EMG sensors to read the signals from the arm and codify them into actually signals that works for reproduce the well intentional movements of the prototype motors. At first, this project was for the final projects presentations on the Technological National University (UTN, Argentina) by a group of students from Maria Reina Technical Institute. Altough this didn't actually work for the presentation it brought with a lot of recomendations from the engineers team that qualified the job.

## Integrantes
Los integrantes del equipo son:
* Nicolás Ezequiel Galván (Electrónica)
* Tobias Ismael Juhasz (Programación)
* Matias Ezequiel Dorrego (Programación)

### Agracedimientos
A nuestras familias que nos viven apoyando en todos los buenos y malos momentos.

## Intenciones de diseño y desarrollo
*ManoBot* principalmente fue diseñado para la búsqueda de un sistema ortopédico económico y fácil de hacer en el hogar. Por eso, se buscó que el programa sea lo más legible posible para un principiante que quisiera editar el programa. Además, si bien el sistema no está pensado para otras extremidades del cuerpo humano, este podría ser fácilmente adaptado por terceros para que cumpla con los requerimientos.

## Componentes para el diseño del circuito de la mano ortopédica
Los componentes utilizados convergieron de un gran número de fuentes distintas en los que se encontraron dispositivos como un Sensor EMG casero, una placa Arduino Nano, Servomotores y una protesis para mano impresa en 3D. Gracias a la facilidad en la programación, la instalación para el uso de los sensores y el control de los Servomotores resulta prácticamente obvia, pero se debe destacar que los Servomotores necesariamente deben ir en los puertos PWD que modulan la señal de las salidas digitales para que los servomotores entiendan el movimiento que deben producir, y la lectura de la señal del sensor debe ingresar necesariamente por alguna entrada analógica.

### Derechos de uso del código
El código no está sujeto a ninguna política, y puede ser utilizado libremente para fines que ayuden a mejorar a la humanidad.
