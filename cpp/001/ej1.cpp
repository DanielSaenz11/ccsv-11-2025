/*
* Escriba un programa en C++ que ayude a un usuario a comparar dos productos y decidir cuál es la mejor compra.
*
* Instrucciones:
* 
* - El programa debe pedir al usuario que ingrese el precio de dos productos diferentes.
* - Luego, debe solicitar el porcentaje de descuento que tiene cada uno (si no tienen descuento, ingresar 0).
* - Calcular el precio final de cada producto después del descuento.
* - Comparar los precios finales e indicar cuál es la mejor opción o si ambos cuestan lo mismo.
* - Mostrar el precio original, el descuento aplicado y el precio final de cada producto.
*/

#include <iostream>

int main() {
	double precio1, precio2, descuento1, descuento2;

	// Entrada de datos por medio de la terminal
	std::cout << "Ingrese el precio del primer producto: ";
	std::cin >> precio1;

	if (precio1 < 0) {
		std::cout << "El precio debe ser un valor positivo." << std::endl;
		return 1;
	}

	std::cout << "Ingrese el porcentaje de descuento del primer producto (%): ";
	std::cin >> descuento1;

	if ((descuento1 < 0) || (descuento1 > 100)) {
		std::cout << "El descuento debe ser un valor entre 0 y 100." << std::endl;
		return 1;
	}

	std::cout << "Ingrese el precio del segundo producto: ";
	std::cin >> precio2;

	if (precio2 < 0) {
		std::cout << "El precio debe ser un valor positivo." << std::endl;
		return 1;
	}

	std::cout << "Ingrese el porcentaje de descuento del segundo producto (%): ";
	std::cin >> descuento2;

	
	if ((descuento2 < 0) || (descuento2 > 100)) {
		std::cout << "El descuento debe ser un valor entre 0 y 100." << std::endl;
		return 1;
	}

	double precioFinal1 = precio1 * (1 - (descuento1 / 100));
	double precioFinal2 = precio2 * (1 - (descuento2 / 100));
	
	if (precioFinal1 == precioFinal2) {
		std::cout << "Los precios finales de los productos ingresados son los mismos." << std::endl;
	} else if (precioFinal1 < precioFinal2) {
		std::cout << "El primer producto es más barato que el segundo." << std::endl;
	} else {
		std::cout << "El segundo producto es más barato que el primero." << std::endl;
	}
	
	
	// Impresión de los datos finales
	
	// Para el producto 1
	std::cout << "== Producto 1 ==" << std::endl;
	std::cout << "Precio sin descuento: " << precio1 << std::endl;
	std::cout << "Descuento: " << descuento1 << std::endl;
	std::cout << "Precio final: " << precioFinal1 << std::endl;


	// Para el producto 2
	std::cout << "== Producto 2 ==" << std::endl;
	std::cout << "Precio sin descuento: " << precio2 << std::endl;
	std::cout << "Descuento: " << descuento2 << std::endl;
	std::cout << "Precio final: " << precioFinal2 << std::endl;

	return 0; // Condición de salida del programa
}
