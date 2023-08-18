int main()
{
    double nota_a, nota_b, nota_c, nota_media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%lf", &nota_a);
    printf("Digite a segunda nota do aluno: ");
    scanf("%lf", &nota_b);
    printf("Digite a terceira nota do aluno: ");
    scanf("%lf", &nota_c);

    if (nota_a > 10.0 || nota_a < 0.0 || nota_b > 10.0 || nota_b < 0.0 || nota_c > 10.0 || nota_c < 0.0)
    {
        printf("Erro, valor nao reconhecido\n");
        return 0;
    }

    nota_media = ((nota_a * 2.0) + (nota_b * 3.0) + (nota_c * 5.0)) / 10.0;

    // Exibe o resultado da média do aluno
    printf("A media do aluno eh: %.1lf", nota_media);

    return 0;
}