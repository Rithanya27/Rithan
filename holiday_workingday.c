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
case 'sunday': printf("true”);
break;
case 'monday': printf("false”);
break;
case 'tuesday':  printf("false”);
break;
case 'wednesday': printf("false”);
break;
case 'thursday': printf("false”);
break;
case 'friday': printf("false”);
break;
case 'saturday': printf("true”);
break;

}
getch(); 
}
