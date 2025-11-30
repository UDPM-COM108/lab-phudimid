#include <stdio.h>

void bai1_trung_binh_tong_chia_3() {
    printf("\n--- Bai 1: Trung binh tong cac so chia het cho 3 ---\n");
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return;
    }

    int mang[n];
    for(int i = 0; i < n; i++){
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(mang[i] % 3 == 0){
            tong += mang[i];
            count++;
        }
    }

    if(count == 0){
        printf("Khong co so chia het cho 3.\n");
    } else {
        float tb = tong / count;
        printf("Trung binh cac so chia het cho 3 = %.2f\n", tb);
    }
}

void bai2_min_max() {
    printf("\n--- Bai 2: Tim gia tri lon nhat va nho nhat ---\n");
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return;
    }

    int mang[n];
    printf("Nhap cac phan tu vao mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    int max = mang[0], min = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) max = mang[i];
        if (mang[i] < min) min = mang[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
}

void bai3_sap_xep_giam_dan() {
    printf("\n--- Bai 3: Sap xep giam dan ---\n");
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return;
    }

    int mang[n];
    printf("Nhap cac phan tu vao mang:\n");
    for(int i = 0; i < n; i++){
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(mang[i] < mang[j]){
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan:\n");
    for(int i = 0; i < n; i++){
        printf("Vi tri thu mang[%d] la: %d \n", i, mang[i]);
    }
}

void bai4_tinh_binh_phuong_ma_tran() {
    int n, m;
    int i, j;

    printf("\n--- Bai 4: Tinh Binh Phuong Cac Phan Tu Trong Mang 2 Chieu ---\n");
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("So hang va so cot phai lon hon 0.\n");
        return;
    }

    int mang[n][m]; 

    printf("\n--- Nhap Du Lieu cho Ma Tran %d x %d ---\n", n, m);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("\n--- Ma Tran Binh Phuong ---\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            int binh_phuong = mang[i][j] * mang[i][j];
            printf("%d\t", binh_phuong);
        }
        printf("\n"); 
    }
}

int main() {
    bai1_trung_binh_tong_chia_3();
    bai2_min_max(); 
    bai3_sap_xep_giam_dan();
    bai4_tinh_binh_phuong_ma_tran();
    
    return 0; 
}