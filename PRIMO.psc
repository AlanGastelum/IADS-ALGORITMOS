Algoritmo PRIMO
	Escribir "Ingresa un numero entero:"
	leer NUMINGRESADO;
	INTERACCION = 1;
	Mientras INTERACCION <= NUMINGRESADO Hacer
		Si (NUMINGRESADO % INTERACCION == 0) Entonces
			DIVRESIDUOCERO = DIVRESIDUOCERO + 1;
		FinSi
		INTERACCION = INTERACCION + 1
	FinMientras
	Si (DIVRESIDUOCERO == 2) Entonces
		Escribir "el numero ", NUMINGRESADO " es primo"
	Sino
		Escribir "el numero ", NUMINGRESADO " no es primo"
	FinSi
FinAlgoritmo