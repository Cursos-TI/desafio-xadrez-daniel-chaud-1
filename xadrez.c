#include <stdio.h>

int main(){

    int i = 1; 
    int numero, numero2, numero3, numero4;
    unsigned int escolhadirecao, escolhadirecao2, escolhadirecao3, escolhadirecao4;
    int MovCavalo = 1 ; // Adicionado no desafio intermediário.


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

       for (i; i <= numero; i++)
       {
        printf("Andando 1 casa para a Esquerda\n");
       }
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

       for (i; i <= numero; i++)
       {
        printf("Andando 1 para a Direita\n");
       } 
       
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

       for (i ; i <= numero; i++)
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

        printf("Escolha agora a quantidade de Casas: \n");
        scanf("%d", &numero2 );

        i = 1;
        while (i <= numero2 )
        {
            printf("Andando 1 casa para a Esquerda e para Cima\n");
            i++;
        }

        break;

    
    case 2:

        printf ("Escolha agora a quantidade de Casas: \n");
        scanf("%d", &numero2);

        i = 1;
        while (i <= numero2)
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
       
       i = 1;
       do
       {
        printf("Avançando 1 Casa para a Esquerda!\n");
        i++;
       } while (i <= numero3);
       
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       i = 1;
       do
       {
        printf("Avançando 1 Casa para a Direita!\n");
        i++;
       } while (i <= numero3);
       
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       i = 1;
       do
       {
        printf("Avançando 1 Casa para Cima!\n");
        i++;
       } while (i <= numero3);
       
        break;

    case 4:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       i = 1;
       do
       {
        printf("Avançando 1 Casa para Baixo!\n");
        i++;
       } while (i <= numero3 );
       
        break;
    
    default:
    printf("Opção Inválida \n");
        break;
    }

// ================================================================================================
    printf("\n");
    printf("Para onde o Cavalo vai ?: \n");
    printf("1. Esquerda e Cima\n");
    printf("2. Direita e Baixo\n");
    printf("3. Esquerda e Baixo\n");
    printf("4. Cima e Direita\n");
    printf("Qual direção você Escolhe ?: \n");
    scanf("%d", &escolhadirecao4);

    switch (escolhadirecao4)
    {

    case 1:

        do
        {
            for ( MovCavalo = 0; MovCavalo <= 2; MovCavalo++)
            {

                printf("Se movendo 1 casa para a ESQUERDA!\n");

            }
           
            printf("Se movendo 1 casa para CIMA\n");
            printf("Formato em L completo\n");

        } while ( MovCavalo <3 );
       
        break;

    
    case 2:
            do
        {
            for ( MovCavalo = 0; MovCavalo <= 2; MovCavalo++)
            {

                printf("Se movendo 1 casa para a DIREITA!\n");

            }
           
            printf("Se movendo 1 casa para BAIXO\n");
            printf("Formato em L completo\n");

        } while ( MovCavalo <3 );
    


        break;

    case 3:
        do
        {
            for ( MovCavalo = 0; MovCavalo <= 2; MovCavalo++)
            {

                printf("Se movendo 1 casa para ESQUERDA!\n");

            }
           
            printf("Se movendo 1 casa para a BAIXO\n");
            printf("Formato em L completo\n");

        } while ( MovCavalo <3 );
       
       
        break;

    case 4:
        do
        {
            for ( MovCavalo = 0; MovCavalo <= 2; MovCavalo++)
            {

                printf("Se movendo 1 casa para DIREITA !\n");

            }
           
            printf("Se movendo 1 casa para a DIREITA\n");
            printf("Formato em L completo\n");

        } while ( MovCavalo <3 );



        break;

    default:

        printf("Opção inválida!\n");
        
        break;  
    }


    return 0;
    
}