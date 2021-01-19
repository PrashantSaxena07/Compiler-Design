// PROGRAM 1
// Write a program of a DFA, which accepts the odd num of zeros.

#include<stdio.h>
#include<string.h>
void main(){
char s[100];
printf("Enter a string\n");
scanf("%s",s);
int c=0;
for(int i=0;i<strlen(s);i++){
    if(s[i]=='0')
    c++;
}

if(c%2!=0)
printf("accepted\n");
else
    printf("Not accepted");
}
