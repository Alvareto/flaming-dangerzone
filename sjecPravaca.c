#include <stdio.h>
#include "main.h"

void sjecPravaca(float a1, float b1, float a2, float b2) {
  float x,y,anaz;

	anaz = a1 - a2;

	if (anaz == 0){
		printf("Pravci su pararelni\n");
	}
	else {
		x = (float) (b2 - b1) / anaz;
		y= a1 * x + b1;
		printf("Koordinate sjecista su (%6.2f, %6.2f)\n", x, y);
	}
}
