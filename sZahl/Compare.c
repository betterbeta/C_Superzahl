#include "Header.h"	
#include <stdio.h>
void Vergleich(){

		if((strlen(Buffer1)> strlen(Buffer2)) || ((strlen(Buffer1) == strlen(Buffer2)) && (Superzahl.Eingabevektor1[(strlen(Buffer1)-2)] > Superzahl.Eingabevektor2[(strlen(Buffer2)-2)] ) )){
		printf("x ist groesser als y\n");
		}else{
		printf("x ist kleiner als y\n");
		}
		printf("----------------------------------------------------\n");

	}