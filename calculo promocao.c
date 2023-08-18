int main()
{
    double preco, desconto, valor_promoc;

    printf("Informe o preco do produto: ");
    scanf("%lf", &preco);
    printf("Informe o desconto do produto: ");
    scanf("%lf", &desconto);
    
    if(desconto >= preco)
    {
        printf("erro valor de desconto acima do aceitado") ;   
        return 0;
    }
    
    valor_promoc = preco - desconto;

    // Exibe os resultados
    printf("O preco do produto na promocao eh: %.2lf R$.", valor_promoc);

    return 0;
}