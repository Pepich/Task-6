/*********************************/
/* Benedikt Abel, Justus Faust   */
/* Gruppe: Di08                  */
/* Uebungsblatt: 6, Aufgabe B-12 */
/* Thema: produkte               */
/* Version: v1.0.0               */
/* Datum: 20160605               */
/* Status: werks                 */
/*********************************/

#include <stdio.h>

int main(void)
{
    int zahl = 0;
    while (1)
    {
	printf("Bitte Zahl eingeben (negativ = ende): ");
	scanf("%i", &zahl);
	// Abbruchbedingung
	if (zahl < 0)
	    break;
	// Variable zum speichern ob "zahl" prim ist, Wert ist ja bis das Gegenteil gezeigt wird
        int prim = 1;
	for (int i = 1; i <= zahl; i++)
	{
	    // Wenn "i" "zahl" teilt dann ausgeben
	    if (zahl % i == 0)
	    {
		printf("%i * %i\n", i, zahl/i);
		// Wenn "i" ungleich 1 und "i" ungleich "zahl" so ist "zahl" nicht prim.
		if (i != 1 && i != zahl)
		    prim = 0;
	    }
	}
	// Ausgabe, wenn nicht prim dann ergaenze ein k vor "eine" zu "keine"
	printf("%i ist %ceine Primzahl!\n\n", zahl, prim ? '\0' : 'k');
    }
    return 0;
}

// Sind die Kommentare hier nicht trivial? Ernsthaft. Das ist doch humbug. Ich mach es natuerlich weil es ist so vorgegeben aber
// das aendert nichts an der Tatsache, dass ich das bei solchen "einfachen" Aufgaben fuer absoluten Mumpiz halte. Wir
// koennen gerne nochmal absprechen wie viele Kommenta ich eigentlich brauche weil "das hier ist ne Variable" halte ich fuer
// ueberfluessig und mehr Kommentare habe ich hier einfach nicht drin. Der Text hier unten hat tatsaechlich laenger gebraucht
// als das Programm zu schreiben, zu debuggen und die Ausgabe 1:1 an die Vorgabe anzupassen. Und ganz ohne getline.

// #genervt von ueberfluessigen Kommentaren -_-
