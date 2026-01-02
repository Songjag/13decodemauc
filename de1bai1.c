/*
 * de1bai1.c
 * Generated: 2025-12-30
 */

#include <stdio.h>
#include <math.h>
int main(void) {
    int n;
    scanf("%d",&n);
    float x[n],y[n];
    for (int i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    double tong = 0;
    for (int i = 0; i < n - 1; i++) {
        double dx = x[i+1] - x[i];
        double dy = y[i+1] - y[i];
        tong += sqrt(dx*dx + dy*dy);
    }
    printf("Do dai duong gap khuc: %.2f\n", tong);

    double R;
    scanf("%lf", &R);
    int dem = 0;

    for (int i = 0; i < n; i++) {
        double d2 = pow(x[i],2) + pow(y[i],2);
        if (d2 < R*R) {
            dem++;
            printf("Diem trong duong tron: (%.2f, %.2f)\n", x[i], y[i]);
        }
    }
    printf("So diem nam trong: %d\n", dem);
    double Rmin2 = 0;
    for (int i = 0; i < n; i++) {
        double d2 = pow(x[i],2) + pow(y[i],2);
        if (d2 > Rmin2) Rmin2 = d2;
    }
    double Rmin = sqrt(Rmin2);
    printf("Ban kinh nho nhat chua tat ca diem: %.2f\n", Rmin);

    return 0;
}
