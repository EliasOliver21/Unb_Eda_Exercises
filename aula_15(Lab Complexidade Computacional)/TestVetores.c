#include <stdio.h>



int Encontrar_deslocamentos(int P[],int len){


    for(int i = 0;i<len;i++)
    {

        printf("%d\n",P[i]);

    }

    return 0;
       
}

int main(){

    int x[] = {1,3,5,7};
    int len = sizeof(x) / sizeof(x[0]);

    Encontrar_deslocamentos(x,len);


    return 0;

}