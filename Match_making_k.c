#include <stdio.h>

void bubble_sort(int A[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int m,w,c=1;
    while(scanf("%d %d", &m, &w)!=EOF){
    int A[m],B[w];
    if (m == 0 && w == 0)
        {
            break;
        }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < w; i++)
    {
        scanf("%d", &B[i]);
    }

    bubble_sort(A, m);
    if (m<=w) {
            printf("Case %d: 0\n",c);
        }
        else {

            printf("Case %d: %d %d\n", c,(m-w), A[0]);
        }
        c++;
    
    }
}



// void merge(int A[], int l, int m, int h)
// {
//     int i, j, k,B[100];
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
