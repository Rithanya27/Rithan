#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char str[20],tmp;
     int c;
     clrscr();
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\n\nOriginal String     : %s",str);
     for(c=0;c<strlen(str);c=c+2){
     tmp = str[c];
     str[c] = str[c+1];
     str[c+1] = tmp;
     }
     printf("\nAfter Swap String      : %s",str);
     getch();
}
