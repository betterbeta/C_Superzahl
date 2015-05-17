// ---------------------------------------------
// sZahl tools by Frank Friederich - version 1.0
// ---------------------------------------------

#ifndef FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED
#define FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED

#define HELLO_L1 "+++++++++++++++++++++++"
#define HELLO_L2 "Programm zum arbeiten"
#define HELLO_L3 "mit sehr gro\341en Zahlen"
#define HELLO_L4 "+++++++++++++++++++++++"
#define GETSZAHL_1 "Geben Sie die erste Superzahl ein."
#define GETSZAHL_2 "Geben Sie die zweite Superzahl ein."

typedef struct
{
	int number[51];
	unsigned length;
}sZahl;

void getSZahl(sZahl *number, char text[]);


void Berechnung();

void Vergleich(char Buffer1[50],char Buffer2[50]);
void XundYvertauschen();
#endif /*#ifndef FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED*/