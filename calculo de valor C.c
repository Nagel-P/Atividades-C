int main()
{
    double valorA, valorB, valorC;

    printf("Digite o valor de A: ");
    scanf("%lf", &valorA);
    printf("Digite o valor de B: ");
    scanf("%lf", &valorB);
    
    valorC = (valorA + valorB) * valorB;

    // Exibe os resultados
    printf("O valor de C eh: %.2lf", valorC);

    return 0;
}