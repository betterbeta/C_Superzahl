// ---------------------------------------------
// sZahl tools by Frank Friederich - version 1.2
// ---------------------------------------------

#ifndef FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED
#define FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED

// #############################################
// Define user txts
//
#define HELLO_L1 "+++++++++++++++++++++++"
#define HELLO_L2 "Programm zum arbeiten"
#define HELLO_L3 "mit sehr gro\341en Zahlen"

// General Loop texts
#define LOOP "Bitte w\204hlen Sie aus folgenden Optionen:"
#define LOOP_L0_CLOSE "[0] Schlie\341e Programm"
#define LOOP_L0_BACK "[0] Zur\201ck"
#define LOOP_L1_DEFX "[1] x neu definieren"
#define LOOP_L2_DEFY "[2] y neu definieren"
#define LOOP_L3_COPY "[3] kopiere x oder y"
#define LOOP_L4_COMPARE "[4] vergleiche x und y"
#define LOOP_L5_ADDXY "[5] addiere x und y"
#define LOOP_L6_MULTIXY "[6] multipliziere x und y"
#define LOOP_L7_EXP "[7] potenziere x oder y"
#define PRINTNOW "Aktuelle sZahlen:"

// Redefine texts
#define RED_L1_NEW "[1] Neue Zahl eingeben"
#define RED_L2_NULL "[2] Zahl 0 setzen"

// Copy texts
#define COPY_L1_XY "[1] Kopiere X in Y"
#define COPY_L2_YX "[2] Kopiere Y in X"
#define COPY_L3_XS "[3] Kopiere X in S"
#define COPY_L4_YS "[4] Kopiere Y in S"

// Compare returns
#define COMP_EQUAL "X = Y"
#define COMP_XBIG "X > Y"
#define COMP_YBIG "X < Y"

// Exponate
#define EXP_CHOICE "W\204hlen Sie welche Zahl potentiert werden soll:"
#define EXP_X "[1] X"
#define EXP_Y "[2] Y"
#define EXP_EXP "Geben Sie einen ganzzahligen Exponenten ein"


#define GETSZAHL "Geben Sie die eine Superzahl ein."
//
// ##############################################

typedef struct
{
	int number[51];
	unsigned length;
}sZahl;

void getSZahl(sZahl *number, char text[]);
void setNull(sZahl *number);
void printSNumber(sZahl *number);
void addSZahl(sZahl *number1, sZahl *number2, sZahl *solution);
void copy(sZahl *in, sZahl *out);
void switchSZahl(sZahl *number1, sZahl *number2);
void multiSZahl(sZahl *number1, sZahl *number2, sZahl *solution);
void setSZahlLength(sZahl *super);
void expSZahl(sZahl *super, unsigned exp, sZahl *solution);
unsigned compare(sZahl *number1, sZahl *number2);

#endif /*#ifndef FUNCTIONS_SZAHL_TOOLS_BY_F_FRIEDERICH_INCLUDED*/