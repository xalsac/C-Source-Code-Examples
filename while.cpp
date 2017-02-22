// SWITCH ÖRNEÐÝ
#include<stdio.h>
#include<locale.h>
int main(){
//Türkçe karakter
setlocale(LC_ALL, "Turkish"); 
//Dört Ýþlem Hesap Makinesi Örneði
int islem;
int a;
int b;
int fac = 1;
printf("Dört Ýþlem Hesap Makinesi\n\n1.Toplama Ýþlemi\n2.Çýkarma Ýþlemi\n3.Çarpma Ýþlemi\n4.Bölme Ýþlemi\n5.Faktöriyel Hesaplama\n\nÝþlem Numarasý Girin:");
scanf("%d", &islem);
switch(islem) {
	case 1:
		printf("1. Sayý: ");
		scanf("%d", &a);
		printf("2. Sayý: ");
		scanf("%d", &b);
		printf("\nSonuç: %d", a+b);
		break;
	case 2:
		printf("1. Sayý: ");
		scanf("%d", &a);
		printf("2. Sayý: ");
		scanf("%d", &b);
		printf("\nSonuç: %d", a-b);
		break;
	case 3:
		printf("1. Sayý: ");
		scanf("%d", &a);
		printf("2. Sayý: ");
		scanf("%d", &b);
		printf("\nSonuç: %d", a*b);
		break;
	case 4:
		printf("1. Sayý: ");
		scanf("%d", &a);
		printf("2. Sayý: ");
		scanf("%d", &b);
		printf("\nSonuç: %d", a/b);
		break;
	case 5:
		printf("Faköriyel hesaplamak için deðer girin: ");
		scanf("%d", &a);
		while (a != 0) {
			fac = fac*a;
			a--;
		}
		printf("\nSonuç: %d",fac);
		break;
	default:
		printf("Ýþlem tanýmlanamadý.");
		break;
}


return 0;
}
