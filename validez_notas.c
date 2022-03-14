#include <stdio.h>

int main()
{
    int qnt_nota = 0; 
    float nota, media, somatorio = 0;
    
    while(qnt_nota<2)
    {
        scanf("%f", &nota);
        
        if (!(nota>=0 && nota<=10))
        {
            printf("nota invalida\n");
        }
        else
        {
            qnt_nota ++;
            somatorio = somatorio + nota;
        }
        
    }
    
    media = somatorio / qnt_nota;
    printf("media = %.2f", media);
    
    return 0;    
}
