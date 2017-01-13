#include <profile.h>

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


const int model = 90;
const int v[] = {1,2,3,4};
const int x = 0;
void f(){
    int model = 90;
    model = 20;
    const int v[] = {1,2,3,4};
    //v[2]++;
}

void f1(char *p)
{

    char s[] = "Grom";
    const char* pc = s;     //pc is a pointer to char const
    //pc[3] = 'g';
    pc = p;
    char *const cp = s;     //cp is a const pointer to char
    cp[3] = 'a';
    const char *const cpc = s;      //cpc is a const pointer to const char
    //cpc[3] = 'a';
    //cpc = p;

    const int c = 2;
    const int *p1 = &c;
    //int *p3 = &c;
    
}





