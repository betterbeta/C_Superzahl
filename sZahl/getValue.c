// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// GET INT AND DOUBLE
// V1.3 - 30.11.2014
// GERMAN TEXTS INCLUDED
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "getValue.h"


// Get Integer
int getInt (char text [] , int min , int max, int oldValue)
{
	char line[50];	// input line
	int Zahl;		// number from user
	char ch;		// char behind the number
	int geterror=1;	// geterrorindikator

	do {
		// print text on screen
		printf("%s (%d - %d, default: %d): ", text, min, max, oldValue);
		fflush(stdin);
		fgets(line,50,stdin);
		// return for "old value"
		if(*line=='\n'){
			Zahl=oldValue;
			geterror=0;
		}else
		// get the number and check if it's an number
			if(sscanf(line, "%d%c", &Zahl, &ch)!=2) {
			printf("Das war keine Zahl!\n");
		// check char behind
		} else 
			if(ch!=10) {
			printf("Hinter der Zahl darf kein anderes Zeichen stehen!\n");
		// check minimum
		} else 
			if(Zahl<min) {
			printf("Die Zahl war zu klein!\n");
		// check maximum
		} else 
			if(Zahl>max) {
			printf("Die Zahl war zu gro\341!\n");
		// all ok
		} else {
			geterror = 0;
		}
	
	} while(geterror);

	// return the number
	return Zahl;
}


// Geb an Double
double getDouble (char text [], double min, double max, double oldValue)
{
	char line[50];		// input line
	double Zahl;		// number from user
	char chs;			// char behind the number
	int geterror1 = 1;	// geterrorindikator

	do{
		// print text on screen
		printf("%s (%g - %g, default: %g)", text, min , max, oldValue);
		fflush(stdin);
		
		fgets(line,50,stdin);
		if(*line=='\n'){
			Zahl = oldValue;
			geterror1=0;
		}else
			if(sscanf(line, "%lf%c", &Zahl, &chs)!=2){
			printf("Das war keine Zahl!\n");
		}else 
			if(chs!=10){
			printf("Hinter der Zahl darf kein anderes Zeichen stehen!\n");
		}else 
			if(Zahl<min){
			printf("Die Zahl war zu klein!\n");
		}else 
			if(Zahl>max){
			printf("Die Zahl war zu gro\341!\n");
		}else{
			geterror1 = 0;
		}
		
	}while(geterror1 == 1);

	return Zahl;
}