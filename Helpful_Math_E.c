#include <stdio.h>
#include <string.h>

void merge(int A[], int l, int m, int h)
{
    int i, j, k;
    int B[100];
    i = l;
    j = m + 1;
    k = l;
    while (i <= m && j <= h)
    {
        if (A[i] < A[j] && i<=m)
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
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
    int A[100],c,j=0;
    char s[100];
    scanf("%s",s);

    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        if (s[i] != '+'){
           A[j]=s[i];
           j++;
           c++;
        }
    }

    merge_sort(A, 0, j - 1);

    for (int i = 0;i < j;i++){
        if (i == j - 1){
            printf("%c\n",A[i]);
        }
        else{
            printf("%c+",A[i]);
        }
    }
}


// int main()
// {
//     char s[100];
//     scanf("%s",s);

//     int l = strlen(s);

//     merge_sort(s, 0, l - 1);

//     printf("%s",s);
//     printf("\n");
// }