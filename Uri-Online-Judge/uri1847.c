#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if(A > B && B <= C){
        printf(":)\n");
    }
    else if(A < B && B >= C){
        printf(":(\n");
    }
    else if(A < B && B < C && (C - B) < (B - A)){
        printf(":(\n");
    }
    else if(A < B && B < C && (C - B) >= (B - A)){
        printf(":)\n");
    }
    else if(A > B && B > C && (B - C) < (A - B)){
        printf(":)\n");
    }
    else if(A > B && B > C && (B - C) >= (A - B)){
        printf(":(\n");
    }
    else if(A == B && B < C){
        printf(":)\n");
    }
    else if(A== B && B >= C){
        printf(":(\n");
    }

    return 0;
}
