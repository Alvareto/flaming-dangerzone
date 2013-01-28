#include <stdio.h>
#include "main.h"
#define PI 3.141592

void povrsKruga(float radijus) {
  float povrsina;

	if (radijus <= 0) {
		printf("Unijeli ste neispravan radijus!\n");
	}
	else {
		povrsina = radijus * radijus * PI;
		printf("Povrsina kruga je: %6.2f\n", povrsina);
	}
}
