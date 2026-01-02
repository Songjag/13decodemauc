/*
 * de1bai2.c
 * Generated: 2025-12-30
 */

#include <stdio.h>

int main(void) {
    // Tao boi Nguyen Nguyen Tools: De 1, Bai 2
    int m,n;
    printf("Nhap m va n:");
    
    scanf("%d%d",&m,&n);
    if (m<0||n<0){
        return 0;
    }
    int a[m][n];
    printf("Nhap ma tran mxn:");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int tongcotle=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j+=2){
            tongcotle+=a[i][j];
        }
    }
    int maxmatran=a[0][0],dem=0,tongchan=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]>maxmatran) {
                maxmatran=a[i][j];
            }
            if (a[i][j]>10 && a[i][j]%2==0){
                dem++;
                tongchan+=a[i][j];
            }
        }
    }
    printf("Tong phan tu cua cac cot le la:%d\,n",tongcotle);
    if (dem>0){
        printf("Trung binh cong cua cac phan tu chan >10 la:%.2f\n",(float)tongchan/dem);
    }
    else{
        printf("Khong co so chan nao >10\n");

    }
    printf("Phan tu lon nhat cua ma tran la:%d\n",maxmatran);
    return 0;
}
