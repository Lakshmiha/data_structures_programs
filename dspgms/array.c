#include<stdio.h>
int ary[4],n;
printf("Enter array elements:");
for(int i=0;i<n;i++){
scanf("%d",&ary[i]);
}

for(i=0;i<n;i++){
temp=ary[i];
ary[i]=ary[i+4];
ary[i+4]=temp;
}

for(i=0;i<n;i++){
printf("array elements:%d",ary[i]);
}
