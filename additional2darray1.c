#include<stdio.h>

int main()
{
int m,n;
printf("enter the vaalue of m:");
scanf("%d",&m);
printf("enter the vaalue of n:");
scanf("%d",&n);

int x[m][n];
int i,j;
printf("enter the value of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&x[i][j]);
}
for(i=0;i<m;i++)
{int sum=0,sum1=0;
for(j=0;j<n;j++)
{
sum=sum+x[i][j];
sum1=sum1+x[j][i];
}
printf("sum of row %d is %d\n",i+1,sum);
printf("sum of coloumn %d is %d\n",i+1,sum1);
}
printf("\n);




}
