#include<stdio.h>
#include<stdlib.h>
#include"Collction.h"
#include<string.h>
int ShowMenu()
{
	int k;
	printf("Select the operation that you want to(1-?)\n");
	scanf("%d", &k);
	printf("\t1:Add Score\n");
	printf("\t2:Remove Score\n");
	printf("\t3:Find Score\n");
	printf("\t4:Show all students Score\n");
	printf("\t5:Sorting\n");
	return k;
}

int ShowSort()
{
	int k;
	printf("Select sort by\n");
	scanf("%d", &k);
	printf("1:StudentID")
	printf("2:Average grade")
	printf("3:Thacher frade")
	printf("4:Overall grade")
	return k;
}

void DoSort(int k)
{
	switch(k)
	{
		case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void DoThing(int k, Students *students)
{
//	Students *students = NewStudents();
	switch(k)
	{
		case 1:
			Add(students, Accept());		
			break;
		case 2:
			
			break;
		case 3:
			printf("%s\n", StudentToString(Finds(students)));
			break;
		case 4:
			ShowAll(students);
			break;
		case 5:
			DoSort(ShowSort());
			break;
		default:
			system("cls");
	}
}
