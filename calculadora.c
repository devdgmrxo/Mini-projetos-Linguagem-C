#include <stdio.h>

float adicao(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    return a / b;
}

int main()
{

    char operacao;
    float a, b;

    printf("=================================\n");
    printf("===========CALCULADORA===========\n");
    printf("=================================\n\n");

    printf("Digite o primeiro numero:\n");
    scanf("%f", &a);

    printf("Digite o segundo numero:\n");
    scanf("%f", &b);

    printf("Digite a operacao:\n");
    scanf(" %c", &operacao);

    float funcAdicao = adicao(a, b);
    float funcSubtracao = subtracao(a, b);
    float funcMultiplicacao = multiplicacao(a, b);
    float funcDivisao = divisao(a, b);

    switch (operacao)
    {

    case '+':

        printf("O resultado e: %.2f", funcAdicao);

        break;

    case '-':

        printf("O resultado e: %.2f", funcSubtracao);

        break;

    case '*':

        printf("O resultado e: %.2f", funcMultiplicacao);

        break;

    case '/':

        if (b == 0)
        {
            printf("IMPOSSIVEL DIVIDIR ALGUM NUMERO POR  ZERO!!");
            return 1;
        }
        else
        {
            printf("O resultado e: %.2f", funcDivisao);
        }

        break;

    default:

        printf("INSIRA UMA OPCAO VALIDA!!!!!!!!!!!!");

        return 1;
    }

    return 0;
}
