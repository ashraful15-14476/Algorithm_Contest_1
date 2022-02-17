// #include <stdio.h>

// void merge(int*,int ,int ,int );
// void merge_sort(int*,int,int);

// void merge(int A[], int l, int m, int h)
// {
//     int i=l, j=m+1, k=0,B[h-l+1];
//     while (i <= m && j <= h)
//     {
//         if (A[i] > A[j] && i<=m)
//         {
//             B[k] = A[j];
//             j++;
//             k++;
//         }
//         else
//         {
//             B[k] = A[i];
//             i++;
//             k++;
//         }
//     }
//         while (i <= m)
//         {
//             B[k++] = A[i++];
//         }
//         while (j <= h)
//         {
//             B[k++] = A[j++];
//         }
//     for (int i = 0; i <= h; i++)
//     {
//         A[l+i] = B[i];
//     }
// }

// void merge_sort(int A[], int l, int h)
// {
//     int m;
//     if (l < h)
//     {
//         m = (l + h) / 2;
//         merge_sort(A, l, m);
//         merge_sort(A, m + 1, h);
//         merge(A, l, m, h);
//     }
// }

// int main()
// {
//     int n,t=1,d=0;
//     scanf("%d", &n);
//     int A[2000005];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     merge_sort(A, 0, n - 1);
//     for(int i=0;i<n;i++)
//         {
//             if(A[i]>=t)
//                 {
//                     t++;
//                     d++;
//                 }
//         }
//     printf("%d\n",d);
    
// }





// #include <stdio.h>

// void merge(int A[], int l, int m, int h)
// {
//     int i, j, k,B[h-l+1];
//     i = l;
//     j = m + 1;
//     k = l;
//     while (i <= m && j <= h)
//     {
//         if (A[i] < A[j] && i<=m)
//         {
//             B[k] = A[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             B[k] = A[j];
//             j++;
//             k++;
//         }
//     }
//         while (i <= m)
//         {
//             B[k++] = A[i++];
//         }
//         while (j <= h)
//         {
//             B[k++] = A[j++];
//         }
//     for (int i = l; i <= h; i++)
//     {
//         A[l+i] = B[i];
//     }
// }
// void merge_sort(int A[], int l, int h)
// {
//     int m;
//     if (l < h)
//     {
//         m = (l + h) / 2;
//         merge_sort(A, l, m);
//         merge_sort(A, m + 1, h);
//         merge(A, l, m, h);
//     }
// }
// int main()
// {
//      int n,day=0,t=1;
//     scanf("%d", &n);
//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     merge_sort(A, 0, n - 1);
//     for(int i=0;i<n;i++)
//         {
//             if(A[i]>=t)
//                 {
//                     t++;
//                     day++;
//                 }
//         }
//     printf("%d\n",day);
// }















#include<stdio.h>
#include<stdlib.h>

void merge(int A[], int l, int m, int h)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  h - m;
    int B[n1], C[n2];
    for (i = 0; i < n1; i++)
        B[i] = A[l + i];
    for (j = 0; j < n2; j++)
        C[j] = A[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (B[i] <= C[j])
        {
            A[k] = B[i];
            i++;
        }
        else
        {
            A[k] = C[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        A[k] = B[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        A[k] = C[j];
        j++;
        k++;
    }
}

void merge_sort(int A[], int l, int h)
{
    if (l < h)
    {

        int m = l+(h-l)/2;
        merge_sort(A, l, m);
        merge_sort(A, m+1, h);

        merge(A, l, m, h);
    }
}

int main()
{   int n,i,A[200005],d=0,t;
    scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
            }
         merge_sort(A, 0, n - 1);
            t=1;
            for(i=0;i<n;i++)
            {
                 if(A[i]>=t)
                 {
                     t++;
                     d++;

                 }
            }

    printf("%d\n",d);

}