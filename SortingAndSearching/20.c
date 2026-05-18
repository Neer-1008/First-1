#include<stdio.h>
int BinarySearch(int a[],int t,int st,int end){
    int mid=(st+end)/2;
    if(st>end){
        return -1;
    }
    else if(a[mid]==t){
        return mid;
    }
    else if(a[mid]>t){
        end=mid-1;
        return BinarySearch(a,t,st,end);
    }
    else if(a[mid]<t){
        st=mid+1;
        return BinarySearch(a,t,st,end);
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    int tar;
    printf("enter target:");
    scanf("%d",&tar);

    int ans;
    ans=BinarySearch(a,tar,0,10);

    if(ans>=0){
        printf("Element Found at : %d",ans);
    }
    else{
        printf("Not Found");
    }

    return 0;
}