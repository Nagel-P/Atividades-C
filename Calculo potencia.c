int main()
{
    double valor, potencia;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    potencia = pow(valor, 2.0);  // Calcula o valor elevado ao quadrado

    // Exibe os resultados
    printf("O numero ao quadrado eh: %lf", potencia);

    return 0;
}
