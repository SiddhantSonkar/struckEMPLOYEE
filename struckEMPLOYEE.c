#include<stdio.h>

struct employee
{
	char name[10];
	int year,id;
	float salary;
	char gender[10];	
};

int main()
{
	struct employee x;
	int i;
	for(i=0;i<=10;i++)	
  {		
	printf("Enter name - ");
	scanf("%s",&x[i].name);
	printf("Entered name is ""%s",x[i].name);
	
	printf("\n\nEnter year - ");              
	scanf("%d",&x[i].year);
	printf("Entered year is ""%d",x[i].year);
	
	printf("\n\nEnter salary - ");
	scanf("%f",&x[i].salary);
	printf("Entered salary is ""%f",x[i].salary);
	
	printf("\n\nEnter gender - ");
	scanf("%s",&x[i].gender);
	printf("Entered gender is ""%s",x[i].gender);	
  }
	
	return 0;
	

	
}


	
	
	
	
	
	
	
	
	
	
	

