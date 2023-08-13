/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include<stdio.h>
int main(){
    int i;
    printf("Test case:\n");
    printf("Input Day:\n");
    scanf("%d",&i);
    printf("Output:\n%d days = %d seconds",i ,i * 24 * 60 * 60);
    return 0;
}
