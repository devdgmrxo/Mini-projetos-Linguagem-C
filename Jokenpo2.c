#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int playerChoice, botChoice, controlMenu;

    printf("____________________________\n");
    printf("__________JOKENPO___________\n");
    printf("____________________________\n\n");
    printf("Selecione uma das opcoes:\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%d", &controlMenu);

    if (controlMenu >= 1 && controlMenu <= 3)
    {

        switch (controlMenu)
        {
        case 1:

            // gerador aleatorio de numeros de 1 a 3.
            botChoice = rand() % 3 + 1;

            // escolha a opção entre pedra, papel ou tesoura.
            printf("Escolha uma das opcoes:\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
            scanf("%d", &playerChoice);

            switch (playerChoice)
            {

            case 1:
                printf("Player's Choice: Pedra - ");
                break;

            case 2:
                printf("Player's Choice: Papel - ");

                break;

            case 3:
                printf("Player's Choice: Tesoura - ");

                break;
            }

            switch (botChoice)
            {

            case 1:
                printf("Bot's Choice: Pedra\n");
                break;

            case 2:
                printf("Bot's Choice: Papel\n");

                break;

            case 3:
                printf("Bot's Choice: Tesoura\n");

                break;
            }

            if (playerChoice == botChoice)
            {
                printf("###EMPATE!!!###");
            }
            else if ((playerChoice == 1 && botChoice == 3) || (playerChoice == 2 && botChoice == 1) || (playerChoice == 3 && botChoice == 2))
            {
                printf("###PARABENS VOCE VENCEU!!!###");
            }
            else
            {
                printf("###QUE PENA, VOCE PERDEU!!!");
            }

            break;

        case 2:

            printf("_____________________________________________________________________________\n");
            printf("_________________________________REGRAS______________________________________\n");
            printf("_____________________________________________________________________________\n");
            printf("1. Escolha um numero de 1 a 3, cada um deles representa uma opcao sende elas:\n");
            printf("Pedra (1)\n");
            printf("Papel (2)\n");
            printf("Tesoura (3)\n");
            printf("O bot ira escolher uma opcao tambem e vencera quem possuir as vantagens acima do outro\n");
            printf("Lembre-se:\n");
            printf("Tesoura > Papel > Pedra > Tesoura. \n");

            break;

        case 3:
            printf("Saindo do jogo...");

            break;
        }
    }
    else
    {
        printf("Insira uma opcao valida!!");
    }
}
