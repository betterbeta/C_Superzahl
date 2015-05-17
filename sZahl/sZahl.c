/****************************************************************************/
/* Name			: Praktikum 2-3 Programmieren 2 (Groﬂe Zahlen)
/* Autor		: Frank Friederich
/* Created		: 17.05.2015
/* Description	: standard functions for type sZahl
/* Version		: 1.20
/* Changes		:
/*		[17.05.2015 - V1.00] Created by Frank Friederich
/*		[17.05.2015 - V1.10] printSNumber added by FF
/*		[17.05.2015 - V1.11] just little bugfix by FF
/*		[17.05.2015	- V1.20] Multiplication, 
/*							 setLength and exponentiate
/*							 added by FF
/****************************************************************************/

#include "sZahl.h"
#include <stdio.h>
#include <string.h>

// gets sZahl from User
void getSZahl(sZahl *number, char text[])
{
	unsigned i = 0;
	unsigned k = 0;
	unsigned j = 0;

	char buffer[51];

	// set number to 0
	setNull(number);
	// get Numbers from User
	printf("%s\n",text);
	// get max 50 chars in buffer
	fgets(buffer, 50, stdin);
	// fill from last to first
	for (i = 0; i<(strlen(buffer)); i++)
	{
		j = i - k;
		switch (buffer[(strlen(buffer) - 1) - i])
		{
		case '0': number->number[50 - j] = 0;
			break;
		case '1': number->number[50 - j] = 1;
			break;
		case '2': number->number[50 - j] = 2;
			break;
		case '3': number->number[50 - j] = 3;
			break;
		case '4': number->number[50 - j] = 4;
			break;
		case '5': number->number[50 - j] = 5;
			break;
		case '6': number->number[50 - j] = 6;
			break;
		case '7': number->number[50 - j] = 7;
			break;
		case '8': number->number[50 - j] = 8;
			break;
		case '9': number->number[50 - j] = 9;
			break;

		default: k++;
			break;
		}
	}

	setSZahlLength(number);

	return;
}

// (re-)set sZahl to null
void setNull(sZahl *number)
{
	// reset length
	number->length = 0;

	// reset number
	for (size_t i = 0; i < 51; i++)
	{
		number->number[i] = 0;
	}
	
	return;
}

void printSNumber(sZahl *number)
{
	unsigned i = 0;
	unsigned startPoint = 51-number->length;
	if (startPoint == 51)
		startPoint = 50;

	for (size_t i = startPoint ; i < 51; i++)
	{
		printf("%d", number->number[i]);
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

	setSZahlLength(solution);
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

// multiplies 2 sZahl's
void multiSZahl(sZahl *number1, sZahl *number2, sZahl *solution)
{
	sZahl buffer[51];
	for (size_t i = 0; i < 51; i++)
	{
		setNull(&buffer[i]);
	}

	setNull(solution);

	for (size_t i = 0; i < 50; i++)
	{	// Buffer index 50 downto 1

		for (size_t j = 0; j < 50; j++)
		{	// Number index 50 downto 1
			buffer[50 - i].number[50 - j-i] = buffer[50 - i].number[50 - j-i] + (number2->number[50 - i] * number1->number[50 - j]);

			while (buffer->number[50 - j] >= 10)
			{
				buffer->number[49 - j]++;
				buffer->number[50 - j] = buffer->number[50 - j] - 10;
			}
		}
		setSZahlLength(&buffer[i]);

		// uses buffer[0] for solution buffering
		copy(solution, &buffer[0]);
		addSZahl(&buffer[0], &buffer[50 - i], solution);
	}


}

// set length of sZahl
void setSZahlLength(sZahl *super)
{
	super->length = 0;
	// set length of the number
	for (size_t i = 0; i < 50; i++)
	{
		if (super->number[50 - i] != 0)
		{
			super->length = i + 1;
		}
	}
}

void expSZahl(sZahl *super, unsigned exp, sZahl *solution)
{
	sZahl buffer;
	setNull(&buffer);

	copy(super, &buffer);
	
	for (size_t i = 1; i < exp; i++)
	{
		multiSZahl(super, &buffer, solution);
		copy(solution, &buffer);
	}
}