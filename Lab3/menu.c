#include <stdio.h>
#include <math.h>

void bai1() {
    // BAI 1 : TINH DIEM TRUNG BINH
    double dtb;
    printf("\n=== BAI 1: XEP LOAI DIEM TRUNG BINH ===\n");
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);

    if (dtb >= 9)
        printf("Xuat sac\n");
    else if (dtb >= 8)
        printf("Gioi\n");
    else if (dtb >= 7)
        printf("Kha\n");
    else if (dtb >= 5)
        printf("Trung binh\n");
    else
        printf("Yeu!\n");
}

void bai2() {
    // BAI 2 : GIAI PHUONG TRINH BAC 1
    float a, b;
    printf("\n=== BAI 2: GIAI PHUONG TRINH BAC 1 ===\n");

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh co vo so nghiem.\n");
        else
            printf("Phuong trinh vo nghiem.\n");
    } else {
        printf("Nghiem x = %.2f\n", -b / a);
    }
}

void bai3() {
    // BAI 3 : GIAI PHUONG TRINH BAC 2
    float a, b, c;
    float delta, x1, x2;

    printf("\n=== BAI 3: GIAI PHUONG TRINH BAC 2 ===\n");

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        
        if (b == 0)
            printf("Vo nghiem.\n");
        else
            printf("x = %f\n", -c / b);
    } else {
        delta = b*b - 4*a*c;

        if (delta < 0)
            printf("Vo nghiem.\n");
        else if (delta == 0)
            printf("Nghiem kep x = %f\n", -b / (2*a));
        else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n===== MENU CUA PHU =====\n");
        printf("1. Xep loai diem trung binh\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang (0-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong dung ! Vui long chon lai.\n");
        }

    } while (choice != 0);

    return 0;
}
