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
	char Buffer1[50];
	char Buffer2[50];

	Berechnung();
	Vergleich(Buffer1, Buffer2);
	XundYvertauschen();
	Nullsetzen();


	return 0;
}