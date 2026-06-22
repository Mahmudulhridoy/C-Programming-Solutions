#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[N][M];
    int Jadu = 1;
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (i == j || j == N - 1 - i)
            {
                if (matrix[i][j] != 1)
                    Jadu = 0;
            }
            else
            {
                if (matrix[i][j] != 0)
                    Jadu = 0;
            }
        }
    }

    if (Jadu)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
