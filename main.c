/*  		LEGENDA					*/
/*		[echo %ERRORLEVEL%]			*/
/*	-1	=> izlaz iz programa 		*/
/*	1	=> odabrana je opcija 1		*/
/*	2	=> odabrana je opcija 2		*/
/*	3	=> odabrana je opcija 3		*/
/*	4	=> odabrana je opcija 4		*/
/*	5	=> odabrana je opcija 5		*/
/* 									*/

#include <stdio.h>
#include "main.h"

/* GLOBAL VARIABLES */
char opcija, prekid = 'n';

/* MAIN PROGRAM */
int main () {
/* VARIABLE DECLARATION */	
	float a1, a2, b1, b2;
	int x;
	float radijus;
	float a, b, c;
	int m,n;
/* MAIN PART */
do {
	printf("Odaberite jednu od ponudjenih opcija:\n\ta) troznamenkasti broj\n\tb) sjeciste pravaca\n\tc) povrsina kruga\n\td) kvadratna jednadzba\n\te) djeljivost brojeva\n\nEXIT: Q\n");
	scanf("%c", &opcija);
/* TROZNAMENKASTI BROJ */
	if (opcija == 'a' || opcija == 'A') {
		
		printf("Upisite troznamenkasti cijeli broj:\n");
		scanf("%d", &x);

		troznBroj(x);

		return 1;
	}
/* SJECISTE PRAVACA */
	if (opcija == 'b' || opcija == 'B') {

		printf("Upisite koordinate (a1,b1) i (a2,b2) pravaca y = a1*x + b1 i y = a2*x + b2:\n");
		scanf("%f%f%f%f", &a1, &b1, &a2, &b2);

		sjecPravaca(a1,b1,a2,b2);

		return 2;
	}
/* POVRSINA KRUGA */
	if (opcija == 'c' || opcija == 'C') {

		printf("Unesite radijus kruga: ");
		scanf("%f", &radijus);

		povrsKruga(radijus);

		return 3;
	}
/* KVADRATNA JEDNADZBA */
	if (opcija == 'd' || opcija == 'D') {

		printf("Unesite vrijednosti parametara a, b i c kvadratne jednadzbe a*x^2 + b*x + c:\n");
		scanf("%f%f%f",&a,&b, &c );

		kvadJedn(a,b,c);

		return 4;
	}
/* DJELJIVOST BROJEVA */
	if (opcija == 'e' || opcija == 'E') {

		printf("Upisite dva broja: \n\t");
		scanf("%d%d", &m, &n);

		djeljivBroj(m,n);
		
		return 5;
	}
/* IZLAZ IZ PROGRAMA (PETLJE) */
	if (opcija == 'q' || opcija == 'Q') {

		/*printf("Zelite li stvarno ugasiti program? Y / N\n");*/
		scanf("%c", &prekid);
		if (prekid == 'Y' || prekid == 'y'){
			return(-1);
		}
	}
} while (prekid == 'N' || prekid == 'n');
}
