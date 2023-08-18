int main()
{
    double valor_devido, dia_atraso, porcent_multa, valor_total;

    printf("Informe o valor devido pelo cliente: ");
    scanf("%lf", &valor_devido);
    printf("Informe quantos dias o pagamento esta atrasado: ");
    scanf("%lf", &dia_atraso);
    printf("informe a porcentagem de multa por dia de atraso: ");
    scanf("%lf", &porcent_multa);
    
    valor_total = valor_devido + (dia_atraso * (valor_devido * (porcent_multa / 100)));

    // Exibe os resultados
    printf("O valor total devido pelo cliente eh: %.2lf", valor_total);

    return 0;
}