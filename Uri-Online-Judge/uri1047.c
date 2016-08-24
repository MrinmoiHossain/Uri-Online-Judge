#include <stdio.h>

int main()
{
    int h1, m1, h2, m2, hour, minute;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1 < h2){
        if(m1 == m2){
            hour = h2 - h1;
            minute = 0;
        }
        else if(m1 > m2){
            hour = h2 - h1 - 1;
            minute = 60 + m2 - m1;
        }
        else if(m1 < m2){
            hour = h2 - h1;
            minute = m2 - m1;
        }
    }
    else if(h1 > h2){
        if(m1 > m2){
            hour = 23 + h2 - h1;
            minute = 60 + m2 - m1;
        }
        else if(m1 < m2){
            hour = 24 + h2 - h1;
            minute = m2 - m1;
        }
        else if(m1 == m2){
            hour = 24 + h2 - h1;
            minute = 0;
        }
    }
    else if(h1 == h2){
        if(m1 > m2){
          hour = 23;
          minute = 60 + m2 - m1;
        }
        else if(m1 == m2){
            hour = 24;
            minute = 0;
        }
        else if(m1 < m2){
            hour = 0;
            minute = m2 - m1;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

    return 0;
}
