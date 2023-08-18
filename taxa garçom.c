#define taxa_porcent 10

int main()
{
    double conta, valor_taxa, conta_total;

    printf("Informe a entrada da conta do cliente: ");
    scanf("%lf", &conta);
    
    conta_total = conta + (conta * (taxa_porcent / 100.0));
    valor_taxa = conta_total - conta;

    // Exibe os resultados
    printf("A taxa de servico foi de: %.2lf R$, o total a ser pago eh: %.2lf R$.", valor_taxa, conta_total);

    return 0;
}