#include <stdio.h>
#include <stdlib.h>

int main()
{

    int H1, M1, H2, M2;
    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    
    int horas, minutos, tempo_sono;
    int horas_ate00, min_ate00;
    
    while (!(H1==0 && M1==00 && H2==0 && M2==0))
    {
        if (H2>H1 || (H1== H2 && M2 > M1))
        {
            horas = (H2-H1) * 60;
            minutos = abs(M2-M1);
            tempo_sono = horas + minutos;
        }
        
        else 
        {
            horas_ate00 = 24 - H1;
            min_ate00 = 60 - M1;
            tempo_sono = (((horas_ate00 - 1)*60) + min_ate00 + 
                            (H2*60) + M2);
        }
        
        printf("%d\n", tempo_sono);
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    }

}
