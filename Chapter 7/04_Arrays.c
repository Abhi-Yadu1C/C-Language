#include <stdio.h>

int main(){
     int i, marks[5];
    printf("Enter marks of 5 students\n");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("Marks of student %d is %d\n",i+1,marks[i]);
    }
    
    return 0;
}