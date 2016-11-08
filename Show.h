#include<stdio.h>
#include<stdlib.h>
#include"Collction.h"
#include<string.h>
int ShowMenu()
{
	int k;
	printf("Select the operation that you want to(0-5)\n");
	printf("\t0:Read sorce\n");
	printf("\t1:Add Score\n");
	printf("\t2:Remove Score\n");
	printf("\t3:Find Score\n");
	printf("\t4:Show all students Score\n");
	printf("\t5:Write in file\n");
	scanf("%d", &k);
	return k;
}

int ShowSort()
{
	int k;
	printf("Select sort by\n");
	printf("1:StudentID");
	printf("2:Average grade");
	printf("3:Thacher frade");
	printf("4:Overall grade");
	scanf("%d", &k);
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
		case 0:
//			students = ReadToString();
			printf("功能尚未开放\n");
			break;
		case 1:
			Add(students, Accept());		
			break;
		case 2:
			printf("change you want remove index");
			int index;
			scanf("%d", &index);
			RemoveAt(students,index); 
			break;
		case 3:
			StudentToString(Finds(students));
			break;
		case 4:
			ShowAll(students);
			break;
		case 5:
//			DoSort(ShowSort());
			WritetoString(students);
			break;
	}
//	system("clear");
//	printf("clear");
}
