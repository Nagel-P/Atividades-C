int main()
{
    double sal_min, quilowatts, preco_quillowatts, valor_pago;

    printf("Informe o salario minimo: ");
    scanf("%lf", &sal_min);
    printf("Informe a quantia consumida de kW: ");
    scanf("%lf", &quilowatts);
    
    preco_quillowatts = sal_min / 7.0 / 100.0;
    valor_pago = preco_quillowatts * quilowatts;

    printf("O valor do quilowatt eh: %.2lf R$. O valor total a ser pago eh: %.2lf R$.", preco_quillowatts, valor_pago);

    return 0;
}