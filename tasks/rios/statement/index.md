## Ada y el Río de los Algoritmos

En una simulación dentro de su Máquina Analítica, Ada Lovelace se enfrenta a un nuevo desafío: un río mágico hecho de datos flotantes. Sobre este río, hay un conjunto de "piedras de ejecución", cada una ubicada a una distancia específica desde la orilla izquierda. Cada piedra representa un paso intermedio en la ejecución de un algoritmo.

Para cruzar el río y llegar al resultado final, Ada debe saltar de piedra en piedra. Pero hay una condición: sus saltos representan ciclos de CPU, y por lo tanto, su energía computacional es limitada. No puede realizar saltos que excedan un cierto umbral D.

Ada quiere determinar cuál es el mínimo valor de D que le permita atravesar el río, partiendo desde la primera piedra y alcanzando la última sin realizar saltos que excedan esa distancia. Solo puede avanzar hacia adelante, y no puede saltar entre piedras que estén separadas por más de D.

<img src="img.png" width="400"/>

Tu misión es ayudar a Ada a calcular el valor óptimo de D.

### Entrada

La primera línea contiene un entero $N$ $(2 \leq n \leq 100,000)$ el número de piedras sobre el río.

La segunda línea contiene un entero $K$ $(2 \leq k \leq n)$ el número maximo de saltos que puedes dar.

La tercera línea contiene N enteros $P_1$, $P_2$, ..., $P_n$ $(0 \leq Pᵢ \leq 10⁹)$: la posición de cada piedra en el río, ordenadas en forma estrictamente creciente.

### Salida

Un solo entero: el mínimo valor de D tal que Ada pueda llegar desde P₁ hasta Pₙ sin realizar ningún salto mayor a D.

### Ejemplos

#### Ejemplo de entrada 

Entrada:
```
5
5
0 2 3 7 10
```
Salida:
```
4
```

## Subtareas

### Subtarea 1 (10 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
- $K = N$
- Para todo $1 \leq i < N$, se cumple que $P_i - P_{i+1}$ es constante

### Subtarea 2 (10 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
- $K = N$

### Subtarea 3 (30 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
- $1 \leq K \leq N$
