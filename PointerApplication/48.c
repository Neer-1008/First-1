#include<stdio.h>
int main(){
    FILE *p=fopen("1.txt","r");
    int r,c;
    fscanf(p,"%d",&r);
    fscanf(p,"%d",&c);
    int a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            fscanf(p,"%d",&a[i][j]);
        }
    }

    for(int i=0;i<c;i++){
        int max=0;
        for(int j=0;j<r;j++){
            if(a[j][i]>max){
                max=a[j][i];
            }
        }
        printf("%d ",max);
    }
    return 0;
}