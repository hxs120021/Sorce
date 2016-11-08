#include<stdio.h>
#include<stdlib.h>
//#include "Collction.h"
#include "Show.h"

int IsGo();
int main()
{
	Students *students = NewStudents();
	while(1)
	{
		DoThing(ShowMenu(), students);
		if(IsGo())
			break;
	}
	return 0;
}

int IsGo()
{
	
	printf("If you continue to press 1, launched by 2.");
	int perss;
	scanf("%d", &perss);
	if(perss == 1)
		return 0;
	else return 1;
}
