#include<stdio.h>
int main (){
    int days;
    printf("enter  a month ( 1 - 12) :");
    scanf("%d",&days);

    switch (days)
    {
    case 1 :printf(" JANUARY : DAYS 31\n");
        break;
    case 2 :printf(" FEBUARY : DAYS 28\n");
        break;
    case 3 :printf(" MARCH : DAYS 31\n");
        break;
    case 4 :printf(" APRIL : DAYS 30\n");
        break;
    case 5 :printf(" MAY : DAYS 31\n");
        break;
    case 6 :printf(" JUNE : DAYS 30\n");
        break;
    case 7 :printf(" JULY : DAYS 31\n");
        break;
    case 8 :printf(" AUGUST : DAYS 31\n");
        break;
    case 9 :printf(" SEPTEMBER : DAYS 30\n");
        break;
    case 10 :printf("OCTOBER  : DAYS 31\n");
        break;
    case 11:printf(" NOVEMBER  : DAYS 30\n");
        break;
    case 12:printf(" DECEMBER : DAYS 31\n");
        break;
    
    default: printf(" not a valid !");
        break;
    }
}
