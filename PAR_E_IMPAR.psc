Algoritmo PAR_E_IMPAR
	NUM=0;
	Repetir
		NUM=NUM+1;
		Escribir "Ingresa un numero:"
		Leer NRO
		Si (NRO mod 2)=0 Entonces
			Escribir "El numero ", NRO, " es par"
		SiNo
			Escribir "El numero ", NRO, " no es par"
		FinSi
	Hasta Que NUM=10
FinAlgoritmo