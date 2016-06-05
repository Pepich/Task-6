/*********************************/
/* Benedikt Abel, Justus Faust   */
/* Gruppe: Di08                  */
/* Uebungsblatt: 6, Aufgabe B-13 */
/* Thema: pythagorae             */
/* Version: v1.0.0               */
/* Datum: 20160605               */
/* Status: werks                 */
/*********************************/

#include <stdio.h>

int main(void)
{
    // Eingabe
    int g = 0;
    printf("Bitte Grenze eingeben: ");
    scanf("%i", &g);
    // Verarbeitung
    for (int a = 1; a <= g; a++)
	for (int b = 1; b <= g; b++)
	    for (int c = 1; c <= g; c++)
		if (a*a+b*b==c*c)
		    // Ausgabe
		    printf("%i^2+%i^2=%i^2\n", a, b, c);
    return 0;
}
