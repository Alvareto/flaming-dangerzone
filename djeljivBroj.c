#include <stdio.h>
#include "main.h"

void djeljivBroj (int a, int b) {
  if (b != 0)
		printf("%d %s djeljiv s %d\n", a, (a % b ? "nije" : "je"), b);
	else if (b == 0)
		printf("Nije moguce dijeliti sa nulom!\n");
}
