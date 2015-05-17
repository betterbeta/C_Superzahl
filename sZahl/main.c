/****************************************************************************/
/* Name			: Praktikum 2 Programmieren 2 (Große Zahlen)
/* Autor		: Kevin Luczak & Jannes Müller
/* Created		: 03.02.2015
/* Description	: main function
/* Version		: 1.20
/* Changes		:
/*		[03.02.2015 - V1.00] Created by Kevin Luczak & Jannes Müller
/*		[17.05.2015 - V1.20] Completly Restructed by F.Friederich
/****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include "sZahl.h"
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
	
	return 0;
}