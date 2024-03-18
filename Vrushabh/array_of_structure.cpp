//Practical no.05
#include<stdio.h>

struct st_record
{
	char name[50];
	int roll_no;
};
int main()
{
	int n, i;
	printf("Enter number of student's:");
	scanf("%d", &n);
	
	struct st_record stud[100];
	
	
	//Input students information
	for(i=0;i<n;i++)
	
	{
		printf("\nEnter information of student %d\n",i+1);
		printf("Name:");
		scanf("%s", &stud[i].name);
		printf("Roll Number:");
		scanf("%d", &stud[i].roll_no);
		
	}
	//Display Students Information
	printf("---------------------------------\n");
	printf("Name		Roll_Num\n");
	printf("---------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%-10s\t%-8d\n",stud[i].name,stud[i].roll_no);
		
	}
	printf("---------------------------------\n");
	//Free dynamically allocated memory

	return 0;
}
