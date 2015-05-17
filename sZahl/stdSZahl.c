/****************************************************************************/
/* Name			: Praktikum 2 Programmieren 2 (Gro�e Zahlen)
/* Autor		: Frank Friederich
/* Created		: 17.05.2015
/* Description	: getter for sZahl
/*				  set Null for sZahl
/* Version		: 1.00
/* Changes		:
/*		[17.05.2015 - V1.00] Created by Frank Friederich
/****************************************************************************/

#include "sZahl.h"
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

// (re-)set sZahl to null
void setNull(sZahl *number){
	// reset length
	number->length = 0;

	// reset number
	for (size_t i = 0; i < 51; i++)
	{
		number->number[i] = 0;
	}
	
	return;
}

// solution = number1 + number2
void addSZahl(sZahl *number1, sZahl *number2, sZahl *solution)
{
	// add every part of both numbers
	for (size_t i = 0; i<51; i++){
		solution->number[i] = number1->number[i] + number2->number[i];
	}

	// check if any int is higher or equal 10
	// and correct it
	for (size_t i = 1; i<51; i++){
		if (solution->number[i] >= 10)
		{
			solution->number[i - 1]++;
			solution->number[i] = solution->number[i] - 10;
			i--;
		}
	}

	// set length of the number
	for (size_t i = 0; i < 50; i++)
	{
		if (solution->number[50 - i] != 0)
		{
			solution->length = i + 1;
		}
	}

	return;
}




// copy sZahl1 to sZahl2
void copy(sZahl *in, sZahl *out){
	// Copy content of numbers
	for (size_t i = 0; i < 51; i++)
	{
		out->number[i] = in->number[i];
	}
	// Copy the length
	out->length = in->length;

	return;
}

// compare number1 and number 2
// and returns 
// 0 -> same value,
// 1 -> number1>number2 or
// 2-> number2>number1
unsigned compare(sZahl *number1, sZahl *number2)
{
	unsigned solution = 0;
	for (size_t i = 1; i < 51; i++)
	{
		if (number1->number[i] != number2->number[i])
		{
			if (number1->number[i] > number2->number[i])
				solution = 1;
			else
				solution = 2;
		}
	}


	return solution;
}

// switch number1 to number2
// and number2 to number1
void switchSZahl(sZahl *number1, sZahl *number2)
{
	sZahl buffer;

	copy(number1, &buffer);
	copy(number2, number1);
	copy(&buffer, number2);

	return;
}