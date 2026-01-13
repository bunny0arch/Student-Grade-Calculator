#include<stdio.h>
#include<string.h>
struct student
	{
		int math,pc,ec,beee,ms,total;
		char roll[16], name[40], result[30];
		float avg, percent;
	};
int main()
{
	int i,n,j;
	struct student s[10];
	printf("Enter the Number of Students: ");
	scanf("%d",&n);
	for(i=0,j=1;i<n;i++,j++)
		{
			printf("\nEnter the Roll Number of Student %d: ",j);
			scanf("%s",&s[i].roll);
			getchar();
			printf("\nEnter the Name of Student %d: ",j);
			gets(s[i].name);
			printf("\nEnter Marks in MATHS(100) for %s: ",s[i].name);
			scanf("%d",&s[i].math);
			printf("\nEnter Marks in EC(100) for %s: ",s[i].name);
			scanf("%d",&s[i].ec);
			printf("\nEnter Marks in PIC(100) for %s: ",s[i].name);
			scanf("%d",&s[i].pc);
			printf("\nEnter Marks in BEEE(100) for %s: ",s[i].name);
			scanf("%d",&s[i].beee);
			printf("\nEnter Marks in MS(100) for %s: ",s[i].name);
			scanf("%d",&s[i].ms);
			printf("\n\n\n");
			s[i].total=s[i].math+s[i].ec+s[i].pc+s[i].beee+s[i].ms;
			s[i].avg=s[i].total/5.0;
			s[i].percent=(s[i].total/500.0)*100;
			if(s[i].percent>=75)
				{
					strcpy(s[i].result,"PASS with DISTINCTION");
				}
			else if(s[i].percent>=50&&s[i].percent<75)
				{
					strcpy(s[i].result,"PASS with MERIT");
				}
			else if(s[i].percent>=40&&s[i].percent<50)
				{
					strcpy(s[i].result,"PASS");
				}
			else
				{
					strcpy(s[i].result,"FAIL");
				}
		}
	printf("Calculating the Total Marks, Average Marks, Percentage and Result of Each Student");
	printf("\n\n");
	for(i=0;i<n;i++)
		{
			printf("\nTotal Marks of %s is %d",s[i].name,s[i].total);
			printf("\nAverage Marks of %s is %.1f",s[i].name,s[i].avg);
			printf("\nPercentage of %s is %.1f",s[i].name,s[i].percent);
			printf("\n%s's Result: %s",s[i].name,s[i].result);
			printf("\n\n\n");
		}
}
