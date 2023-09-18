#include <stdio.h>

int main()
{

    int lp = 0;

    do{

        int escolha;
        float num1, num2, resultado;

        printf("Escolha qual operação deseja fazer, digite 1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão: \n");
        scanf("%d", &escolha);

        printf("Agora digite os 2 numeros a serem utilizados na operação escolhida. \n");
        scanf("%f %f", &num1, &num2);

            switch (escolha)
        {

        case 1:

            resultado = num1 + num2;
            printf("O resultado é %.2f . \n", resultado);
            break;
        
        case 2:

            resultado = num1 - num2;
            printf("O resultado é %.2f . \n", resultado);
            break;

        case 3:

            resultado = num1 * num2;
            printf("O resultado é %.2f . \n", resultado);
            break;

        case 4:

            resultado = num1 / num2;
            printf("O resultado é %.2f . \n", resultado);
            break;

        default:

            printf("Operação inválida. \n");
            break;
        }

        printf("Se deseja fazer outra operação digite 0 se não digite 1 para sair. \n");
        scanf("%d", &lp);
        
    }while(lp == 0);

    return 0;
}