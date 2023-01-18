#include <stdio.h>

int main() {

	int i, j, k, y, input;

	printf("Bitte geben Sie eine ungerade Zahl als Rauten-Breite ein:\n");
	scanf("%d", &input);

	if (input % 2 != 0) {

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
	}

	else {

		printf("Das ist keine ungerade Zahl!\n");
	}

	return 0;
}	

