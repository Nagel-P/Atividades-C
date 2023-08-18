int main()
{
    double reais, dolar, cotacao;

    printf("Digite um valor em R$: ");
    scanf("%lf", &reais);

    printf("Digite a cotacao de US$: ");
    scanf("%lf", &cotacao);

    dolar = reais / cotacao;

    // Exibe os resultados
    printf("O valor em R$: %.2lf ; em US$ eh: %.2lf", reais, dolar);

    return 0;
}
