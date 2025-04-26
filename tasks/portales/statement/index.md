# Ada y los Portales Mágicos

Ada Lovelace está explorando un bosque lleno de portales mágicos. Cada portal tiene un número mágico y aparece en un momento diferente del día.

Cada vez que aparece un nuevo portal, Ada quiere saber cuál fue el último portal con número menor al actual. Si no hay ninguno, anota `-1`.

![Ada y los portales](img.png)


Ayúdala a encontrar esa información para cada portal que aparece.

## Entrada

Una línea con un número $N$ $(1 \leq N \leq 10^5)$ - la cantidad de portales.

Una línea con N números mágicos $P_1$, ..., $P_n$ $(1 \leq P_i \leq 10^9)$: uno por cada portal.

## Salida

Para cada portal, imprime el mayor número menor que haya aparecido antes. Si no hay, imprime `-1`.

## Ejemplos

### Ejemplo 1

Entrada:
```
5
3 1 4 2 5
```

Salida:
```
-1
-1
3
1
4
```

Explicación:

- Para 3: no hay portales antes, resultado -1
- Para 1: no hay menores antes, resultado -1
- Para 4: 3 es el mayor menor
- Para 2: 1 es el mayor menor
- Para 5: 4 es el mayor menor

## Subtareas

### Subtarea 1 (10 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
- Para todo $1 \leq i < N$, se cumple que $P_i < P_{i+1}$, los números mágicos aparecerán ordenados en forma creciente

### Subtarea 2 (10 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
- Para todo $1 \leq i < N$, se cumple que $P_i > P_{i+1}$, los números mágicos aparecerán ordenados en forma decreciente

### Subtarea 3 (30 puntos)
- $1 \leq N \leq 100$
- $1 \leq P_i \leq 10^9$

### Subtarea 3 (50 puntos)
- $1 \leq N \leq 10^5$
- $1 \leq P_i \leq 10^9$
