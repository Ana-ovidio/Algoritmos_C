# include <stdio.h>

int main()
{
    // Valores de referência que pertencem à sequência de Fibbonati
    int antipenul=1, penul=2, num=3; 
    
    int valor_parada, cont=0;
    scanf("%d", &valor_parada);
    
    while(cont < valor_parada)
    {
        // Salvar sempre os valores da sequência de Fibbonati
        if (num == antipenul + penul)
        {
            antipenul = penul;
            penul = num;
        }
        else
        {
            cont ++;
        }
        num ++;
    }
    
    printf("%d", num-1);
    return 0;
}
