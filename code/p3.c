// PROGRAM 3
// Write a program of DFA to accept strings ending with 00 .

#include<stdio.h>

void main(){
    char a[100];
    printf("Enter String:");
    scanf("%s",&a);
    char f='A';
    for(int i=0;a[i]!='\0';++i){
        switch(f){
            case 'A' : 
            if(a[i]=='0'){
                f='B';
            }else{
                f='A';
            }
            break;
            case 'B':
            if(a[i]=='0'){
                f='C';
            }else f='A';
            break;
            case 'C':
            if(a[i]=='0') f='C';
            else f='A';
            break; 
        }
    }
    if(f=='C') printf("accepted");
    else printf("not accepted");

}
