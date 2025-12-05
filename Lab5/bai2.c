#include <stdio.h>
//bai 2 tinh nam nhuan
int checkYear(int year){
    int flag = 0;
    if(year % 400 == 0)
        flag = 1;
    if(year % 4 == 0 && year % 100 != 0)
        flag = 1;
    return flag;
}

int main(){
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if(checkYear(year) == 1)
        printf("%d la nam nhuan\n", year);
    else
        printf("%d khong la nam nhuan\n", year);

    return 0;
}