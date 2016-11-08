#include<stdio.h>
#include<stdlib.h>
//#include "Collction.h"
#include "Show.h"
void main()
{
	Students *students = NewStudents();
	while(1)
	{
		DoThing(ShwoMenu(), students);
		if(IsGo())
			break;
	}
}

void IsGo()
{
	
	printf("If you continue to press 1, launched by 2.");
	int perss;
	scanf("%d", &perss);
	if(perss == 1)
		return 1;
	else return 0;
}
