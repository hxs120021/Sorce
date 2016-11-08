#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<FileIO.h>
typedef enum
{
	man = 1,woman = 2,	
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
}Students;

char *SexToString(Sex sex)
{
	char *_sex = NULL;
	switch(sex)
	{
		case man:
			_sex = "man";
			break;
		case woman:
			_sex = "woman";
			break;
	}
	return _sex;
}

char *FloatToString(float f)
{
	char *str = NULL;
	sprintf(str, "%f", f);
	return str;
}

void StudentToString(Student *student)
{
	
	printf("ID:%s\n", student -> information -> ID);
	printf("Name:%s\n", student -> information -> name);
	printf("phone:%s\n", student -> information -> phone);
	printf("sex:%s\n", SexToString(student -> information -> sex));
//	printf("family addr:%s\n", student -> information -> faddr);
	printf("c sorce:%f\n", student -> sorce -> c);	
	printf("match sorce:%f\n", student -> sorce -> match);
	printf("english soece:%f\n", student -> sorce -> english);
	printf("avg sorce:%f\n", student -> sorce -> avg);
	printf("mutual sorce:%f\n", student -> sorce -> mutual);
	printf("deyu sorce:%f\n",student -> sorce -> deyu);
	printf("teacher sorce:%f\n",student -> sorce -> tcSor);
	printf("overall sorce:%f\n",student -> sorce -> overSor);
}
