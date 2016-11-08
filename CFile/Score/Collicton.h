#include <stdio.h>
#include <stdlib.h>
#include "NeedType.h"
//#include "Collicton.h"
typedef enum{
	first,last
}RemoveMode;

void Add(Students *students, Student *student);
void WritLine(Students *students);
void AddAt(Students *students, Student *student, int index);
int GetLength(Students *students);
Students *newStudents();

//Students *newStudents()
//{
//	Students *students = (Students*)malloc(sizeof(Students));
//	students->head = (Student*)malloc(sizeof(Student));
//	students->last = students->head;
//	students->head->next = NULL;
//    students->head->previous= NULL;
//	return students;
//}

void Add(Students *students, Student *student)
{
	
	student->previous = students->last;
	students->last->next = student;
	students->last = student;
	
	/*
	&(student -> previous) = &(students->last);
	&(students -> last -> next) = &(student);
	&(students -> last) = &student;
	*/
}

void WritLine(Students *students)
{
	Student *work = students -> head -> next;
	while(work != NULL)
	{
		printf("%s\n",work -> shift);
		work = work -> next;
	}
	return;
}

void AddAt(Students *students, Student *student, int index)
{
	if(index > GetLength(students) || index < 0)
	{
		printf("index is error, you need change index\n");
		return;
	}
	else if(index == GetLength(students))
		printf("change function. eg:AddAt\n");
	else
	{
		Student *work = students -> head -> next;
		int i;
		for(i = 0; i < index; i++)
			work = work -> next;
		Student *workp = work -> previous;
		student -> previous = workp;
		student -> next = work;
		work -> previous = student;
		work -> next = student;
	}

}

int GetLength(Students *students)
{
	int length = 0;
	Student *work = students -> head -> next;
	while(work != NULL)
	{
		length++;
		work = work -> next;
	}
	return length;
}

Student *Remove(Students *students, RemoveMode rmode)
{
	Student *work, *p;
	switch(rmode)
	{
		case first:
			p = students->head->next;
			work = p->next;
			students->head->next = work;
			work->previous = students -> head;
			p->next = NULL;
			p->previous = NULL;
			break;
		case last:
			p = students -> last;
			students -> last = p -> previous;
			students -> last -> next = NULL;
			p -> previous = NULL;
			break;
	}
	return p;
}

Student *RemoveAt(Students *students, int index)
{
//	index = index + 1;
	if(index > GetLength(students) || index < 0)
	{
		printf("index is error, you need change index,in RemoveAt\n");
		exit(0);
	}
	else if(index == GetLength(students))
		printf("change function. eg:Reomve.\n");
	else
	{
		Student *work = students -> head ->next, *p;
		int i;
		for(i = 0; i < index; i++)
			work = work -> next;
		Student *work1 = work -> previous;
		p = work;
		work = work -> next;
		work -> previous = work1;
		work1 -> next = work;
		p -> next = NULL;
		p -> previous = NULL;
		return p;
	}
}
