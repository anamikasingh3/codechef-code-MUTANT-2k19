#include<stdio.h>
void main()
{
int n,nn,j,i,m,c,b,di;
int a[100],d[100];
scanf("%d",&n);
 scanf("%d",&nn);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
scanf("%d",&d[i]);

}

m=a[0];
di=d[0];
for(i=1;i<n;i++)
{
for(j=1;j<i;j++)
{
if(a[i]>a[i+1])
{
b=a[i];
c=a[i+1];
a[i]=c;
a[i+1]=b;
}
}
}
for(i=1;i<n;i++)
{
for(j=1;j<i;j++)
{
if(d[i]>d[i+1])
{
b=d[i];
c=d[i+1];
d[i]=c;
d[i+1]=b;
}
}
}j=n;
for(i=0;i<nn;i++)
{
a[j]=a[j]-d[j];
j--;
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[i]<a[i+1])
{
b=a[i];
c=a[i+1];
a[i]=c;
a[i+1]=b;
}
}
}
for(i=n-1;i>=0;i--)
{if(a[i]==m)
{


printf("%d",i);
break;
}}}
