#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[100][100];
    M[0][0] = 0;
    M[0][1] = 1;
    M[1][0] = 10;
    M[2][2] = 22;
    printf("%d\n", M);
    printf("%d\n", *M);
    printf("%d\n", **M);
    printf("%d\n", *(*(M + 1) + 0));
    // *(*(M + i) + j)
    return 0;
}