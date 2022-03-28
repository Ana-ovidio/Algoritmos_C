#include <stdio.h>
#include <string.h>
#define TAM 1000

void translada_metade_texto (char texto[], int tamanho_texto)
{
    int i, parada;
    
    if (tamanho_texto%2==0)
        parada = tamanho_texto/2;
    else
        parada = (tamanho_texto-1)/2;
    
    for (i=parada; texto[i]!='\0'; i++)
    {
        if (texto[i] != ' ')
            texto[i] = texto[i] - 1;
    }
}


void inverte_linha (char texto[])
{
   
    int inicio, final;
    int tamanho_texto = strlen(texto);
    char aux;
    
    int parada; 
    
    // Verifica se o tamanho do texto é divisível por 2.
    //Metade depende da condição supracitada 
    
    if (tamanho_texto%2==0)
        parada = tamanho_texto/2;
    else
        parada = (tamanho_texto-1)/2;
    
    final = tamanho_texto-1;
    for (inicio=0; inicio<parada; inicio++)
    {
        aux = texto[inicio];
        texto[inicio] = texto[final];
        texto[final] = aux;
        
        final--;
    }
    
    
    translada_metade_texto(texto, tamanho_texto);
}


void translada_letras (char texto[])
{
    int i;
    for (i=0; texto[i]!='\0'; i++)
    {
        if ((texto[i]>='a' && texto[i]<='z') ||
            (texto[i]>='A' && texto[i]<='Z'))
            
            texto[i] = texto[i]+3;
    }
    
    inverte_linha(texto);
}


int main()
{
    int qnt_repeticoes, cont;
    char texto[TAM];
    
    scanf("%d", &qnt_repeticoes);
    scanf("%*c");
    for (cont=0; cont<qnt_repeticoes; cont++)
    {
        fgets(texto,TAM,stdin);
        
        int tamanho_texto = strlen(texto);
        texto[tamanho_texto-1] = '\0';
        translada_letras(texto);
        
        puts(texto);
    }
    
    return 0;
}
