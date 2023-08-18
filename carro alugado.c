int main()
{
    double km_rodado, dias_alugados, valor_pagar;
    double preco_dia = 70.00;
    double preco_km = 0.15;

    printf("Informe km percorridos: ");
    scanf("%lf", &km_rodado);
    printf("Informe dias alugados: ");
    scanf("%lf", &dias_alugados);
    
    valor_pagar = (km_rodado * preco_km) + (dias_alugados * preco_dia);

    // Exibe os resultados
    printf("O valor a pagar pelo aluguel do carro é: %.2lf R$", valor_pagar);

    return 0;
}
