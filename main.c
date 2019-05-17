#include <stdio.h>
void main()
{int n,b[1000],a[1000][1000],i,j,m;
printf("enter length of rod");
scanf("%d",&n);
printf("enter size of length and prize array");
scanf("%d",&m);
printf("enter prize of each piece in ascending order from length '0' and length whose prize is not known is considered to be '0' ");
for(i=0;i<=m;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
    a[i][0]=0;
}
for(j=0;j<=m;j++)
{
    a[0][j]=0;
    a[1][j]=j*b[i];
}

for(i=2;i<m;i++)

{for (j=1;j<=m;j++)
{

if(i>j)
   a[i][j]=a[i-1][j];
else
   if(a[i][j-i]+b[i]>a[i-1][j])
        a[i][j]=a[i][j-1]+b[i];
   else
        a[i][j]=a[i-1][j];
}

}
printf("%d",a[m-1][m]);
}

