#include <stdio.h>

void ekleme(int[], int x, int y);

int main()
{
    int dizi[100];
    int i, n, m;

    printf("dizinin buyuklugunu belirleyin :"); // 1 3 5 7 9  --> 1 3 4 5 7 9
    scanf("%d", &n);

    printf("Kucukten buyuge dogru olacak sekilde bir dizi olusturun !\n");

    for (i = 0; i < n; i++)
    {
        printf("dizi[%d] =", i);
        scanf("%d", &dizi[i]);
    }

    printf("Diziye eklemek istediginiz sayiyi giriniz : ");
    scanf("%d", &m);

    ekleme(dizi, n, m);
}

void ekleme(int a[], int x, int y)
{

    int i, j;

    for (i = 0; i < x; i++)
    {
        if (a[i] >= y)
        {
            break;
        }
    }

    for (j = x; j > i; j--)
    {
        a[j] = a[j - 1];
    }

    a[i] = y;

    for (j = 0; j < x + 1; j++)
    {
        printf("a[%d] = %d \n", j, a[j]);
    }
}