#define hora_aula 1.0
int main()
{
    double salario_liquido, salario_bruto, valor_hora, aulas_mes, desconto_inss;

    printf("Informe o valor da hora/aula: ");
    scanf("%lf", &valor_hora);
    printf("Informe a quantidade de aulas dadas no mes: ");
    scanf("%lf", &aulas_mes);
    printf("Informe a porcentagem do desconto do INSS: ");
    scanf("%lf", &desconto_inss);
    
    salario_bruto = valor_hora * (aulas_mes * hora_aula);
    salario_liquido = salario_bruto - (salario_bruto * (desconto_inss / 100.0));

    // Exibe os resultados
    printf("O salario bruto do professor eh: %.2lf R$.\nO salario liquido do professor eh: %.2lf R$.", salario_bruto, salario_liquido);

    return 0;
}