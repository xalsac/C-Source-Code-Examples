// IF-ELSE �RNE��
#include<stdio.h>
#include<locale.h>
// Sabit de�er tan�mlamas�
#define PI 3.14

int main(){
	
//T�rk�e karakter
setlocale(LC_ALL, "Turkish"); 
//K�renin yar��ap hesaplanmas� giri�-��k�� �rne�i
	int yaricap;
	float hacim;
	
	printf("K�renin yar� �ap�n� giriniz:");
	scanf("%d", &yaricap);
	if (yaricap > 0) {
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("K�renin Hacmi %f 'dir",hacim );
	return 0;
	}
	else if (yaricap <= 0 ) printf("De�er s�f�r(0) ve s�f�rdan(0) k���k olamaz.");
	else printf("Tan�mlanamayan de�er");
}
