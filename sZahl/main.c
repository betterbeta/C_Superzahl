/****************************************************************************/
/* Name			: Praktikum 2-3 Programmieren 2 (Große Zahlen)
/* Autor		: Kevin Luczak & Jannes Müller
/* Created		: 03.02.2015
/* Description	: main function
/* Version		: 1.50
/* Changes		:
/*		[03.02.2015 - V1.00] Created by Kevin Luczak & Jannes Müller
/*		[17.05.2015 - V1.20] Completly Restructed by F.Friederich
/*		[17.05.2015 - V1.30] Framework, redefine and copyxy functs added
/*							 by FF
/*		[17.05.2015	- V1.50] Multiplication and exponentation added by FF
/****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include "sZahl.h"
#include "getValue.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void redefine(sZahl *super);
void copyxy(sZahl *x, sZahl *y, sZahl *s);
void exponate(sZahl *x, sZahl *y);

int main(){
	unsigned exit = 0;
	int i = 0;

	// Generate 3 sZahl's
	sZahl number1;
	sZahl number2;
	sZahl solution;
	
	// set all null
	setNull(&number1);
	setNull(&number2);
	setNull(&solution);

	// Print Welcome Message on screen
	printf(HELLO_L1 "\n");
	printf(HELLO_L2 "\n");
	printf(HELLO_L3 "\n");
	printf(HELLO_L1 "\n");
	
	// framework
	while (exit == 0)
	{
		system("cls");
		printf(LOOP "\n");
		printf(LOOP_L0_CLOSE "\n");
		printf(LOOP_L1_DEFX "\n");
		printf(LOOP_L2_DEFY "\n");
		printf(LOOP_L3_COPY "\n");
		printf(LOOP_L4_COMPARE "\n");
		printf(LOOP_L5_ADDXY "\n");
		printf(LOOP_L6_MULTIXY "\n");
		printf(LOOP_L7_EXP "\n");
		printf(PRINTNOW "\n");
		printf("x = ");
		printSNumber(&number1);
		printf("\ny = ");
		printSNumber(&number2);
		printf("\nS = ");
		printSNumber(&solution);
		printf("\n");
		
		i = _getch();
		switch (i)
		{
		case '1': // (Re-)Define X:
			redefine(&number1);
			break;
		case '2': // (Re-)Define Y:
			redefine(&number2);
			break;
		case '3': system("cls");
			copyxy(&number1, &number2, &solution);
			break;
		case '4': // Compare
			switch(compare(&number1, &number2))
			{
			case 0: // equal
				printf(COMP_EQUAL "\n");
				break;
			case 1:
				printf(COMP_XBIG "\n");
				break;
			case 2:
				printf(COMP_YBIG "\n");
				break;
			default:
				break;
			}
			_getch();
			break;
		case '5': // add
			addSZahl(&number1, &number2, &solution);
			break;
		case '6': // multi
			multiSZahl(&number1, &number2, &solution);
			break;
		case '7': // exponate
			exponate(&number1, &number2);
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}


	
	return 0;
}

void redefine(sZahl *super)
{
	int i = 0;
	int exit = 0;

	// do as long as exit is 0
	while (exit == 0)
	{
		system("cls");
		printf(LOOP "\n");
		printf(LOOP_L0_BACK "\n");
		printf(RED_L1_NEW "\n");
		printf(RED_L2_NULL "\n");

		i = _getch();
		switch (i)
		{
		case '1': // Get from User
			getSZahl(super, GETSZAHL);
			exit = 1;
			break;
		case '2': // Set Null
			setNull(super);
			exit = 1;
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}
	

	return;
}

void copyxy(sZahl *x, sZahl *y, sZahl *s)
{
	int i = 0;
	int exit = 0;

	// do as long as exit is 0
	while (exit == 0)
	{
		system("cls");
		printf(LOOP "\n");
		printf(LOOP_L0_BACK "\n");
		printf(COPY_L1_XY "\n");
		printf(COPY_L2_YX "\n");
		printf(COPY_L3_XS "\n");
		printf(COPY_L4_YS "\n");

		i = _getch();
		switch (i)
		{
		case '1': // X to Y
			copy(x, y);
			exit = 1;
			break;
		case '2': // Y to X
			copy(y, x);
			exit = 1;
			break;
		case '3': // X to S
			copy(x, s);
			exit = 1;
			break;
		case '4': // Y to S
			copy(y, s);
			exit = 1;
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}
}

void exponate(sZahl *x, sZahl *y)
{
	int i = 0;
	int exp = 0;
	int exit = 0;

	sZahl buffer;
	setNull(&buffer);

	// do as long as exit is 0
	while (exit == 0)
	{
		system("cls");
		printf(EXP_CHOICE "\n");
		printf(LOOP_L0_BACK "\n");
		printf(EXP_X "\n");
		printf(EXP_Y "\n");

		i = _getch();
		switch (i)
		{
		case '1': // X
			exp = getInt(EXP_EXP, 1, 10000, 1);
			expSZahl(x, exp, &buffer);
			copy(&buffer, x);
			exit = 1;
			break;
		case '2': // Y
			exp = getInt(EXP_EXP, 1, 10000, 1);
			expSZahl(y, exp, &buffer);
			copy(&buffer, y);
			exit = 1;
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}
}