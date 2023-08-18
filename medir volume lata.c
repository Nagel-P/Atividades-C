#define pi 3.1415

int main()
{
    double volume, raio, altura;

    printf("Digite o raio em cm: ");
    scanf("%lf", &raio);
    printf("Digite a altura em cm: ");
    scanf("%lf", &altura);
    
    volume = pi * (raio * raio) *altura;

    // Exibe os resultados
    printf("O volume da lata de oleo eh: %.2lf cm³", volume);

    return 0;
}