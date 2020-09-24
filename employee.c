#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
    int id;
    char name[80];
    int salary;
}e[20];
int n;
void accept();
void display();
void search();
void sort();

int main()
{
    int ch;
    clrscr();
    printf("Number of records you want to enter? : ");
    scanf("%d", &n);
    accept();
   do
   {
   printf("Result Menu:\n");
   printf("Press 1 to accept all records:\n");
   printf("Press 2 to display all records:\n");
   printf("Press 3 to sort records:\n");
   printf("Press 4 to search records:\n");
   printf("Press 0 to Exit:\n");
   printf("\n Enter choice(0-4):");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:
		accept();
		break;


      case 2:
		display();
		break;

      case 3:
		sort();
		break;

      case 4:
		search();
		break;

   }
  }while(ch!=0);
return 0;
}

void accept()
{
    int i;
    for (i = 0; i < n; i++)
    {
	printf("\nEnter data for Record #%d", i + 1);

	printf("\nEnter id : ");
	scanf("%d", &e[i].id);
	fflush(stdin);
	printf("Enter name : ");
	gets(e[i].name);

	printf("Enter salary : ");
	scanf("%d", &e[i].salary);
    }
}

void display()
{
    int i;

    printf("\n\nid\tName\tSalary\n");
    for (i = 0; i < n; i++)
    {
	printf("%d\t%s\t%d\n", e[i].id, e[i].name, e[i].salary);
    }
}

void search()
{
    int i,number;
    printf("Enter the ID to be searched:");
    scanf("%d",&number);
    for (i = 0; i < n; i++)
    {
	if (e[i].id == number)
	{
	    printf("ID : %d\nName : %s\n salary : %d\n", e[i].id,
		e[i].name, e[i].salary);
	    return ;
	}
    }
    printf("Record not Found\n");
}

void sort()
{
int i,j,k;
struct employee t;
for(i=1;i<=n;i++)
{
for(j=0;j<n-i;j++)
{
if(e[j].salary>e[i].salary)
{
t=e[j];
e[j]=e[i];
e[i]=t;
}
}
}
printf("\nlist of employees after sorting:\n");
printf("\nNAME\tID\tSALARY\n");
printf("\n---------------------\n");
for(i=0;i<n;i++)
{
printf("%s\t%d\t%d\n",e[i].name,e[i].id,e[i].salary);
}
}
