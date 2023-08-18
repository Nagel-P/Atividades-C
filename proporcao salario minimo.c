int main()
{
    double sal_per, sal_propor, sal_min;

    printf("Digite seu salario: ");
    scanf("%lf", &sal_per);
    printf("Digite o salario minimo: ");
    scanf("%lf", &sal_min);
    
    sal_propor = (sal_per / sal_min);  	// Calcula a proporção do salário mínimo

    // Exibe os resultados
    printf("Você recebe: %.2lf salários mínimos", sal_propor);

    return 0;
}  