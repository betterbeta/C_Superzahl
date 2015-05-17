#include "Header.h"	
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int number[51];
}sZahl;

struct S_Zahl // Deklaration einer Struktur
{
	int Eingabevektor1[51];
	int *pEingabevektor1;
	unsigned length1;
	int Eingabevektor2[51];
	int *pEingabevektor2;
	unsigned length2;
	int AddVektor[51];
	int *zahl;
}Superzahl;

void Berechnung(){
	unsigned int i;
	int j,k;

	char Buffer[51];

	char Buffer1[50];	//OLD
	char Buffer2[50];	//OLD


	k=0;
	j=0;
	printf("Rechnen mit grossen Zahlen\n");
	printf("Ganze Zahl x eingeben:");
	fgets(Buffer1,50,stdin);

	Superzahl.length1 = 0;
	for(i=0;i<(strlen(Buffer1));i++)
	{
		j=i-k;
		switch(Buffer1[(strlen(Buffer1)-1)-i])
		{
		case '0': Superzahl.Eingabevektor1[50-j] = 0;
			Superzahl.length1++;
			break;
		case '1': Superzahl.Eingabevektor1[50-j] = 1;
			Superzahl.length1++;
			break;
		case '2': Superzahl.Eingabevektor1[50-j] = 2;
			Superzahl.length1++;
			break;
		case '3': Superzahl.Eingabevektor1[50-j] = 3;
			Superzahl.length1++;
			break;
		case '4': Superzahl.Eingabevektor1[50-j] = 4;
			Superzahl.length1++;
			break;
		case '5': Superzahl.Eingabevektor1[50-j] = 5;
			Superzahl.length1++;
			break;
		case '6': Superzahl.Eingabevektor1[50-j] = 6;
			Superzahl.length1++;
			break;
		case '7': Superzahl.Eingabevektor1[50-j] = 7;
			Superzahl.length1++;
			break;
		case '8': Superzahl.Eingabevektor1[50-j] = 8;
			Superzahl.length1++;
			break;
		case '9': Superzahl.Eingabevektor1[50-j] = 9;
			Superzahl.length1++;
			break;
		default: k++;
			break;
		}
	}



	printf("Ganze Zahl y eingeben:");
	fgets(Buffer2,50,stdin);
	printf("\n");

	printf("----------------------------------------------------");
	printf("\n");
	// ZAHL X AUSGEBEN
	for(j=0;j<51;j++)
		if(Superzahl.Eingabevektor1[j]!=0)	// ERSTE ZIFFER IN X
				break;


	for(i=j;i<51;i++)		
		printf("%d",Superzahl.Eingabevektor1[i]);
	printf(" \t Zahl x");
	k=0;
	j=0;

	Superzahl.length2 = 0;
	for(i=0;i<(strlen(Buffer2));i++)
	{
		j=i-k;
		switch(Buffer2[(strlen(Buffer2)-1)-i])
		{
		case '0': Superzahl.Eingabevektor2[50-j] = 0;
			Superzahl.length2++;
			break;
		case '1': Superzahl.Eingabevektor2[50-j] = 1;
			Superzahl.length2++;
			break;
		case '2': Superzahl.Eingabevektor2[50-j] = 2;
			Superzahl.length2++;
			break;
		case '3': Superzahl.Eingabevektor2[50-j] = 3;
			Superzahl.length2++;
			break;
		case '4': Superzahl.Eingabevektor2[50-j] = 4;
			Superzahl.length2++;
			break;
		case '5': Superzahl.Eingabevektor2[50-j] = 5;
			Superzahl.length2++;
			break;
		case '6': Superzahl.Eingabevektor2[50-j] = 6;
			Superzahl.length2++;
			break;
		case '7': Superzahl.Eingabevektor2[50-j] = 7;
			Superzahl.length2++;
			break;
		case '8': Superzahl.Eingabevektor2[50-j] = 8;
			Superzahl.length2++;
			break;
		case '9': Superzahl.Eingabevektor2[50-j] = 9;
			Superzahl.length2++;
			break;
		default: k++;
			break;
		}
	}

	// ZAHL Y AUSGEBEN
	for(j=0;j<51;j++)
		if(Superzahl.Eingabevektor2[j]!=0)
				break;
	printf("\n");
	for(i=j;i<51;i++)
		printf("%d",Superzahl.Eingabevektor2[i]);
	printf(" \t Zahl y");


	Superzahl.zahl = (int*) malloc(51*sizeof(int));

	if(strlen(Buffer2)>= strlen(Buffer1)){
		for(i=0;i<51;i++){
			Superzahl.zahl[i] = Superzahl.Eingabevektor2[i]+Superzahl.Eingabevektor1[i];
		}
		
		for(i=1;i<51;i++){
			if(Superzahl.zahl[i]>=10)
			{

				Superzahl.zahl[i-1]++;
				Superzahl.zahl[i] = Superzahl.zahl[i]-10;
				i--;
			}
		}
		// ###########################################
		// ERGEBNIS AUSGEBEN
		for(j=0;j<51;j++)
			if(Superzahl.zahl[j]!=0)
				break;
		printf("\n");
		for(i=j;i<51;i++)
			printf("%d",Superzahl.zahl[i]);
		printf(" \t Summe z= x + y \n");
		printf("----------------------------------------------------\n");
	}
	if(strlen(Buffer1) > strlen(Buffer2)){
		for(i=0;i<51;i++){
			Superzahl.zahl[i] = Superzahl.Eingabevektor2[i]+Superzahl.Eingabevektor1[i];
		}
		for(i=1;i<51;i++){
			if(Superzahl.zahl[i]>=10)
			{

				Superzahl.zahl[i-1]++;
				Superzahl.zahl[i] = Superzahl.zahl[i]-10;
				i--;
			}
		}
		// ###########################################
		// ERGEBNIS AUSGEBEN
		for(j=0;j<51;j++)
			if(Superzahl.zahl[j]!=0)
				break;
		printf("\n");
		for(i=j;i<51;i++)
			printf("%d",Superzahl.zahl[i]);
		printf(" \t Summe z= x + y \n");
		printf("----------------------------------------------------\n");
	}




			


	free(Superzahl.zahl);



}
void Nullsetzen(){
	int i=0, j=0;
		for(j=0;j<51;j++)
					if(Superzahl.Eingabevektor1[j]!=0)	// ERSTE ZIFFER IN X
				break;


			printf("Setze den Wert y zu 0\n");
		for(i=j;i<51;i++)
			Superzahl.Eingabevektor2[i]=0;
			printf("%d",Superzahl.Eingabevektor2[i]);
		
			printf(" \t Zahl y\n");
	printf("----------------------------------------------------\n");
}

