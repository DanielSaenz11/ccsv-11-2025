
# Clase 2: Variables, Operadores, Condicionales y Comentarios en C++

## **1. Comentarios en C++**

Los comentarios en C++ ayudan a documentar el código sin afectar su ejecución. Existen dos tipos:

### Comentario de una línea

Se usa `//` antes del texto a comentar:

```cpp
int edad = 17;  // Comentario al final de la línea
```

### Comentario de múltiples líneas

Se encierra entre `/* */`:

```cpp
/*
   Este es un comentario de varias líneas.
*/
```

### Buenas prácticas al comentar

- No comentar obviedades.
- Explicar el propósito de secciones de código importantes.
- Evitar comentarios excesivos.

## 2. Declaración y Definición de Variables

### Declaración vs Definición

- **Declaración:** Se informa al compilador que una variable existe.
- **Definición:** Se reserva memoria y se asigna un valor inicial.

```cpp
int edad;  // Declaración
edad = 18; // Definición
int temperatura = 36;  // Declaración y definición en una sola línea
```

### Definición de múltiples variables en una línea

Se pueden definir varias variables del **mismo tipo** en una sóla línea:

```cpp
int a = 5, b = 10, c = 15;
float x = 3.14, y = 2.71;
```

### Convenciones para nombrar variables

- Debe comenzar con una letra o `_`.
- No puede ser una palabra reservada (`int`, `return`, `if`, entre otros).
- **Buenas prácticas**:
  - Usar nombres descriptivos.
  - Utilizar convenciones reconocidas: `camelCase` o `snake_case`.

### Uso de `const`

Para definir valores que no deben cambiar durante el tiempo de ejecución:

```cpp
const double PI = 3.14159;
const int MAX_INTENTOS = 3;
```
Intentar modificar una variable `const` generará un error de compilación. Además, se debe asignar un valor a la variable constante desde el inicio.

## Operadores en C++

### Operadores Aritméticos

Realizan operaciones matemáticas básicas.

| Operador | Descripción | Ejemplo |
|----------|-------------|---------|
| `+`      | Suma        | `a + b` |
| `-`      | Resta       | `a - b` |
| `*`      | Multiplicación | `a * b` |
| `/`      | División    | `a / b` |
| `%`      | Módulo      | `a % b` |


```cpp
int a = 10, b = 3;
cout << "Suma: " << a + b << endl;
cout << "Residuo: " << a % b << endl;
```

### Operadores de Asignación

Se usan para asignar valores a variables.

| Operador | Descripción | Ejemplo |
|----------|------------|---------|
| `=` | Asignación | `a = 10` |
| `+=` | Suma y asigna | `a += 5` (equivale a `a = a + 5`) |
| `-=` | Resta y asigna | `a -= 3` (equivale a `a = a - 3`) |
| `*=` | Multiplica y asigna | `a *= 2` (equivale a `a = a * 2`) |
| `/=` | Divide y asigna | `a /= 4` (equivale a `a = a / 4`) |

### Operadores de Comparación

Permiten comparar dos valores y devuelven `true` o `false`.

| Operador | Descripción | Ejemplo (`a = 5, b = 10`) | Resultado |
|----------|------------|-------------------------|-----------|
| `==` | Igual a | `a == b` | `false` |
| `!=` | Diferente de | `a != b` | `true` |
| `<` | Menor que | `a < b` | `true` |
| `>` | Mayor que | `a > b` | `false` |
| `<=` | Menor o igual que | `a <= b` | `true` |
| `>=` | Mayor o igual que | `a >= b` | `false` |

### Operadores Lógicos

Se usan para evaluar múltiples condiciones.

| Operador | Descripción | Ejemplo |
|----------|------------|---------|
| `&&` | AND lógico | `(a > 0) && (b > 0)` |
| `\|\|` | OR lógico | `(a > 0) \|\| (b < 0)` |
| `!` | NOT lógico | `!(a > b)` |

## Condicionales (`if`, `else if`, `else`)

Los condicionales permiten ejecutar código basado en una condición.

### **Ejemplo: Evaluar edad**

En el ejercicio a continuación, se tiene un programa que verifica si el valor que se ingresa a la variable `edad`, por medio de la terminal, es mayor o igual a 18.

```cpp
int edad;
cout << "Ingrese su edad: ";
cin >> edad;

if (edad >= 18) {
    cout << "Eres mayor de edad." << endl;
} else {
    cout << "Eres menor de edad." << endl;
}
```

### Estructura básica

La estructura básica para utilizar condicionales se muestra a continuación:

```cpp
if (condición) {
    // Código si se cumple la condición
} else if (otra condición) {
    // Código si se cumple la otra condición
} else {
    // Código si no se cumple ninguna condición
}
```

