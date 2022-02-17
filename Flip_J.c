//Done

// #include <stdio.h>

// int M = 0;

// void merge(int A[], int l, int m, int h)
// {
//     int i, j, k, B[h+1];
//     i = l;
//     j = m + 1;
//     k = l;
//     while (i <= m && j <= h)
//     {
//         if (A[i] > A[j] && i<=m)
//         {
//             M+=1+m-i;
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
//     for (int i = l; i <= h; i++)
//     {
//         A[i] = B[i];
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
//     int N;
//     while (scanf("%d", &N)!=EOF){
//     M = 0;
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     merge_sort(A, 0, N - 1);

//     printf("Minimum exchange operations : %d\n",M);
//     }
// }






#include <stdio.h>

int M = 0;

int bubble_sort(int A[], int n)
{
    int temp,m=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            m++;
            }
        }
    }
    return m;
}


int main()
{
    int N;
    while (scanf("%d", &N)!=EOF){
    M = 0;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int r = bubble_sort(A,N);

    printf("Minimum exchange operations : %d\n",r);
    }
}