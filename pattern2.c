#include<stdio.h>
int i=5;
void show(int a,int b,int n)
{
if(b>n)return;
  printf("%d ",a);
  if(a==i)
  {
  printf("\n");
    b++;
  i--;
    a=0;
  }
  a++;
  show(a,b,n);
}
void main()
{
show(1,1,5)
}
