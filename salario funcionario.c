int main()
{
    double horas, sal_hora, salario;
    char funcionario[100];

    printf("Digite o nome do funcionario: ");
    scanf("%[^\n]%*c", funcionario);  // Lê a string com espaços em branco
    printf("Digite horas trabalhadas: ");
    scanf("%lf", &horas);
    printf("Digite o salario por hora do funcionario: ");
    scanf("%lf", &sal_hora);

    salario = horas * sal_hora;

    // Exibe os resultados
    printf("O salario de %s eh: %.2lf R$", funcionario, salario);

    return 0;
}
