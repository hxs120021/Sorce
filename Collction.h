#include<stdio.h>
#include<stdlib.h>
//#include"NeedType.h"
#include"Collicton.h"
//#include"NeedType.h"
#include<string.h>

Student *NewStudent()
{
	Student *student = (Student*)malloc(sizeof(Student));
	student -> information = (Information*)malloc(sizeof(Information));
	student -> sorce = (Sorce*)malloc(sizeof(Sorce));
	student -> next = NULL;
	student -> previous = NULL;
	return student;
}

Students *NewStudents()
{
	Students *students = (Students*)malloc(sizeof(Students));
	students -> head = NewStudent();
	students -> last = students -> head;
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

float Overall(float n1, float n2, float n3, float n4)
{
	float n = n1*0.6 + n2*0.1 + n3*0.1 + n4*0.1;
	return n;
}
/*
void FuZhi(char a1[], char a2[])
{
	int al1 = strlen(a2), i = 0;
	for(i = 0; i< al1; i++)
		a1[i] = a2[i];
	a1[i] = '\0';
}
*/
void WritetoString(Students *students)
{
	FILE *fp;
	fp = fopen("students.txt", "w");
	Student *work = students -> head -> next;
	while(work != NULL)
	{
		fprintf(fp,"%s %s %s %d %f %f %f %f %f %f %f %f", work ->information-> ID, work ->information-> name, work ->information-> phone, work ->information-> sex, work->sorce -> c, work ->sorce-> match, work ->sorce-> english, work ->sorce-> avg, work ->sorce-> mutual, work ->sorce-> deyu, work ->sorce-> tcSor, work ->sorce-> overSor);
		work = work -> next;
	}
	fclose(fp);
	return;
}

Students *ReadToString()
{
	FILE *fp;
	fp = fopen("student.txt", "rb+");
	Students *students = NewStudents();
	while(!feof(fp))
	{
		Student *work = NewStudent();
		fscanf(fp,"%s %s %s %d %f %f %f %f %f %f %f %f", work -> information -> ID, work -> information -> name, work -> information -> phone, work -> information -> sex, &work -> sorce -> c, &work -> sorce -> match, &work -> sorce -> english, &work -> sorce -> avg, &work -> sorce -> mutual, &work -> sorce -> deyu, &work ->sorce-> tcSor, &work -> sorce -> overSor );
		Add(students, work);
	}
	return students;
}

Student *Accept()
{
	
	Student *student = NewStudent();
	printf("Enter the following information in the order:\n");
	printf("Enter ID:\n");
	char _ID[1024];
	scanf("%s", _ID);
//	gets(ID);
	printf("Enter name:\n");
	char _name[1024];
	scanf("%s", _name);
//	gets(name);
	printf("Enter sex(man or woman):\n");
	Sex _sex;
	char s[1024];
	scanf("%s", s);
	if(strcmp(s, "man") == 0)
		_sex = man;
	else if(strcmp(s, "woman") == 0)
		_sex = woman;
	else
	{
		printf("we think you are a man\n");
		_sex = man;
	}
	printf("Enter you famlay address:\n");
	char _faddr[1024];
	scanf("%s", _faddr);
	printf("Tell me you phone number:\n");
	char _phone[1024];
	scanf("%s", _phone);
	printf("Enter you c Sorce:\n");
	float _c;
	scanf("%f", &_c);
	printf("Enter you math Sorce:\n");
	float _match;
	scanf("%f", &_match);
	printf("Enter you english sorce:\n");
	float _english;
	scanf("%f",&_english);
	printf("Enter you mutual sorce\n");
	float _mutual;
	scanf("%f", &_mutual);
	printf("Enter you deyu sorce:\n");
	float _deyu;
	scanf("%f", &_deyu);
	printf("Enter you teacher Sorce:\n");
	float _tcSor;
	scanf("%f", &_tcSor);
//	gets(tcSor);
	printf("hello\n");
	student ->information -> ID = _ID;
	printf("hello1\n");
	student ->information -> name = _name;
	student ->information -> sex = _sex;
	student ->information -> faddr = _faddr;
	printf("%s\n", student -> information -> faddr);
	student ->information -> phone = _phone;
	student ->sorce -> c = _c;
	student ->sorce -> match = _match;
	student ->sorce -> deyu = _deyu;
	student ->sorce -> tcSor = _tcSor;
	student ->sorce -> english = _english;
	student ->sorce -> mutual = _mutual;
	float _n = Average(_c, _match, _english);
	student ->sorce -> avg = _n;
	student ->sorce -> overSor = Overall(_n, _mutual, _deyu, _tcSor);
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
	return r;
}

Student *Finds(Students *students)
{
	printf("Your ID:\n");
	char _ID[1024];
	scanf("%s", _ID);
	return FindS(students, _ID);
}

void ShowAll(Students *students)
{
	Student *work = students -> head -> next;
	while(work != NULL)
	{
//		printf("%s\n", work -> information -> faddr);
		StudentToString(work);
		work = work -> next;
	}
}
