#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    int *p=(int*)malloc(10*sizeof(int));
    int *q=(int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++){
        p[i]=a[i];
        q[i]=a[i];
    }
    //Ascending Order.
    for(int i=0;i<10;i++){
        int pos=i;
        for(int j=i+1;j<10;j++){
            if(p[pos]>p[j]){
                pos=j;
            }
        }
        int temp=p[pos];
        p[pos]=p[i];
        p[i]=temp;
    }
    //Descending Order.
    for(int i=0;i<10;i++){
        int pos=i;
        for(int j=i+1;j<10;j++){
            if(q[pos]<q[j]){
                pos=j;
            }
        }
        int temp=q[pos];
        q[pos]=q[i];
        q[i]=temp;
    }
    
    for(int i=0;i<10;i++){
        printf("%d %d %d\n",p[i],a[i],q[i]);
    }
    return 0;
}