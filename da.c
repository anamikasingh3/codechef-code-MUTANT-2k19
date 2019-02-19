#include<stdio.h>
void main()
{
int n,nn,j,i,m,c,b,di,k,ar,x,y;
int a[100],d[100];
scanf("%d",&n);
 scanf("%d",&nn);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
scanf("%d",&d[i]);
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
x=d[i];
y=d[i+1];
d[i]=y;
d[i+1]=x;

}
}
}
ar=0;
j=0;
k=n;
for(i=0;i<n;i++)
{
k--;
if(i<nn)
{
ar=ar+((a[j]+a[k])*(d[j]+d[k]));
};
j++;
if(i>=nn)


{
 n--;
ar=ar+(a[j]*d[j]);
}
}


ar=ar+1;
printf("%d",ar);

}

