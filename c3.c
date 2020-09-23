
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
README
https://fall20-2113.github.io/c/3/
3.1 the == operator does not properly test for equality between strings.
b. we are not able to use == for character array pointers as they will provide false positives.

*/
int main ()
{
 char c[4];
 char d[4];
 char e[4];
 //char* str = "hello";
 //char* str2 = "hello";
 //char* str3 = "oy";
 int i;
 
 c[0]='o';
 c[1]='y';
 c[2]='!';
 c[3]='\0';
 
 d[0]='o';
 d[1]='y';
 d[2]='!';
 d[3]='\0';
 
 e[0]='o';
 e[1]='h';
 e[2]='?';
 e[3]='\0';
 
 if(*c==*d) {
	 printf("C and D are ==\n");
 }
if(*c==*e) {
	 printf("C and e are ==\n");
}

 }