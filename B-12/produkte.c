/********************************/
/* Benedikt Abel, Justus Faust  */
/* Gruppe: Di08                 */
/* Uebungsblatt: 6, Aufgabe B-12 */
/* Thema: produkte              */
/* Version: v1.0.0              */
/* Datum: 20160605              */
/* Status: WIP                  */
/********************************/

#include <stdio.h>

int main(void)
{
    int zahl = 0;
    while (1)
    {
	printf("Bitte Zahl eingeben (negativ = ende): ");
	scanf("%i", &zahl);
	if (zahl < 0)
	    break;
        int prim = 1;
	for (int i = 1; i <= zahl; i++)
	{
	    if (zahl % i == 0)
	    {
		printf("%i * %i\n", i, zahl/i);
		if (i != 1 && i != zahl)
		    prim = 0;
	    }
	}
	printf("%i ist %ceine Primzahl!\n\n", zahl, prim ? '\0' : 'k');
    }
    return 0;
}
