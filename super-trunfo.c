#include <stdio.h>

// declarando as variaveis

char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
int turismo1, turismo2;
unsigned long int populacao1, populacao2, superP1, superP2;
float pib1, pib2, area1, area2, ppca1, ppca2, dens1, dens2;

// função para coleta de dados das cartas

void coletaDados(void)
{

    // Mensagem que deve aparecer ao começar a coleta de informações

    printf("_______________________________________\n");
    printf("Digite as informações da PRIMEIRA Carta:\n");
    printf("_______________________________________\n");

    // Primeira carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %4s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade1);

    printf("Digite o número populacional:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

    // Essa mensagem deve aparecer na coleta das informações da segunda carta

    printf("_______________________________________\n");
    printf("Digite as informações da SEGUNDA Carta:\n");
    printf("_______________________________________\n");

    // Segunda Carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade2);

    printf("Digite o número populacional:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo2);
}

// funcao para a exposicao de dados

void mostrarDados(void)
{
    // menu interativo para exibição das informações das cartas
    int controle;

    printf("________________________________________________\n");
    printf("Escolha uma das opcoes para exibir os card info:\n");
    printf("________________________________________________\n");
    printf("1. %s\n", cidade1);
    printf("2. %s\n", cidade2);
    scanf("%d", &controle);

    // inicia se a opção for numero 1 ou 2.
    if (controle >= 1 && controle <= 2)
    {

        // exibe os casos de cada opção.
        switch (controle)
        {

        case 1:

            // exibe as opções da carta 1
            int controle2;
            printf("_________________________\n");
            printf("____________%s___________\n", cidade1);
            printf("_________________________\n");
            printf("Selecione uma das opcoes:\n");
            printf("1. Exibir todas as Info.\n");
            printf("2. Disputar atributos.\n");
            scanf("%d", &controle2);

            if(controle2 == 1)
            {

                dens1 = (float)populacao1 / area1;
                ppca1 = (float)pib1 / populacao1;
                superP1 = populacao1 + area1 + pib1 + turismo1 + ppca1 + (1 / dens1);

                printf("Carta 1:\n\n");
                printf("Estado: %c\n", estado1);
                printf("Código: %s\n", codigo1);
                printf("Nome da cidade: %s\n", cidade1);
                printf("População: %lu\n", populacao1);
                printf("Área: %.2f km²\n", area1);
                printf("PIB: %.2f\n", pib1);
                printf("Pontos turísticos: %d\n", turismo1);
                printf("Densidade populacional: %.2f hab/km²\n", dens1);
                printf("PIB per capta: %.2f Reais\n", ppca1);
                printf("Super Poder: %lu\n", superP1);
                printf("_________________________________________\n\n");

                mostrarDados();
            }
            else if (controle2 == 2)
            {

                // aqui será um dos finais do jogo.
                int controle3;

                printf("===================================\n");
                printf("Escolha o atributo a ser disputado:\n");
                printf("===================================\n");

                printf("1. População.\n");
                printf("2. Área.\n");
                printf("3. PIB.\n");
                printf("4. Pontos turísticos.\n");
                printf("5. Densidade populacional.\n");
                printf("6. PIB per capta.\n");
                printf("7. Super Poder.\n");
                printf("_________________________________________\n\n");
                scanf("%d", &controle3);

                switch (controle3)
                {

                case 1:

                    // comparando atributos de população.
                    if (populacao1 > populacao2) // SE CARTA 1 FOR MAIOR QUE CARTA 2
                    {

                        printf("População: (%lu) | Carta 1 (%s)\n", populacao1, cidade1);
                        printf("População: (%lu) | Carta 2 (%s)\n", populacao2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (populacao1 == populacao2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else // CASO NENHUMA DAS OPÇÕES ACIMA FOREM VERDADADEIRAS
                    {
                        printf("População: (%lu) | Carta 1 (%s)\n", populacao1, cidade1);
                        printf("População: (%lu) | Carta 2 (%s)\n", populacao2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 2:

                    // comparando atributos de área.
                    if (area1 > area2)
                    {
                        printf("Área: (%f) Carta 1 (%s)\n", area1, cidade1);
                        printf("Área: (%f) Carta 2 (%s)\n", area2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (area1 == area2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Área: (%f) Carta 1 (%s)\n", area1, cidade1);
                        printf("Área: (%f) Carta 2 (%s)\n", area2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 3:

                    // comparando atributos do PIB.
                    if (pib1 > pib2)
                    {
                        printf("PIB: (%f) Carta 1 (%s)\n", pib1, cidade1);
                        printf("PIB: (%f) Carta 2 (%s)\n", pib2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (pib1 == pib2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("PIB: (%f) Carta 1 (%s)\n", pib1, cidade1);
                        printf("PIB: (%f) Carta 2 (%s)\n", pib2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 4:

                    // comparando os números de pontos turísticos.
                    if (turismo1 > turismo2)
                    {
                        printf("Pontos Turísticos: (%d) Carta 1 (%s) \n", turismo1, cidade1);
                        printf("Pontos Turísticos: (%d) Carta 2 (%s) \n", turismo2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (pib1 == pib2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Pontos Turísticos: (%d) Carta 1 (%s) \n", turismo1, cidade1);
                        printf("Pontos Turísticos: (%d) Carta 2 (%s) \n", turismo2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 5:

                    // comparando a densidade populaciuonal.
                    if (dens1 < dens1)
                    {
                        printf("Densidade Populacional: (%f) Carta 1 (%s)\n", dens1, cidade1);
                        printf("Densidade Populacional: (%f) Carta 2 (%s)\n", dens2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (dens1 == dens2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Densidade Populacional: (%f) Carta 1 (%s)\n", dens1, cidade1);
                        printf("Densidade Populacional: (%f) Carta 2 (%s)\n", dens2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 6:

                    // comparando o pib per capta.
                    if (ppca1 > ppca2)
                    {
                        printf("Pib Per Capta: (%f) Carta 1 (%s)\n", ppca1, cidade1);
                        printf("Pib Per Capta: (%f) Carta 2 (%s)\n", ppca2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (ppca1 == ppca2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Pib Per Capta: (%f) Carta 1 (%s)\n", ppca1, cidade1);
                        printf("Pib Per Capta: (%f) Carta 2 (%s)\n", ppca2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 7:

                    // comparando o super poder.
                    if (superP1 > superP2)
                    {
                        printf("Super Poder: (%lu) Carta 1 (%s)\n", superP1, cidade1);
                        printf("Super Poder: (%lu) Carta 2 (%s)\n", superP2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (superP1 == superP2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Super Poder: (%lu) Carta 1 (%s)\n", superP1, cidade1);
                        printf("Super Poder: (%lu) Carta 2 (%s)\n", superP2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                default:
                    printf("==============================================\n");
                    printf("===========Insira uma opcao valida!===========\n");
                    printf("==============================================\n");

                    mostrarDados();

                    break;
                }
            }

            break;

        case 2:

            // exibe as opções da carta 2
            int controle4;
            printf("_________________________\n");
            printf("____________%s___________\n", cidade2);
            printf("_________________________\n");
            printf("Selecione uma das opcoes:\n");
            printf("1. Exibir todas as Info.\n");
            printf("2. Disputar atributos.\n");
            scanf("%d", &controle4);

            if (controle4 == 1)
            {

                dens2 = (float)populacao2 / area2;
                ppca2 = (float)pib2 / populacao2;
                superP2 = populacao2 + area2 + pib2 + turismo2 + ppca2 + (1 / dens2);

                printf("Carta 2:\n\n");
                printf("Estado: %c\n", estado2);
                printf("Código: %s\n", codigo2);
                printf("Nome da cidade: %s\n", cidade2);
                printf("População: %lu\n", populacao2);
                printf("Área: %.2f km²\n", area2);
                printf("PIB: %.2f\n", pib2);
                printf("Pontos turísticos: %d\n", turismo2);
                printf("Densidade populacional: %.2f hab/km²\n", dens2);
                printf("PIB per capta: %.2f Reais\n", ppca2);
                printf("Super Poder: %lu\n", superP2);
                printf("_________________________________________\n\n");

                mostrarDados();
            }
            else if (controle4 == 2)
            {

                // aqui será um dos finais do jogo.
                int controle3;

                printf("===================================\n");
                printf("Escolha o atributo a ser disputado:\n");
                printf("===================================\n");

                printf("1. População.\n");
                printf("2. Área.\n");
                printf("3. PIB.\n");
                printf("4. Pontos turísticos.\n");
                printf("5. Densidade populacional.\n");
                printf("6. PIB per capta.\n");
                printf("7. Super Poder.\n");
                printf("_________________________________________\n\n");
                scanf("%d", &controle3);

                switch (controle3)
                {

                case 1:

                    // comparando atributos de população.
                    if (populacao1 > populacao2) // SE CARTA 1 FOR MAIOR QUE CARTA 2
                    {

                        printf("População: (%lu) | Carta 1 (%s)\n", populacao1, cidade1);
                        printf("População: (%lu) | Carta 2 (%s)\n", populacao2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (populacao1 == populacao2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else // CASO NENHUMA DAS OPÇÕES ACIMA FOREM VERDADADEIRAS
                    {
                        printf("População: (%lu) | Carta 1 (%s)\n", populacao1, cidade1);
                        printf("População: (%lu) | Carta 2 (%s)\n", populacao2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 2:

                    // comparando atributos de área.
                    if (area1 > area2)
                    {
                        printf("Área: (%f) Carta 1 (%s)\n", area1, cidade1);
                        printf("Área: (%f) Carta 2 (%s)\n", area2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (area1 == area2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Área: (%f) Carta 1 (%s)\n", area1, cidade1);
                        printf("Área: (%f) Carta 2 (%s)\n", area2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 3:

                    // comparando atributos do PIB.
                    if (pib1 > pib2)
                    {
                        printf("PIB: (%f) Carta 1 (%s)\n", pib1, cidade1);
                        printf("PIB: (%f) Carta 2 (%s)\n", pib2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (pib1 == pib2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("PIB: (%f) Carta 1 (%s)\n", pib1, cidade1);
                        printf("PIB: (%f) Carta 2 (%s)\n", pib2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 4:

                    // comparando os números de pontos turísticos.
                    if (turismo1 > turismo2)
                    {
                        printf("Pontos Turísticos: (%d) Carta 1 (%s) \n", turismo1, cidade1);
                        printf("Pontos Turísticos: (%d) Carta 2 (%s) \n", turismo2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (pib1 == pib2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Pontos Turísticos: (%d) Carta 1 (%s) \n", turismo1, cidade1);
                        printf("Pontos Turísticos: (%d) Carta 2 (%s) \n", turismo2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 5:

                    // comparando a densidade populaciuonal.
                    if (dens1 < dens1)
                    {
                        printf("Densidade Populacional: (%f) Carta 1 (%s)\n", dens1, cidade1);
                        printf("Densidade Populacional: (%f) Carta 2 (%s)\n", dens2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (dens1 == dens2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Densidade Populacional: (%f) Carta 1 (%s)\n", dens1, cidade1);
                        printf("Densidade Populacional: (%f) Carta 2 (%s)\n", dens2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 6:

                    // comparando o pib per capta.
                    if (ppca1 > ppca2)
                    {
                        printf("Pib Per Capta: (%f) Carta 1 (%s)\n", ppca1, cidade1);
                        printf("Pib Per Capta: (%f) Carta 2 (%s)\n", ppca2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (ppca1 == ppca2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Pib Per Capta: (%f) Carta 1 (%s)\n", ppca1, cidade1);
                        printf("Pib Per Capta: (%f) Carta 2 (%s)\n", ppca2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;

                case 7:

                    // comparando o super poder.
                    if (superP1 > superP2)
                    {
                        printf("Super Poder: (%lu) Carta 1 (%s)\n", superP1, cidade1);
                        printf("Super Poder: (%lu) Carta 2 (%s)\n", superP2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 1 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }
                    else if (ppca1 == ppca2) // SE CARTA 1 FOR IGUAL A CARTA 2
                    {
                        printf("==============================================\n");
                        printf("=================EMPATE!!!====================\n");
                        printf("==============================================\n");
                    }
                    else
                    {
                        printf("Super Poder: (%lu) Carta 1 (%s)\n", superP1, cidade1);
                        printf("Super Poder: (%lu) Carta 2 (%s)\n", superP2, cidade2);
                        printf("==============================================\n");
                        printf("==============CARTA 2 VENCEU!!!===============\n");
                        printf("==============================================\n");
                    }

                    break;
                default:
                    printf("==============================================\n");
                    printf("Insira uma opcao valida!\n");
                    printf("==============================================\n");

                    mostrarDados();

                    break;
                }
            }
        }
    }
    else
    {
        printf("Escolha uma opcao valida!");
        mostrarDados();
    }
}

int main()
{

    coletaDados();
    mostrarDados();

    return 0;
}
