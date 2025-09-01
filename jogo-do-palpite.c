#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int palpite, palpiteBot, controle;

void coletarDados()
{

    srand(time(0));

    printf("==========================================\n");
    printf("============JOGO DO PALPITE===============\n");
    printf("==========================================\n");
    printf("1) Jogar\n");
    printf("2) Regras\n");
    printf("3) Sair\n");
    scanf("%d", &controle);

    switch (controle)
    {
    case 1:

        int controle2;

        palpiteBot = (rand() % 100) + 1;
        printf("Digite seu numero:\n");
        scanf("%d", &palpite);

        if (palpite >= 1 && palpite <= 100)
        {
            printf("Escolha seu palpite:\n");
            printf("1) Meu numero sera maior\n");
            printf("2) Meu numero sera menor\n");
            printf("3) Meu numero sera igual\n");
            scanf("%d", &controle2);

            
            switch (controle2)
            {

            case 1:

                printf("O seu palpite foi: %d\n", palpite);
                printf("O palpite do bot: %d\n", palpiteBot);
                (palpite > palpiteBot) ? printf("Voce venceu!\n") : printf("Voce perdeu!!\n");

                coletarDados();
                break;

            case 2:

                printf("O seu palpite foi: %d\n", palpite);
                printf("O palpite do bot: %d\n", palpiteBot);
                (palpite < palpiteBot) ? printf("Voce venceu!\n") : printf("Voce perdeu!!\n");

                coletarDados();
                break;

            case 3:

                printf("O seu palpite foi: %d\n", palpite);
                printf("O palpite do bot: %d\n", palpiteBot);
                (palpite == palpiteBot) ? printf("Voce venceu!\n") : printf("Voce perdeu!!\n");

                coletarDados();
                break;

            default:

                printf("Insira uma opcao valida!\n");
                printf("Direcionando voce para o inicio...\n");

                coletarDados();
                break;
            }
        }
        else
        {
            printf("Insira um valor valido!!\n");
            printf("Redirecionando para o inicio\n!");

            coletarDados();
        }

        break;

    case 2:

        printf("=============================================\n");
        printf("====================REGRAS===================\n");
        printf("=============================================\n");
        printf("1- Selecione um numero de 1 a 100\n");
        printf("2- Tente advinhar se seu numero sera maior, menor ou igual ao numero que o bot escolhera.\n");
        printf("3- Divirta-se!\n");

        coletarDados();
        break;

    case 3:

        printf("Saindo...");
        return;
        break;
    }
}

int main()
{

    coletarDados();

    return 0;
}
