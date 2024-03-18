//Practical no.05
#include<stdio.h>

struct student
{
	char name[50];
	int roll_no;
};
int main()
{
	int n, i;
	printf("Enter number of student's:");
	scanf("%d", &n);
	
	struct student *ptr;
	//Input students information
	for(i=0;i<n;i++)
	
	{
		printf("\nEnter information of student %d\n",i+1);
		printf("Name:");
		scanf("%s", &ptr->name);
		printf("Roll Number:");
		scanf("%d", &ptr->roll_no);
		ptr++;
	}
	//Display Students Information
	printf("---------------------------------\n");
	printf("Name		Roll_Num\n");
	printf("---------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%-10s\t%-8d\n",ptr->name,ptr->roll_no);
	}
	printf("---------------------------------\n");
	//Free dynamically allocated memory
	free(ptr);
	
	return 0;
}
