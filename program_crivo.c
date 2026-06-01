#include <stdio.h>
#include <stdlib.h>

//Crivo de Eratóstenes
int main() {
  const int limite = 100;
  // 1. Criação do vetor:
  int primos[101];
  // 2. Inicialização:
  for (int i = 2; i <= limite; i++){
      primos[i] = 1;
  }
  // 3. O Algoritmo(Riscando):
   for (int p = 2; p * p <= limite; p++){
       if (primos[p] == 1){
           for (int i = p * p; i <= limite; i += p){
               primos[i] = 0;
           }
       }
   }
   // 4. Exibição:
   printf("Números primos:\n");
   for (int i = 2; i <= limite; i++) {
       if (primos[i] == 1) {
           printf("%d ", i);
       }
   }
   printf("\n");
   
   return 0;
}