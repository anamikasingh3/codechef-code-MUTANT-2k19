#include<stdio.h>
void main()
{
int a[10000],i,m,b[10000],c[1000];
char t;
long int n;
scanf("%ld",&n);
 

for(i=0;i<n;i++)
{
b[i]=0;
c[i]=0;
scanf("%d",&a[i]);
}
m=0;b[0]=1;

for(i=0;i<n;i++)
{


if(i==0)
{b[1]=0;
b[0]=1;
if(a[0]==a[1])
{
b[0]=b[0]+1;
b[1]=b[1]+1;
}
}
else
{
if(a[i]==a[i-1])
{
c[i]=a[i]+1;
}
else
{
c[i]=a[i];
}


if(c[i]==b[i-1])
{
b[i]=b[i]+1;
}

}
}


for(i=0;i<n;i++)
{
printf(" ");
printf("%d",b[i]);
}
}
