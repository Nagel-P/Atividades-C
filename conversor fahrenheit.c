int main()
{
    double celsius, fahrenheit;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;  // Calcula a temperatura em Fahrenheit

    // Exibe os resultados
    printf("A temperatura de Celsius: %.2lf ; em Fahrenheit eh: %.2lf", celsius, fahrenheit);

    return 0;
}
