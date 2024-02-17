#include<stdio.h>
int main()
{
	int m,n,p,i,j,k,a,b,c;

	printf("enter 3d matrix size(m*n*p):\n");
	scanf("%d %d %d" ,&m,&n,&p);
	int arr1[m][n][p];
	printf("input 3d matrix : \n");
	for(i=0;i<m;i++)
	{
		printf("block(%d)\n",i+1);
		for(j=0;j<n;j++)
		{
		  	for(k=0;k<p;k++)
			{
					
		  printf("arr1[%d][%d][%d]=",i,j,k);
		  scanf("%d",&arr1[i][j][k]);
		  
 	        }
	    }
	    
	}
	
	printf("enter 3d matrix size(m*n*p):\n");
	scanf("%d %d %d" ,&m,&n,&p);
	int arr2[m][n][p];
	printf("input 3d matrix : \n");
	for(i=0;i<m;i++)
	{
		printf("block(%d)\n",i+1);
		for(j=0;j<n;j++)
		{
		  	for(k=0;k<p;k++)
			{
					
		  printf("arr2[%d][%d][%d]=",i,j,k);
		  scanf("%d",&arr2[i][j][k]);
		  
 	        }
	    }
	    
	}
	int arr3[m][n][p];
	if (m==n && n==p)
	{
	for(i=0;i<m;i++)
	{
    	for(j=0;j<n;j++)
		{
		  	for(k=0;k<p;k++)
			{
				arr3[i][j][k]= arr1[i][j][k]+arr2[i][j][k];
			}
		}
	}
	}
	
	//output
	printf("output 3d matrix : \n");
	for(i=0;i<m;i++)
	{
		printf("block(%d)\n",i+1);
		for(j=0;j<n;j++)
		{
		  	for(k=0;k<p;k++)
			{
					
		  printf("%3d",arr3[i][j][k]);
		  
 	        }
     	    printf("\n");
	    
	    }

	}
    
	return 0;

}
