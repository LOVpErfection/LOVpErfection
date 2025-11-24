# Tema 2: Operadores para Efectos Visuales
【EVAアニメ】ものくろ 

## Descripción del Tema
En este tema aplicaremos operadores aritméticos y lógicos para crear sistemas de procesamiento de efectos visuales. Desarrollaremos cálculos para ajustar brillo, contraste, saturación y otros parámetros visuales, simulando el pipeline de procesamiento de video.

## 🔍 Explicación Detallada de Conceptos

### 1. Operadores Aritméticos en C++

**Operadores básicos:**
```cpp
int a = 10, b = 3;
int suma = a + b;          // 13
int resta = a - b;         // 7
int multiplicacion = a * b; // 30
int division = a / b;      // 3 (división entera)
float division_exacta = a / 3.0f; // 3.333... (división flotante)
int modulo = a % b;        // 1 (resto de la división)
```

**Operadores de asignación compuesta:**
```cpp
int valor = 10;
valor += 5;    // valor = 15
valor -= 3;    // valor = 12
valor *= 2;    // valor = 24
valor /= 4;    // valor = 6
```

### 2. Operadores de Comparación
```cpp
int x = 10, y = 20;
bool igual = (x == y);        // false
bool diferente = (x != y);    // true
bool mayor = (x > y);         // false
bool menor = (x < y);         // true
bool mayor_igual = (x >= 10); // true
bool menor_igual = (y <= 15); // false
```

### 3. Operadores Lógicos
```cpp
bool a = true, b = false;
bool and_result = a && b;     // false (AND)
bool or_result = a || b;      // true (OR)
bool not_result = !a;         // false (NOT)

// Combinaciones complejas
bool combinacion = (a && b) || (!a && b); // false
```

### 4. Precedencia de Operadores
El orden de evaluación es importante:
```cpp
int resultado = 10 + 5 * 2;   // 20, no 30 (* tiene mayor precedencia)
int con_parentesis = (10 + 5) * 2; // 30
```

### 5. Conversión de Tipos (Casting)
```cpp
int entero = 10;
float decimal = static_cast<float>(entero) / 3; // 3.333...
```

---
## Ejercicio para Resolver

**Objetivo:** Crear un sistema avanzado de procesamiento de efectos visuales para una escena de animación compleja.

**Instrucciones:**
1. Define los parámetros base para tres capas de efectos visuales:
   - Capa de fondo (background)
   - Capa de personajes (characters) 
   - Capa de efectos especiales (vfx)

2. Para cada capa, define:
   - Opacidad (0.0 a 1.0)
   - Brillo (0.0 a 2.0)
   - Nivel de desenfoque (0 a 10)
   - Tiempo de procesamiento en segundos

3. Calcula y muestra:
   - El promedio de opacidad de todas las capas
   - La capa con mayor brillo
   - El tiempo total de procesamiento
   - Si el sistema está listo para renderizar (todas las capas con opacidad > 0.5)

4. **Reto avanzado:**
   - Implementa un sistema de prioridades donde las capas con mayor brillo se procesen primero
   - Calcula el costo computacional total (suma de desenfoque × tiempo)
   - Determina si alguna capa excede los límites seguros (brillo > 1.5 o desenfoque > 8)

**Consejos:**
- Usa `static_cast<float>()` para conversiones cuando necesites precisión
- Los operadores lógicos `&&` y `||` son esenciales para las verificaciones
- Considera usar variables booleanas intermedias para hacer el código más legible
- No olvides incluir unidades en tus salidas (segundos, porcentajes, etc.)
