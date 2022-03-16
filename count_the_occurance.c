#include<stdio.h>
#include<conio.h>
#include<string.h>
void removeChar(char * str, char charToRemmove){
    int i, j;
    int len = strlen(str);
   
    
}

void main(){
	 char str[100],ch,c;
	 int i,j,len,count;
	 printf("enter the string : \n");
	 scanf("%[^\n]%c",str,&c);
	 printf("enter a char  want to count occurances : ");
	 scanf("%c",&ch);
	 //removeChar(str,ch);
	 len =strlen(str);
	 for(i=0;i<len;i++)
	 {
	     if(str[i] == ch)
	     {
	         count++;
	     }
	 }
	 printf("Total occurances of  '%c': %d", ch, count);
	 //getch();
 } 
