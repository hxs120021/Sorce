#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef enum
{
	man = 1,woman = 2	
}Sex;

typedef enum
{
	_ID, _avg, _tcs, _over
}SortMode;

typedef struct 
{
	char *ID;
	char *name;
	Sex sex;
	char *faddr;
	char *phone;
}Information;

typedef struct
{
	float c;
	float match;
	float english;
	float avg;
	float mutual;//互评
	float deyu;
	float tcSor;
	float overSor;
}Sorce;

typedef struct S
{
	Information *information;
	Sorce *sorce;
	struct S *next;
	struct S *previous;
}Student;

typedef struct
{
	Student *head;
	Student *last;
}Students

char *SexToString(Sex sex)
{
	char *_sex = NULL;
	switch(sex)
	{
		case man:
			_sex = "man";
			break;
		case woman
			_sex = "woman";
			break;
	}
	return _sex;
}

char *FloatToString(float f)
{
	char *str;
	sprintf(str, "%f", f);
	return str;
}

char *StudentToString(Student *student)
{
	char *str = " ";
	strcat(str, student -> information -> ID);
	strcat(str, "\t");
	strcat(str, student -> information -> name);
	strcat(str, "\t");
	strcat(str, SexToString(student -> information -> sex));
	strcat(str, "\t");
	strcat(str, student -> information -> faddr);
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> c));	
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> math));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> english));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> avg));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> mutual));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> deyu));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> tcSor));
	strcat(str, "\t");
	strcat(str, FloatToString(student -> sorce -> overSor));
	strcat(str, "\n");
	return str;
}


