#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // com essa função, é possível sortear numeros aleatórios
    srand(time(0));
    // nomeando variáveis
    int player, bot;
    int controle;

    printf("____________________________\n");
    printf("___________JOKENPO__________\n");
    printf("____________________________\n\n");
    printf("Selecione uma das opcoes:\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%d", &controle);

    if (controle >= 1 && controle <= 3)
    {
        switch (controle)
        {
        case 1:
            // gerador de numero aleatorio que vai escolher de 1 a 3;
            bot = rand() % 3 + 1;

            // escolha a opção entre pedra, papel ou tesoura
            printf("Escolha uma das opcoes:\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
            scanf("%d", &player);

            /*haverá 9 possibilidades
            1.1
            1.2
            1.3
            2.1
            2.2
            2.3
            3.1
            3.2
            3.3*/

            if (player >= 1 && player <= 3)
            {
                if (player == 1 && bot == 1)
                {
                    printf("Bot: Pedra.\n");
                    printf("Player: Pedra.\n");
                    printf("Empate!!\n");
                }
                else if (player == 1 && bot == 2)
                {
                    printf("Bot: Papel.\n");
                    printf("Player: Pedra.\n");
                    printf("Bot Venceu!!\n");
                }
                else if (player == 1 && bot == 3)
                {
                    printf("Bot: Tesoura.\n");
                    printf("Player: Pedra.\n");
                    printf("Player Venceu!!\n");
                }
                else if (player == 2 && bot == 1)
                {
                    printf("Bot: Pedra.\n");
                    printf("Player: Papel.\n");
                    printf("Player Venceu!!\n");
                }
                else if (player == 2 && bot == 2)
                {
                    printf("Bot: Papel.\n");
                    printf("Player: Papel.\n");
                    printf("Empate!!\n");
                }
                else if (player == 2 && bot == 3)
                {
                    printf("Bot: Tesoura.\n");
                    printf("Player: Papel.\n");
                    printf("Bot Venceu!!\n");
                }
                else if (player == 3 && bot == 1)
                {
                    printf("Bot: Pedra.\n");
                    printf("Player: Tesoura.\n");
                    printf("Bot Venceu!!\n");
                }
                else if (player == 3 && bot == 2)
                {
                    printf("Bot: Papel.\n");
                    printf("Player: Tesoura.\n");
                    printf("PLayer Venceu!!\n");
                }
                else if (player == 3 && bot == 3)
                {
                    printf("Bot: Tesoura.\n");
                    printf("Player: Tesoura.\n");
                    printf("Empate!!\n");
                }
            }
            else
            {
                printf("Insira um valor valido!!");
                return 1;
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
        printf("Insira uma opcao valida!!!");
    }

    return 0;
}
