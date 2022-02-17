#include <stdio.h>
#include <stdlib.h>

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
    int n,sum = 0, even[2000], odd[2000],sume=0,sumo=0,e=0,o=0,r=0;
    scanf("%d", &n);
    int A[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        sum+=A[i];
    }

    for(i=0; i<n;i++){
        if(A[i]%2==0){
            even[e] = A[i];
            sume+=A[i];
            e++;
        }
        else{
            odd[o]=A[i];
            sumo+=odd[o];
            o++;
        }
    }

    bubble_sort(even, e);
    bubble_sort(odd, o);

    int d = abs(e-o);

    if(d==0 || d==1){
        sume+=sumo;
        r = sum-sume;
        printf("%d\n",r);
    }
    else{
        if(e>o){
            for(i=0;i<d-1;i++){
                r+=even[i];
            }
        }
        else{
            for(i=0;i<d-1;i++){
                r+=odd[i];
            }
        }
        printf("%d\n",r);
    }

}