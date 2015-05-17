/****************************************************************************/
/* Name			: Praktikum 2 Programmieren 2 (Große Zahlen)
/* Autor		: Kevin Luczak & Jannes Müller
/* Created		: 03.02.2015
/* Description	: main function
/* Version		: 1.20
/* Changes		:
/*		[03.02.2015 - V1.00] Created by Kevin Luczak & Jannes Müller
/*		[17.05.2015 - V1.20] Completly Restructed by F.Friederich
/*		[17.05.2015 - V1.30] Framework, redefine and copyxy functs added
/*							 by F.Friederich
/****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include "sZahl.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void redefine(sZahl *super);
void copyxy(sZahl *super1, sZahl *super2);

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
			copyxy(&number1, &number2);
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
		case '5': system("cls");
			addSZahl(&number1, &number2, &solution);
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
			setNull;
			exit = 1;
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}
	

	return;
}

void copyxy(sZahl *super1, sZahl *super2)
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

		i = _getch();
		switch (i)
		{
		case '1': // X to Y
			copy(super1, super2);
			exit = 1;
			break;
		case '2': // Y to X
			copy(super2, super1);
			exit = 1;
			break;
		case '0': exit = 1;
			break;
		default: break;
		}
	}
}