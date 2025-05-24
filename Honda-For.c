#include <stdio.h>

int main() {
	// A
	for (int i = 0; i <=10000; i++) {
		printf ("a) Valor de i = %i\n",i);
	}
	// B
	for (int i = -10000; i<=10000; i++) {
		printf ("b) Valor de i = %i\n", i);
	}
	// C
	for (int i = 0; i<=10000; i = i + 2) {
		printf ("c) Valor de i = %i\n", i);
	}
	// D
	for (int i = 1; i<=10000; i = i+2) {
		printf("d) Valor de i = %i\n", i);
	}
	// E
	for (int i = -100000; i<=100000; i = i+3) {
		printf("e) Valor de i = %i\n", i);
	}

	return 0;
}