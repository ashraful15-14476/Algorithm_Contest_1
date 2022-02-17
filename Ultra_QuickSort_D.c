//Done


#include <stdio.h>

long long int c = 0;

void merge(int A[], int l, int m, int h)
{
    int i, j, k, B[h+1];
    i = l;
    j = m + 1;
    k = l;
    while (i <= m && j <= h)
    {
        if (A[i] > A[j] && i<=m)
        {
            c+=1+m-i;
            B[k] = A[j];
            j++;
            k++;
        }
        else
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }
        while (i <= m)
        {
            B[k++] = A[i++];
        }
        while (j <= h)
        {
            B[k++] = A[j++];
        }
    for (int i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

void merge_sort(int A[], int l, int h)
{
    int m;
    if (l < h)
    {
        m = (l + h) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, h);
        merge(A, l, m, h);
    }
}


int main()
{
    int n;
    while (scanf("%d", &n)) {
        if (n == 0)
        {
            break;
        }
        c=0;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        merge_sort(A, 0, n - 1);
        printf("%lld\n",c);
        
    }
}
