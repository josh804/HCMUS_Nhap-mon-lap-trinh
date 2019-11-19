#include <stdio.h>
#include <conio.h>
int a[100];
int b[100];
void main()
{
    int k, i, n, j;
    printf("nhap so tu cua mang: ");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf_s("%d", &a[i]);
    }
    printf("tong cua k phan tu lien tiep, nhap k= ");
    scanf_s("%d", &k);
    for (i = 0; i <= n - k; i++)
        for (j = 0; j < k; j++)
            b[i] += a[i + j];
    int max = b[0];
    for (i = 1; i <= n - k; i++)
        if (max < b[i])
            max = b[i];
    printf("tong lon nhat cua %d phan tu lien tiep la: %d", k, max);
    _getch();
}