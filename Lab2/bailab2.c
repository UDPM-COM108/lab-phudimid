#include <stdio.h>
#include <math.h> // dung de tinh can bac 2

int main() {
    // ===== Bài 1 =====
    float a, b, c;
    printf("Bai 1: Thuc hanh tinh +- 2 so\n");
    printf("cre: Nguyen Van Phu (PS49269)\n");
    printf("Nhap so thu nhat de tinh tong hieu: ");
    scanf("%f", &a);
    printf("Nhap so thu hai de tinh tong hieu: ");
    scanf("%f", &b);

    float tong = a + b;
    float hieu = a - b;

    printf("Tong cua 2 so la: %.1f\n", tong);
    printf("Hieu cua 2 so la: %.1f\n\n", hieu);

    // ===== Bài 2 =====
    float dai, rong;
    printf("Bai 2: Tinh chu vi va dien tich hinh chu nhat.\n");
    printf("Nhap chieu dai hinh chu nhat (M): ");
    scanf("%f", &dai);
    printf("Nhap chieu rong hinh chu nhat (M): "); 
    scanf("%f", &rong);

    float chuvichunhat = 2 * (dai + rong);
    float dientichchunhat = dai * rong;
    printf("Chu vi hinh chu nhat la: %.2f M\n", chuvichunhat);
    printf("Dien tich hinh chu nhat la: %.2f M2\n\n", dientichchunhat);

    // ===== Bài 3 =====
    float bankinh;
    #define PI 3.14159265
    printf("Bai 3: Tinh chu vi va dien tich hinh tron\n");
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);

    float chuvihinhtron = 2 * PI * bankinh;
    float dientichhinhtron = PI * bankinh * bankinh;
    printf("Chu vi hinh tron la: %.2f\n", chuvihinhtron);
    printf("Dien tich hinh tron la: %.2f\n\n", dientichhinhtron);

    // ===== Bài 4 =====
    float toan, ly, hoa;
    printf("Bai 4: Tinh diem trung binh Toan, Ly, Hoa\n");
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    float diemtb = (toan * 3 + ly * 2 + hoa) / 6;
    printf("Diem trung binh cua ban la: %.1f\n\n", diemtb);

    // ===== Bài 5 =====
    float a5, b5, c5;
    float chu_vi, dien_tich;

    printf("Bai 5: Tinh tam giac vuong\n");
    printf("Nhap do dai canh goc vuong thu nhat a: ");
    scanf("%f", &a5);
    printf("Nhap do dai canh goc vuong thu hai b: ");
    scanf("%f", &b5);

    c5 = sqrt(a5 * a5 + b5 * b5);
    chu_vi = a5 + b5 + c5;
    dien_tich = (a5 * b5) / 2;

    printf("\n--- Ket Qua ---\n");
    printf("Canh huyen = %.2f\n", c5);
    printf("Chu vi tam giac = %.2f\n", chu_vi);
    printf("Dien tich tam giac = %.2f\n", dien_tich);

    return 0;
}
