#include <stdio.h>

int main() {
    double sayi1, sayi2;
    char hesapla;

    printf("Ilk sayiyi girin: ");
    scanf("%lf", &sayi1);
    
    printf("Ikinci sayiyi girin: ");
    scanf(" %lf", &sayi2);
       
    printf("Islem turunu secin (+, -, *, /): ");
    scanf(" %c", &hesapla);

    switch(hesapla) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", sayi1, sayi2, sayi1 + sayi2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", sayi1, sayi2, sayi1 - sayi2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", sayi1, sayi2, sayi1 * sayi2);
            break;
        case '/':
            if(sayi2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", sayi1, sayi2, sayi1 / sayi2);
            else
                printf("Hata! Sifira bolme hatasi\n");
            break;
        default:
            printf("Gecersiz islem turu!\n");
    }
    return 0;
}
