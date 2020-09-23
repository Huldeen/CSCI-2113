
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum {false, true} bool;
/*
README
https://fall20-2113.github.io/c/3/
3.1 the == operator does not properly test for equality between strings.
b. we are not able to use == for character array pointers as they will provide false positives.

*/
bool compare(char* str1, char* str2){
   printf("starting compare\n");
  bool samestring = true;
  int i = 0;
 while(samestring ==true){
   printf("%c",str1[i]);
   printf("%c",str2[i]);
   if(str1[i] =='\0' && str2[i]=='\0'){
     printf("\ncase1\n");
     break;
   }

   if(str1[i]!=str2[i]){
     printf("\ncase2\n");
     samestring=false;
     break;
   }
i++;
 }
 if(samestring==true){
   printf("The strings are the same\n");
  return(true);
 }
 else{
   printf("The strings are not the same\n");
   return(false);
 }
}
int main ()
{
 char c[4];
 char d[4];
 char e[4];
 char* str = "hello";
 char* str2 = "hello";
 char* str3 = "nope";
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
 
 printf("%s\n",str);
 printf("%s\n",str2);
 printf("%s\n",str3);
 compare(str,str2);
 compare(str2,str3);

 }