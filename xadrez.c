#include <stdio.h>

/*Aqui comecei a criar os meus processos, como o usuário vai poder escolher a direção e a quantidade
de casas, vou utilizar 2 variáveis dentro do "VOID"*/
void moverTorre (int casas, char* direcao){
    if (casas > 0)
    {
        printf("Movendo 1 Casa para %s \n", direcao);
        moverTorre (casas - 1, direcao);
    }
    
}

void moverBispo (int casas, char* direcao1, char* direcao2){
    if (casas > 0)
    {
        printf("Movendo 1 Casa para %s e para %s \n", direcao1, direcao2);
        moverBispo (casas - 1, direcao1, direcao2);
    }
    
}

void moverRainha (int casas, char* direcao1){
    if (casas > 0)
    {
        printf("Movendo 1 Casa para %s \n", direcao1);
        moverRainha (casas - 1, direcao1);
    }
    
}



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

       
       moverTorre (numero, "Esquerda");
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

        moverTorre (numero, "Direita");
       
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero);

        moverTorre (numero, "Cima");
       
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

        moverBispo(numero2, "Esquerda", "Cima");

        break;

    
    case 2:

        printf ("Escolha agora a quantidade de Casas: \n");
        scanf("%d", &numero2);

        moverBispo(numero2, "Direita", "Cima");

       
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
       
       moverRainha (numero3, "Esquerda");
       
       
        break;

    
    case 2:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       moverRainha (numero3, "Direita");
        break;

    case 3:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       moverRainha (numero3, "Cima");
       
        break;

    case 4:

       printf ("Escolha agora a quantidade de Casas: \n");
       scanf("%d", &numero3);

       moverRainha (numero3, "Baixo");
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
            for ( MovCavalo = 1; MovCavalo <= 2; MovCavalo++)
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
            for ( MovCavalo = 1; MovCavalo <= 2; MovCavalo++)
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
            for ( MovCavalo = 1; MovCavalo <= 2; MovCavalo++)
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
            for ( MovCavalo = 1; MovCavalo <= 2; MovCavalo++)
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