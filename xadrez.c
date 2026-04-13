#include <stdio.h>

int main(){

    int i = 0, numero, numero2, numero3;
    unsigned int escolhadirecao, escolhadirecao2, escolhadirecao3;


    printf("escolha a direção que deseja ir com a torre!: \n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    printf("3. Cima\n");
    printf("Para qual direção você  vai ?: \n");
    scanf("%d", &escolhadirecao);
    
    switch (escolhadirecao)
    {

    case 1:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

       for (i; i <= numero - 1; i++)
       {
        printf("Andando 1 casa para a Esquerda\n");
       }
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

       for (i; i <= numero - 1; i++)
       {
        printf("Andando 1 para a Direita\n");
       } 
       
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

       for (i ; i <= numero - 1; i++)
       {
        printf("Andando 1 para Cima\n");
       }
       
        break;
    
    default:
    printf("Opção Inválida \n");
        break;
    }

// ===================================================================================================

printf("\n");
printf("Escolha a direção que deseja ir com o bispo!: \n");
    printf("1. Diagonal Esquerda\n");
    printf("2. Diagonal Direita\n");
   
    printf("Para qual direção você  vai ?: \n");
    scanf("%d", &escolhadirecao2);
    
    switch (escolhadirecao2)
    {

    case 1:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero2 );

        while (i <= numero2 + 1 )
        {
            printf("Andando 1 casa para a Esquerda e para Cima\n");
            i++;
        }
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero2);

        while (i <= numero2 + 1 )
        {
            printf("Andando 1 casa para a Direita e para Cima\n");
            i++;
        }
       
        break;

    
    default:
    printf("Opção Inválida \n");
        break;
    }

// ================================================================================================
    printf("\n");
    printf("Escolha a direção que deseja ir com a rainha!: \n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    printf("3. Cima\n");
    printf("4. Baixo\n");
    printf("Para qual direção você  vai ?: \n");
    scanf("%d", &escolhadirecao3);
    
    switch (escolhadirecao3)
    {

    case 1:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       do
       {
        printf("Avançando 1 Casa para a Esquerda!\n");
        i++;
       } while (i +1 <= numero3 + 1);
       
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       do
       {
        printf("Avançando 1 Casa para a Direita!\n");
        i++;
       } while (i + 1 <= numero3 + 1);
       
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       do
       {
        printf("Avançando 1 Casa para Cima!\n");
        i++;
       } while (i + 1 <= numero3 + 1);
       
        break;

    case 4:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       do
       {
        printf("Avançando 1 Casa para Baixo!\n");
        i++;
       } while (i + 1 <= numero3 );
       
        break;
    
    default:
    printf("Opção Inválida \n");
        break;
    }


    
}