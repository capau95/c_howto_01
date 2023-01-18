#include <stdio.h>

int main() {

	int i, j, k, y, input;

	printf("Bitte geben Sie die Rauten-Breite ein:\n");
	scanf("%d", &input);

	for (i = 1; i <= input +  1; i += 2) {

		for (j = 0; j < ((input - i) / 2); j++) {

			printf(" ");
		}

		for (y = 0; y < i; y++) {

			printf("*");
		}


	printf("\n");

	}

	for (i = input - 2; i > 0; i -= 2) {

		for (j = 0; j < ((input - i) / 2); j++) {

			printf(" ");

		}

		for (y = 0; y < i; y++) {

			printf("*");
		}


	printf("\n");

	}

	return 0;
}	

