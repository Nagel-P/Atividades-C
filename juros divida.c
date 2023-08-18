int main()
{
    double valor_divida, juros, divida_total;

    printf("Informe o valor da divida: ");
    scanf("%lf", &valor_divida);
    printf("Informe a porcentagem do juros mensal: ");
    scanf("%lf", &juros);
    
    divida_total = valor_divida + (valor_divida * (juros / 100.0));
    
    printf("O valor da divida com o juros eh: %.2lf R$.", divida_total);

    return 0;
}
