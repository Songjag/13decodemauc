/*
 * de2bai2.c
 * Generated: 2025-12-30
 */

#include <stdio.h>
#include <string.h>
struct Sach
{
    char masach[100];
    char tensach[100];
    char tentacgia[100];
    long long giatien;

};
int main(void) {
    // Tao boi Nguyen Nguyen Tools: De 2, Bai 2
    int n;
    scanf("%d",&n);
    getchar();
    struct Sach ds[n];
    for (int i=0;i<n;i++){
        fgets(ds[i].masach,sizeof(ds[i].masach),stdin);
        ds[i].masach[strcspn(ds[i].masach,"\n")]=0;
        fgets(ds[i].tensach,sizeof(ds[i].tensach),stdin);
        ds[i].tensach[strcspn(ds[i].tensach,"\n")]=0;
        fgets(ds[i].tentacgia,sizeof(ds[i].tentacgia),stdin);
        ds[i].tentacgia[strcspn(ds[i].tentacgia,"\n")]=0;
        scanf("%lld",&ds[i].giatien);
        getchar();
    }
    // for (int i=0;i<n;i++){
    //     printf("Ma sach: %s\n", ds[i].masach);
    //     printf("Ten sach: %s\n", ds[i].tensach);
    //     printf("Ten tac gia: %s\n", ds[i].tentacgia);
    //     printf("Gia tien: %lld\n", ds[i].giatien);
    //     printf("---------------------\n");
    // }
    char tg[100];
    fgets(tg,sizeof(tg),stdin);
    tg[strcspn(tg,"\n")]=0;
    int check=0;
    for (int i=0;i<n;i++)
    {
        if (strcmp(ds[i].tentacgia,tg)==0){
            printf("%s (Ma: %s, Gia: %lld)\n", ds[i].tensach, ds[i].masach, ds[i].giatien);
            check = 1;
        }
    }
    if (!check) printf("Khong co sach nao cua tac gia nay.\n");
    long long datnhat=ds[0].giatien;
    for (int i=1;i<n;i++){
        if(ds[i].giatien>datnhat) datnhat=ds[i].giatien;
    }
    for (int i=0;i<n;i++){
        if (ds[i].giatien==datnhat){
            printf("Cuon sach dat nhat la: %s voi gia tien %lld do tac gia: %s voi ma sach: %s\n",
       ds[i].tensach, ds[i].giatien, ds[i].tentacgia, ds[i].masach);

        }
    }
    int dem=0;
    for (int i=0;i<n;i++){
        if(ds[i].giatien>100) dem++;
    }
    printf("So sach co gia tien>100 la :%d",dem);
    return 0;
}
