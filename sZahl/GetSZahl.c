/****************************************************************************/
/* Name			: Praktikum 2 Programmieren 2 (Groﬂe Zahlen)
/* Autor		: Frank Friederich
/* Created		: 17.05.2015
/* Version		: 1.00
/* Description	: getter for sZahl
/****************************************************************************/

#include "Header.h"
#include <stdio.h>
#include <string.h>

void getSZahl(sZahl *number, char text[])
{
	int i = 0;
	int k = 0;
	int j = 0;

	char buffer[51];

	

	// get Numbers from User
	printf("%s\n",text);
	// get max 50 chars in buffer
	fgets(buffer, 50, stdin);
	// initialize the length with zero
	number->length = 0;
	// fill from last to first
	for (i = 0; i<(strlen(buffer)); i++)
	{
		j = i - k;
		switch (buffer[(strlen(buffer) - 1) - i])
		{
		case '0': number->number[50 - j] = 0;
			number->length++;
			break;
		case '1': number->number[50 - j] = 1;
			number->length++;
			break;
		case '2': number->number[50 - j] = 2;
			number->length++;
			break;
		case '3': number->number[50 - j] = 3;
			number->length++;
			break;
		case '4': number->number[50 - j] = 4;
			number->length++;
			break;
		case '5': number->number[50 - j] = 5;
			number->length++;
			break;
		case '6': number->number[50 - j] = 6;
			number->length++;
			break;
		case '7': number->number[50 - j] = 7;
			number->length++;
			break;
		case '8': number->number[50 - j] = 8;
			number->length++;
			break;
		case '9': number->number[50 - j] = 9;
			number->length++;
			break;

		default: k++;
			break;
		}
	}

	return;
}