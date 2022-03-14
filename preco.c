#include <stdio.h>

float preco_total ();

int main()
{
    float total;
    total = preco_total();
    printf("Total: R$ %.2f", total);

    return 0;
}

float preco_total ()
{
    int qnt;
    float preco_unitario, total=0;
    scanf("%d %f", &qnt, &preco_unitario);
    

    while (qnt > 0)
    {
        total = total + (qnt * preco_unitario);
        scanf("%d %f", &qnt, &preco_unitario);
    }
    
    return total;
}