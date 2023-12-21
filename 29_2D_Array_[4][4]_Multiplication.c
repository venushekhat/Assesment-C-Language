//Input To array from user to print them or mltiplication to two arrays the Mathe matical rules//

#include<stdio.h>
main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3],sum;
	printf("\n\n\t____________________Array1____________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element A[%d][%d] : ",i,j);
			scanf(" %d",&a[i][j]);
		}
	}
	printf("\n\n\t___________________Array2______________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Input element B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n\t____________________Matrix-1___________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t___________________Matrix-2____________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\t___________________MUlTIPLICATION____________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//sum=0;
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				//sum=sum+a[i][k]*b[k][j];
				//c[i][j]=sum;
				c[i][j]=c[i][j]+a[i][k]*b[k][j];	
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
