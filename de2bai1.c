/*
 * de2bai1.c
 * Generated: 2025-12-30
 */

#include <stdio.h>

int main(void) {
    // Tao boi Nguyen Nguyen Tools: De 2, Bai 1
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    double x[n], y[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%lf%lf", &x[i], &y[i]) != 2) {
            return 0;
        }
    }

    int dem_gpt3 = 0;
    for (int i = 0; i < n; i++) if (x[i] < 0 && y[i] < 0) dem_gpt3++;

    double max_d2 = x[0] * x[0] + y[0] * y[0];
    for (int i = 1; i < n; i++) {
        double d2 = x[i] * x[i] + y[i] * y[i];
        if (d2 > max_d2) max_d2 = d2;
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        double d2 = x[i] * x[i] + y[i] * y[i];
        if (d2 == max_d2) k++;
    }

    int dem_cat_truc_hoanh = 0;
    for (int i = 0; i < n - 1; i++) {
        double y1 = y[i], y2 = y[i + 1];
        if ((y1 == 0 && y2 == 0)) continue;
        if (y1 * y2 < 0 || y1 == 0 || y2 == 0) dem_cat_truc_hoanh++;
    }

    printf("%d\n", dem_gpt3);
    printf("%d\n", k);
    for (int i = 0; i < n; i++) {
        double d2 = x[i] * x[i] + y[i] * y[i];
        if (d2 == max_d2) printf("%g %g\n", x[i], y[i]);
    }
    printf("%d\n", dem_cat_truc_hoanh);

    return 0;
}
    