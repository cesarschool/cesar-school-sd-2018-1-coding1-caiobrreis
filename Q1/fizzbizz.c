#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */
int num = 1;
void fizzBizz(int start, int end)
{
  printf("\nFizzBizz::START: %d, %d\n", start, end);
  for (num = start; num < end; num++) {
    if ((num%3 == 0) && (num%5 != 0)) {
      printf("Fizz\n");
    }
    else if ((num%3 != 0) && (num%5 == 0)) {
      printf("Buzz\n");
    }
    else if ((num%3 == 0) && (num%5 == 0)) {
      printf("FizzBuzz\n");
    }
    else {
      printf("%d\n", num);
      }
    }
    printf("\nFizzBizz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");
    
    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);
    
    return 0;
}
