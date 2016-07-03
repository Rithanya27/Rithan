#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
clrscr(); 
printf(“Enter the day of a week”);
scanf(“%c”,&ch);

switch(ch)
{
case 'sunday': printf("holiday”);
break;
case 'monday': printf("working day”);
break;
case 'tuesday': printf("working day”);
break;
case 'wednesday': printf("working day”);
break;
case 'thursday': printf("working day”);
break;
case 'friday': printf("working day”);
break;
case 'saturday': printf("holiday”);
break;

}
getch(); 
}
