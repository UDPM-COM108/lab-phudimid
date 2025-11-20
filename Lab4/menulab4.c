#include <stdio.h>
#include <math.h>

int main() {
    int luachon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Doi so thap phan sang nhi phan\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luachon);

        switch(luachoni) {
            case 1: {
                int max, min;
                float tong = 0, biendem = 0, trungbinh = 0;
                printf("Nhap min: ");
                scanf("%d", &min);
                printf("Nhap max: ");
                scanf("%d", &max);

                int i = min;
                while (i <= max) {
                    if (i % 2 == 0) {
                        tong += i;
                        biendem++;
                    }
                    i++;
                }

                if (biendem == 0) {
                    printf("Khong co so chia het cho 2 trong khoang\n");
                } else {
                    trungbinh = tong / biendem;
                    printf("Trung binh cong = %.2f\n", trungbinh);
                }
                break;
            }

            case 2: {
                int x;
                int z = 1;
                printf("Nhap x: ");
                scanf("%d", &x);

                if (x <= 1) {
                    z = 0;
                } else {
                    for (int i = 2; i <= sqrt(x); i++) {
                        if (x % i == 0) {
                            z = 0;
                            break;
                        }
                    }
                }

                if (z == 1) {
                    printf("%d la so nguyen to\n", x);
                } else {
                    printf("%d khong phai la so nguyen to\n", x);
                }
                break;
            }

            case 3: {
                int x;
                int LaSoChinhPhuong = 0;
                printf("Nhap x: ");
                scanf("%d", &x);

                if (x >= 0) {
                    for (int i = 0; i * i <= x; i++) {
                        if (i * i == x) {
                            LaSoChinhPhuong = 1;
                            break;
                        }
                    }
                }

                if (LaSoChinhPhuong == 1) {
                    printf("%d la so chinh phuong\n", x);
                } else {
                    printf("%d khong phai so chinh phuong\n", x);
                }
                break;
            }

            case 4: {
                int n, i = 0;
                int binary[32];
                int y = 0;

                printf("Nhap so thap phan: ");
                scanf("%d", &n);

                if (n < 0) {
                    y = 1;
                    n = -n;
                }

                if (n == 0) {
                    printf("So nhi phan: 0\n");
                    break;
                }

                while (n > 0) {
                    binary[i] = n % 2;
                    n = n / 2;
                    i++;
                }

                printf("So nhi phan: ");
                if (y) printf("-");

                for (int j = i - 1; j >= 0; j--) {
                    printf("%d", binary[j]);
                }
                printf("\n");
                break;
            }

            case 5:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
        }
    } while (luachon != 5);

    return 0;
}
