# Blackjack

El proyecto de Blackjack se centra en la creación de un software que simule el juego de
Blackjack empleando los principios de la programación orientada a objetos. La meta
primordial es diseñar un sistema en el que los elementos del juego, como las cartas, el
mazo y los jugadores (incluyendo al crupier), se representan como objetos individuales con
sus propias responsabilidades y la forma en que interactúan entre sí.
El software deberá implementar las reglas fundamentales del Blackjack. Esto abarca el
reparto inicial de cartas, la opción para los jugadores de solicitar cartas adicionales con el fin
de acercarse a una puntuación de 21 sin exceder dicho valor, el cálculo del valor total de las
manos de los jugadores y del crupier, y la determinación del ganador de cada ronda.
A lo largo del desarrollo del proyecto, se hará uso de los cuatro pilares de la programación
orientada a objetos: la abstracción (identificando las clases esenciales como Carta, Mazo,
Jugador, etc.), el encapsulamiento (ocultando los detalles internos de cada objeto), la
herencia (que podría aplicarse para extender la funcionalidad del juego con diferentes tipos
de jugadores o mazos, aunque no se detalla específicamente en las primeras etapas) y el
polimorfismo (permitiendo que diferentes objetos respondan de manera distinta a un mismo
mensaje, como el cálculo del valor de una mano).
Para gestionar el flujo del juego y las interacciones entre los jugadores y el crupier, se
emplea una clase controladora o un patrón de diseño adecuado. Además, se prestará
especial atención a la documentación de cada una de las clases y sus implementaciones,
detallando su propósito, atributos y métodos. La implementación de pruebas unitarias será
crucial para asegurar el correcto funcionamiento de cada componente del sistema bajo
diversas condiciones.
Como puntos adicionales, se ha considerado la posibilidad de desarrollar una interfaz
gráfica de usuario (GUI) para el juego, extender la aplicación para permitir la participación
de múltiples jugadores simultáneamente y crear una interfaz de programación de
aplicaciones (API) que permita a otros sistemas interactuar con la lógica del juego.
El proyecto se abordará de manera iterativa, dividiéndose en dos entregas. Cada entrega
tendrá objetivos específicos, comenzando con la identificación de los requisitos del juego y
el diseño inicial de las clases, avanzando hacia la implementación detallada y culminando
con la creación de prototipos funcionales y de la interfaz de usuario.
Requerimientos del Juego de Blackjack :
Los requerimientos funcionales clave para el juego de Blackjack son:
● Objetivo del Jugador: Tomar cartas hasta que la suma de sus valores nominales
sea 21 o lo más cerca posible sin excederlo. Si excede 21, pierde. Si las dos
primeras cartas suman 21, tiene Blackjack.
● Objetivo del Crupier: Reparte cartas, ofrecer cartas adicionales a los jugadores,
mostrar la mano (total o parcialmente), calcular el valor de la mano, contar las cartas
en la mano, determinar el ganador y comenzar una nueva mano. El crupier juega
contra uno o todos los jugadores.
● Requisitos de las Cartas: Cada carta debe conocer su valor nominal y poder
informar. El palo no es importante inicialmente. Todas las cartas pertenecen a una
baraja. El As puede valer 1 u 11. Las figuras (K, Q, J) valen 10, y las demás cartas
valen su número nominal.
● Requisitos del Mazo: Debe poder repartir la siguiente carta e informar cuántas
cartas quedan.
● Requisitos del Jugador: Debe poder solicitar cartas ("pedir"). Debe poder mostrar
su mano, calcular el valor de su mano y contar las cartas en ella. Debe responder
cuando el crupier le pregunta si quiere otra carta o comenzar un nuevo juego.
● Reglas del Juego:
○ Si la puntuación del jugador está más cerca de 21 que la del crupier (sin
exceder 21), el jugador gana una cantidad igual a su apuesta.
○ Si el jugador gana con Blackjack, gana 3 a 2 veces su apuesta (si el crupier
no también tiene Blackjack).
○ Si la puntuación del jugador supera 21, pierde la apuesta.
○ El Blackjack supera otras combinaciones de 21.
○ Si el jugador y el crupier tienen la misma puntuación de al menos 17, es un
empate y el jugador recupera su apuesta.
Documentar los Archivos de Definición de Clases (.h): los archivos .h deben contener
la declaración de cada clase, incluyendo sus atributos (variables miembro) y la firma de
sus métodos (funciones miembro). Además, deben incluir documentación para cada
clase y sus miembros. Esto se puede hacer utilizando comentarios (por ejemplo, con
sintaxis de Doxygen) que expliquen el propósito de la clase, qué representan sus atributos y
qué hace cada uno de sus métodos, incluyendo precondiciones, postcondiciones y cualquier
otra información relevante. La documentación de la carta CRC también se incluye en los
archivos .h.
Documentar los Archivos de Implementación (.cpp): los archivos .cpp contienen la
implementación (el código) de los métodos declarados en los archivos .h. Estos archivos
también deben estar documentados, explicando la lógica interna de cada método, las
decisiones de diseño tomadas y cualquier detalle importante para entender el
funcionamiento del código.
Entregas del Proyecto :
El proyecto se desarrolla en dos entregas, cada una con objetivos específicos:
Primera Entrega:
1. Requerimientos identifica el requerimiento, su descripción, entradas y resultados
2. Entregar el diagrama de clases del proyecto
3. Entregar los archivos de definición de las clases (.h)
4. Entregar una primera versión del modelo de concepto del programa, un programa
básico que demuestre que la implementación del diagrama de clases funciona.
Segunda Entrega:
Utilización de los 4 Pilares de la Programación Orientada a Objetos (POO):
● Abstracción: Se aplica desde el inicio al identificar las clases relevantes para el
problema del Blackjack (Carta, Mazo, Jugador, Crupier, Mano, etc.). Definir sus
responsabilidades. Se enfoca en los aspectos esenciales de cada objeto, ignorando
los detalles irrelevantes.
● Encapsulamiento: La tercera entrega requiere verificar la aplicación del
encapsulamiento. Esto implica ocultar el estado interno (atributos) de los objetos y
proporcionar métodos públicos para interactuar con ellos de manera controlada.
Los archivos .h contendrán las declaraciones públicas (interfaz), mientras que los
archivos .cpp contendrán la implementación (detalles internos).
● Herencia: La tercera entrega también pide verificar la aplicación de la herencia.
Aunque no se detalla un ejemplo específico en las primeras etapas, podrías
considerar la herencia si decides extender el juego con diferentes tipos de jugadores
(por ejemplo, un jugador "agresivo" que siempre pide carta hasta cierto punto) o
diferentes tipos de mazos (aunque la fuente menciona considerar subclases para
mazos con comodines, pero también plantea alternativas).
● Polimorfismo: La quinta entrega se centra en la integración del concepto de
polimorfismo. Esto significa que objetos de diferentes clases pueden responder al
mismo mensaje (llamada a un método) de maneras distintas. Por ejemplo, un
método para "calcularValorMano()" podría comportarse de manera ligeramente
diferente para la mano de un jugador y la mano del crupier, especialmente en cómo
manejan la flexibilidad del valor del As (1 u 11).
1. Verificar la aplicación del encapsulamiento en el diagrama de clases (versión 1.0) y
su implementación, corrigiendo si no se aplica.
2. Verificar la aplicación de la herencia en el diagrama de clases (versión 1.0) y su
implementación, corrigiendo si no se aplica.
3. Verificar la aplicación del polimorfismo en el diagrama de clases (versión 1.0) y su
implementación, corrigiendo si es necesario.
Utilizar una Clase Controladora o Patrón de Diseño: analizar la aplicación de una clase
controladora o un patrón de diseño. Una clase controladora actuaría como un
intermediario entre las diferentes clases del juego, gestionando el flujo del juego, las
interacciones entre el jugador y el crupier, y la aplicación de las reglas. Un patrón de diseño
como el State podría ser útil para modelar los diferentes estados del juego (repartiendo,
turno del jugador, turno del crupier, determinando el ganador).
4. Analizar el diagrama de clases (versión 1.0) y su implementación, verificando la
aplicación de una clase controladora y corregir si no se aplica.
5. Entregar el diagrama de clases del proyecto (versión 2.0)
6. Entregar la implementación de las definiciones de las clases con su respectiva
documentación (archivos .h) (versión 2.0).
7. Entregar la implementación de las clases con su respectiva documentación (archivos
.cpp) (versión 2.0).
8. Implementación de pruebas unitarias utilizando assert o try test para cada
método del proyecto. La implementación de pruebas unitarias. Esto implica escribir
código que pruebe individualmente cada método de cada clase para asegurar que
funcionan correctamente bajo diferentes condiciones. Se pueden utilizar
herramientas como assert (para comprobaciones básicas), bloques try-catch
(para manejar excepciones). Las pruebas deben cubrir casos comunes, casos límite
y posibles errores.
9. Entregar una versión del programa, que demuestre el correcto funcionamiento de la
implementación del diagrama de clases actualizado y cumpla con los requisitos.
10. Entregar un prototipo de la interfaz de usuario: puede ser un conjunto de menús
enlazados en modo texto.
Puntos Extra:
● Crear un GUI del juego (Graphical User Interface): Esto implicaría utilizar una
biblioteca gráfica (como Qt, wxWidgets, Tkinter, etc.) para crear una interfaz visual
interactiva para el juego de Blackjack.
● Hacer un juego para varios jugadores: Esto requeriría extender el diseño para
manejar múltiples objetos de la clase Jugador y gestionar las interacciones de cada
uno con el Crupier.
● Hacer una API del juego: Esto implicaría diseñar un conjunto de interfaces
(probablemente en forma de clases y métodos públicos bien definidos) que permitan
a otras partes del sistema (o incluso otros sistemas) interactuar con la lógica del
juego de Blackjack sin necesidad de una interfaz de usuario específica. Esto se
enfoca en la funcionalidad principal del juego.
