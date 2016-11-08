#include<stdio.h>
#include<stdlib.h>
//#include"NeedType.h"
#include"Collicton.h"
#include<string.h>
Students *NewStudents()
{
	Students *students = (Students*)malloc(sizeof(Students));
	students -> head = (Student*)malloc(sizeof(Student));
	sutdents -> last = student -> head;
	students -> head -> information = NULL;
	students -> head -> sorce = NULL;
	return students;
}

//void Add(Students *students, Student *studnet)
//{
//	student -> previous = students -> last;
//	students -> last -> next = student
//}

//Student *Remove(Student *student, int index)
//{
//	student -> 
//}

float Average(float n1, float n2, float n3)
{
	float n = n1 + n2 + n3;
	return n/3;
}

Student *Accept()
{
	printf("Enter the following information in the order:\n");
	printf("Enter ID:\n")
	char *ID;
	scanf("%s", ID);
	printf("Enter name:\n")
	char *name;
	scanf("%s", name);
	printf("Enter sex(man or woman):\n");
	Sex sex;
	char *s;
	scanf("%s", s);
	if(strcmp(s, "man") == 0)
		sex = man;
	else if(strcmp(s, "woman") == 0)
		sex = woman;
	else
	{
		prinf("we think you are a man\n");
		sex = man;
	}
	printf("Enter you famlay address:\n");
	char *faddr;
	scanf("%s", faddr);
	printf("Tell me you phone number:\n");
	char *phone;
	scanf("%s", phone);
	printf("Enter you c Sorce:\n");
	float c;
	scanf("%f", &c);
	printf("Enter you math Sorce:\n");
	float math;
	scanf("%f", &math);
	printf("Enter you english sorce:\n");
	float english;
	scanf("%f",&english);
	printf("Enter you mutual sorce\n");
	float mutual;
	scanf("%f", &mutual);
	printf("Enter you deyu sorce:\n");
	float deyu;
	scanf("%f", &deyu);
	printf("Enter you teacher Sorce:\n");
	float tcSor;
	scanf("%f", &tcSor);
	printf("Enter you overall Sorce:\n");
	float overSor;
	scanf("%f", &overSor);

	Student *student = (Student *)malloc(sizeof(Student));
	student ->information -> ID = ID;
	student ->information -> name = name;
	student ->information -> sex = sex;
	student ->information -> faddr = faddr;
	student ->information -> phone = phone;
	student ->sorce -> c = c;
	student ->sorce -> math = math;
	student ->sorce -> deyu = deyu;
	student ->sorce -> tcSor = tcSor;
	student ->sorce -> overSor = overSor;
	student ->sorce -> english = english;
	student ->sorce -> mutual = mutual;
	student ->sorce -> avg = Average(c, math, english);
	student -> next = NULL;
	student -> previous = NULL;
	return student;
}

Student *FindS(Students *students, char *XID)
{
	Student *work = students -> head -> next, *r;
	while(work != NULL)
	{
		if(strcmp(work -> information -> ID, XID) == 0)
		{			
			r = work;
			break;
		}
		work = work -> next;
	}
	return k;
}

Student *Finds(Students *students)
{
	printf("Your ID:\n");
	char *_ID;
	scanf("%s", _ID);
	return FindS(students, _ID);
}

void ShowAll(Students *students)
{
	Student *work = students -> head -> next;
	while(work != NULL)
	{
		printf("%s\n", StudentToString(Work));
	}
}
