/*
Escriba un programa en C++ que permita a un profesor ingresar las notas de un grupo de estudiantes, calcular el promedio y determinar la calificación general de acuerdo con un rango predefinido.

Instrucciones:

- Pedir al usuario que ingrese cuántos estudiantes hay en el grupo.
- Usar un for loop para solicitar y sumar las notas de cada estudiante.
- Calcular el promedio de las notas.
- Usar un switch para determinar la calificación general de acuerdo con el siguiente criterio:
	90 - 100 → A
	80 - 89 → B
	70 - 79 → C
	60 - 69 → D
	Menos de 60 → F
- Mostrar la cantidad de estudiantes, el promedio de notas y la calificación final.
*/

#include <iostream>

int main() {
	// Solicitar número de estudiantes
	int numEstudiantes;
	std::cout << "Ingrese el número de estudiantes del grupo: ";
	std::cin >> numEstudiantes;

	// Solicitar n notas
	float totalNotas = 0;
	for (int i = 1; i <= numEstudiantes; i++) {
		std::cout << "Ingrese la nota del estudiante " << i << ": ";
		
		// Ingresar nota individual
		int nota;
		std::cin >> nota;

		// Agregar al total de notas
		totalNotas += nota;
	}

	// Calcular el promedio de notas
	float promedio = totalNotas / numEstudiantes;

	// Declaración de variable que guarda la nota
	char calificacion;

	// Determinar la calificación
	switch (static_cast<int>(promedio) / 10) {
		case 10:
		case 9:
			calificacion = 'A';
			break;
		case 8:
			calificacion = 'B';
			break;
		case 7:
			calificacion = 'C';
			break;
		case 6:
			calificacion = 'D';
			break;
		default:
			calificacion = 'F';
	}

	// Mostrar los resultados
	std::cout << "\nCantidad de estudiantes: " << numEstudiantes << std::endl;
	std::cout << "Promedio de las notas: " << promedio << std::endl;
	std::cout << "Calificación final: " << calificacion << std::endl;

	return 0;
}

