Algoritmo INVERTIDO
	INVERSO <- 0
	Escribir "Ingresa un numero para mostrarlo inverso:"
	Leer NUMERO
	RESIDUO <- NUMERO
	Mientras RESIDUO > 0 Hacer
		INVERSO <- INVERSO * 10 + RESIDUO mod 10;
		RESIDUO <- (RESIDUO - RESIDUO mod 10) / 10;
	FinMientras
	Escribir "El valor del numero inverso es: ", INVERSO;
FinAlgoritmo