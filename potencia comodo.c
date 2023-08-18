#define watts 18

int main()
{
    double largura, comprimento, area, potencia;

    printf("informe a largura do comodo em m²: ");
    scanf("%lf", &largura);
    printf("Informe o comprimento do comodo em m²: ");
    scanf("%lf", &comprimento);
    
    area = largura * comprimento;
    potencia = area * watts;

    // Exibe os resultados
    printf("a area do comodo eh: %.2lf m². A potencia de watts que devera ser usada é: %.2lfW", area, potencia);

    return 0;
}