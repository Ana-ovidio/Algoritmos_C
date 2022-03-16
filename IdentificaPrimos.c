#include <stdio.h>
#define TAM 8

int encontra_primos (int num)
{
    int i, retorno = 1;
    if ((num!=1) || (num!=2))
    {
        for (i=2; i< num; i++)
        {
            if (num%i == 0)
            {
                retorno = 0;
                break;
            }
        }    
    }

    return retorno;
}

int main()
{
    int validacao, num;
    scanf("%d", &num);
    
    validacao = encontra_primos(num);
    
    if (validacao == 0)
        printf("NAO PRIMO");
    else 
        printf("PRIMO");
    return 0;
}
