#include<stdio.h>
int main()
{
int a[100],size,pos,ele,i;
printf("enter the size of the array");
scanf("%d",&size);
printf("enter the %d elements");
for (i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&pos);
printf("enter the element that you want to insert");
scanf("%d",&ele);
pos--;
for(i=size-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=ele;
size++;
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
}
