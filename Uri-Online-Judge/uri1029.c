#include <stdio.h>

int count;

int fibonacci(int n);

int main()
{
    int N, i, X;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        count = 0;
        printf("fib(%d) = %d calls = %d\n", X, count - 1, fibonacci(X));
    }
    return 0;
}


int fibonacci(int n)
{
    count++;
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci (n - 2);
}
