#include<stdio.h>
void reverse(int *p,int n){
    for(int i=0;i<(n/2);i++){
        int temp=p[i];
        p[i]=p[n-i-1];
        p[n-i-1]=temp;
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    reverse(a,10);
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
    return 0;
}