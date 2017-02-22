// Giriþ-Çýkýþ Fonksiyon Kütüphanesi
#include<stdio.h>
#include<locale.h>
// Sabit deðer tanýmlamasý
#define PI 3.14

int main(){
	
//Türkçe karakter
setlocale(LC_ALL, "Turkish"); 
//Kürenin yarýçap hesaplanmasý giriþ-çýkýþ örneði
	int yaricap;
	float hacim;
	
	printf("Kürenin yarý çapýný giriniz:");
	scanf("%d", &yaricap);
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kürenin Hacmi %f 'dir",hacim );
	return 0;
}
