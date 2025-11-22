#include <stdio.h> 
#include <string.h> 
#define MAX 100 
void main() 
 { 
 char description[MAX]; 
 char keyword[100]; 
 int len; 
 printf("Enter the course description:\n"); 
 scanf("%s",description); 
 len = strlen(description); 
 printf("Enter the keyword to search: "); 
 scanf("%s", keyword); 
 if (strstr(description, keyword) ) 
 printf("Keyword '%s' found in the %s course description.\n", 
keyword,description); 
 else 
 printf("Keyword '%s' not found in the %s course description.\n,keyword.description);
 }
