
# Clase 3: Strings, Namespaces, Switch y `for` loop en C++

## 1. Repaso breve de la clase anterior
Antes de continuar, repasemos lo aprendido en la clase anterior.

### Código de repaso
```cpp
int a = 10, b = 5;
cout << "Suma: " << (a + b) << endl;
if (a > b) {
    cout << "A es mayor que B." << endl;
}
```

## 2. Strings en C++

Los strings en C++ se manejan con la clase `std::string`, el cual permite manipular cadenas de texto fácilmente.

### 2.1 Declaración y Asignación de Strings

```cpp
#include <iostream>
#include <string> // Incluir biblioteca `string`

int main() {
    std::string mensaje = "Hola, mundo!";
    std::cout << mensaje << std::endl;
    return 0;
}
```

### 2.2 Concatenación de Strings

```cpp
std::string nombre = "Juan";
std::string saludo = "Hola, " + nombre + "!"; 
std::cout << saludo << std::endl;
```

### 2.3 Largo de un String

```cpp
std::string texto = "Ejemplo";
std::cout << "Longitud: " << texto.length() << std::endl;
```

### 2.4 Acceder a Caracteres de un String

```cpp
std::string palabra = "Hola";
std::cout << "Primer carácter: " << palabra[0] << std::endl;
palabra[0] = 'M';
std::cout << "Nueva palabra: " << palabra << std::endl;
```

### 2.5 Caracteres Especiales en Strings

| Secuencia | Significado |
|-----------|------------|
| `\n` | Nueva línea |
| `\t` | Tabulación |
| `\\` | Barra invertida |
| `\"` | Comillas dobles |

```cpp
std::cout << "Esto es una línea.\nY esta es otra." << std::endl;
```

### 2.6 Obtener Strings con Espacios desde `stdin`

```cpp
std::string nombre;
std::cout << "Ingrese su nombre: ";
std::cin >> nombre;  // Captura solo la primera palabra
std::cout << "Hola, " << nombre << std::endl;

cin.ignore();  // Ignorar el salto de línea pendiente

std::string frase;
std::cout << "Ingrese una frase: ";
std::getline(cin, frase);
std::cout << "Frase ingresada: " << frase << std::endl;
```

## 3. Namespaces en C++

Los namespaces permiten organizar el código y evitar conflictos de nombres.

### 3.1 Uso de `std::` sin `using namespace std;`

```cpp
#include <iostream>

int main() {
    std::cout << "Hola, mundo!" << std::endl;
    return 0;
}
```

### 3.2 Creación de un Namespace Propio

```cpp
#include <iostream>

// Creación de namespace nuevo
namespace MisFunciones {
    void saludar() {
        std::cout << "Hola desde un namespace!" << std::endl;
    }
}

int main() {
    MisFunciones::saludar();
    return 0;
}
```

## 4. `switch`: Uso de `break` y `default`

### 4.1 Estructura del `switch`

```cpp
int opcion;
std::cout << "Ingrese un número entre 1 y 3: ";
std::cin >> opcion;

switch (opcion) {
    case 1:
        std::cout << "Opción 1 seleccionada" << std::endl;
        break;
    case 2:
        std::cout << "Opción 2 seleccionada" << std::endl;
        break;
    case 3:
        std::cout << "Opción 3 seleccionada" << std::endl;
        break;
    default:
        std::cout << "Opción no válida" << std::endl;
}
```

## 5. Introducción al `for` loop en C++

### 5.1 Sintaxis del `for` loop

```cpp
for (inicialización; condición; actualización) {
    // Código a ejecutar
}
```

### 5.2 Ejemplo: Contar del 1 al 5

```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Número: " << i << endl;
}
```

### 5.3 Uso del `for` para recorrer un string

```cpp
std::string palabra = "Hola";

for (int i = 0; i < palabra.length(); i++) {
    std::cout << "Letra: " << palabra[i] << std::endl;
}
```

### 5.4 Uso del `for` con `auto`

```cpp
std::string palabra = "Hola";
for (char c : palabra) {
    std::cout << "Letra: " << c << std::endl;
}
```

