/*
#include <stdio.h>

void fun(int *w, int p, int n){
    int i, j, t;
    for(i=p; i<=n-1;i++){
        t = w[n-1];
        for(j=n-2;j>=0;j--)
            w[j+1] = w[j];
        w[0] = t;
    }
}

int main(){
    int w[7] = {1,2,3,4,5,6,7};
    int p,i, n = 7;
    printf("input p\n");
    scanf("%d",&p);
    fun(w, p, n);
    for(i=0;i<7;i++){
        printf("%d ",w[i]);
    }
    printf("\n");
    return 0;
}*/

