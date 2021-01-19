// PROGRAM 10
// Write a program to find ε (epsilon) closure of all states.

#include<stdio.h>
#include<conio.h>

int main(){

    int state_count=0,symbol_count=0;
    printf("Enter no States:");
    scanf("%d",&state_count);
    printf("Enter Symbol Count:");
    scanf("%d",&symbol_count);
    char tran_table[100][10],symbols[10];
    printf("Enter Symbols:\n");
    for(int i=1;i<=symbol_count;++i){
        scanf(" %c",&symbols[i]);
    }

    for(int i=0;i<state_count;++i){
        printf("Enter State:");
        scanf(" %c",&tran_table[i][0]);
        for(int j=1;j<=symbol_count;++j){
            printf("Enter Transition on symbol %c:",symbols[j]);
            scanf(" %c",&tran_table[i][j]);
        }
        printf("Enter Transition on Epsilon:(enter - if not any):");
        scanf(" %c",&tran_table[i][symbol_count+1]);
    }


    for(int i=0;i<state_count;++i){
        printf("Epsilon Closure of %c:%c,",tran_table[i][0],tran_table[i][0]);
        if(tran_table[i][symbol_count+1]=='-') continue;
        else {
            char t = tran_table[i][symbol_count+1];
            printf("%c,",t);
            for(int j=0;j<state_count;++j){
                if(tran_table[j][0]==t){
                    if(tran_table[j][symbol_count+1]=='-') break;
                    else{
                        t=tran_table[j][symbol_count+1];
                        printf("%c,",t);
                        j=-1;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
