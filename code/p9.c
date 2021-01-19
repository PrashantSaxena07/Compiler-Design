// PROGRAM 9
// Write a program for counting number of lines, number of spaces, and number of digits in a given file.

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){

    FILE *f = fopen("a.txt","r");

    char z[1000],ch;
    int digitCount=0,lineCount=1,spaceCount=0;
    while ((ch = fgetc(f)) != EOF)
        {
            if (isdigit(ch))
                digitCount++;
            if (ch == '\n')
                lineCount++;
            if (isspace(ch)!=0 && ch!='\n'){
                spaceCount++;
            }
        }
    printf("digitCount=%d\nSpaceCount= %d\nLineCount= %d",digitCount,spaceCount,lineCount);
}
