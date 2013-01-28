#include <stdio.h>
#include <math.h>
#include "main.h"

void kvadJedn(double a, double b, double c) {
  float det, q;

	det = pow(b,2) - 4 * a * c;

	if (det > 0) {
		printf("Rjesenja kvadratne jednadzbe su:\n\tx1 = %6.2f\n\tx2 = %6.2f\n", (float)(-b+det)/(2*a), (float)(-b-det)/(2*a));
	}
	else if (det == 0) {
		printf("Postoji samo jedno rjesenje:\n\tx1 = x2 =%6.2f\n", (float)(-b)/(2*a));
	}
	else {
		q = pow (-det, 1./2);

		printf("Rjesenje je konjugirano kompleksno:\n\tx1 = %d + %d\n", (-b)/(2*a), q/(2*a));
		printf("\tx1 = %d + %d\n", -( (-b)/(2*a) ), -( q/(2*a) ) );
	}
}
