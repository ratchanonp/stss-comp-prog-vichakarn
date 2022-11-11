#include <stdio.h>
long long ans = 0, a[10], b[10], c[10], ab[10][10], ac[10][10], bc[10][10], abc[10][10][10];

int main()
{
    int n;
    char st[100500][5];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", st[i]);

        int x = st[i][0] - '0';
        int y = st[i][1] - '0';
        int z = st[i][2] - '0';

        a[x]++;
        b[y]++;
        c[z]++;

        ab[x][y]++;
        ac[x][z]++;
        bc[y][z]++;

        abc[x][y][z]++;

        ans += a[x] + b[y] + c[z] - ab[x][y] - ac[x][z] - bc[y][z] + abc[x][y][z];
    }

    printf("%d", ans - n);

    return 0;
}
