/****************************************************************************/
/* Dateiname   : Praktikum 2 Programmieren 2 (Große Zahlen)                 */
/* Autor       : Kevin Luczak & Jannes Müller                               */
/* Erstellt am : 03.02.2015                                                 */
/* Version     : 1.00                                                       */
/* Beschreibung: Praktikum 15.05.2015 Programmieren 2                       */
/****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
	// Generate 3 sZahl's
	sZahl number1;
	sZahl number2;
	sZahl solution;
	
	printf(HELLO_L1);
	printf("\n");
	printf(HELLO_L2);
	printf("\n");
	printf(HELLO_L3);
	printf("\n");
	printf(HELLO_L4);
	printf("\n");

	// Ask User for the numbers
	getSZahl(&number1, GETSZAHL_1);
	getSZahl(&number2, GETSZAHL_1);
	


	/*
	char Buffer1[50];
	char Buffer2[50];

	Berechnung();
	Vergleich(Buffer1, Buffer2);
	XundYvertauschen();
	Nullsetzen();
	*/

	return 0;
}