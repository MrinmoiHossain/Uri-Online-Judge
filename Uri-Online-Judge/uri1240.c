#include <stdio.h>
#include <math.h>

int myFunction(long long int a);

int main()
{
    int N, i;
    long long int A, B, rec, z;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%lld %lld", &A, &B);

        z = myFunction(B);
        z = ceil(pow(10, z));

        rec = A % z;

        if(rec == B){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}

int myFunction(long long int a)
{
    int count = 0;

    while(a){
        a /= 10;
        count++;
    }

    return count;
}
