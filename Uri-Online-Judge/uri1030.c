#include <stdio.h>

int Josephus(int a, int b);
int JosephusFunction(int c, int d, int e);

int main()
{
    int NC, n, k, i, m;

    scanf("%d", &NC);

    for(i = 1; i <= NC; i++){
        scanf("%d %d", &n, &k);

        m = Josephus(n, k);

        printf("Case %d: %d\n", i, m);
    }

    return 0;
}

int Josephus(int a, int b)
{
    return JosephusFunction(a, b, 1);
}

int JosephusFunction(int c, int d, int e)
{
    if(c == 1){
        return 1;
    }
    int p, q;

    p = (e + d - 2) % c + 1;
    q = JosephusFunction(c - 1, d, p);

    if(p > q){
        return q;
    }
    else{
        return q + 1;
    }
}
