#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar(char sentence[], int length)
{
	printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
  int length1 = length - 1;
	int l = 0;
  int checks = 0;
  int r = 0;

	for (l = 0; l <= length1; l++)
	{
		r = 0;
		for (checks = 0; checks <= length1; checks++)
		{
			if (sentence[l] == ' ') {
				r = 1;
				break;
			}
			else if (checks != l && sentence[l] == sentence[checks]) {
				r = 1;
				break;
			}
		}

		if (r == 0) {
			printf("A primeira letra que não se repete é: %c", sentence[l]);
			printf("\nfirstNonRepeatingChar::END\n");
			return sentence[l];
		}
	}
	printf("Todas as letras se repetem");
	printf("\nfirstNonRepeatingChar::END\n");
	return -1;
}

int main()
{
	printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

	firstNonRepeatingChar("ovo", 3);
	firstNonRepeatingChar("cesar school", 12);
	firstNonRepeatingChar("sistemas digitais", 17);

	return 0;
}
