#include <stdio.h>

int CriaVetInt(int num) {
  
  int vetor2[num];
  int *pointer = &vetor2;
  printf("%d \n",pointer);
}

int main(){

    CriaVetInt(10);

return 0;
}