void Vergleich(char Buffer1[50],char Buffer2[50]){
	unsigned int i=0;

		if(Superzahl.length1 > Superzahl.length2)
			printf("x ist groeser als y!!\n");
		if(Superzahl.length1 < Superzahl.length2) 
			printf("y ist groeser als x!!\n");

		if(Superzahl.length1 == Superzahl.length2){
		//Erste Zahl von X ist größer als Erste Zahl von Y
		if(Superzahl.Eingabevektor1[50] > Superzahl.Eingabevektor2[50])
			printf("x ist groeser als y!!\n");
		if(Superzahl.Eingabevektor1[50] < Superzahl.Eingabevektor2[50]) 
			printf("y ist groeser als x!!\n");

				//Beide Anfangszahlen sind gleich .. ermitteln wo sich der unterschied befindet
				if(Superzahl.Eingabevektor1[50] == Superzahl.Eingabevektor2[50]){

				for(i=49;i!=0;i--){

				if(Superzahl.Eingabevektor1[i] > Superzahl.Eingabevektor2[i]){
				printf("x ist groeser als y!!\n");
				i=1;
				}
			
				if(Superzahl.Eingabevektor1[i] < Superzahl.Eingabevektor2[i]){
				printf("y ist groeser als x!!\n");
				i=1;
				}
				if((i == (Superzahl.length1-1))){	
				printf("Zahlen sind genau gleich gros!!\n");
					i=1;
				}
			
				}
				}
			}
		printf("----------------------------------------------------\n");
}

void XundYvertauschen(){

	int i=0,j=0;

	printf("Kopiere den Wert von y nach x\n");
			//for(i=0;i<51;i++)
			//	Superzahl.Eingabevektor1[i]=0;
		

			for(i=0;i<51;i++){
				Superzahl.Eingabevektor1[i] = Superzahl.Eingabevektor2[i];
			}
			
				for(j=0;j<51;j++)
					if(Superzahl.Eingabevektor1[j]!=0)	// ERSTE ZIFFER IN X
				break;

			for(i=j;i<51;i++)
				printf("%d",Superzahl.Eingabevektor1[i]);

		printf(" \t Zahl x\n");

			for(i=j;i<51;i++)
				printf("%d",Superzahl.Eingabevektor2[i]);

		printf(" \t Zahl y\n");
		printf("----------------------------------------------------\n");
}