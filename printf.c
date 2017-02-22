// Printf kullanmak için çaðýrýlan kütüphane
#include<stdio.h>
#include<locale.h> 
int main() {
//Türkçe karakter
setlocale(LC_ALL, "Turkish"); 

// Veri Tipleri
// Standart metinler için 
printf("Hello World\n"); // \n alt satýr için kullanýlýr Farmat: %s

// char,  0-255 arasý deðer alabilir. Deðerler ascýý tablosunda bir deðere eþittir. Format: %c
char a1 = 66;
char a2 = 'B';
// Örnek Printf içinde Kullaným
printf("%c\n", a1);
printf("%d\n", a2);

// int, tam sayý deðerleri alýr 32 bit'tir. Format: %d
int b1 = 99;
// Örnek Printf içinde Kullaným
printf("%d\n", b1);

// short int, int ile aynýdýr tek farký 16 bit olmasýdýr. Format: %d
short int b2 = 9;
// Örnek Printf içinde Kullaným
printf("%d\n", b2);

// long int, int ile aynýdýr tek farký 64 bit olmasýdýr. Format: %
long int b3 = 999;
// Örnek Printf içinde Kullaným
printf("%d\n", b3);

// float, kesirli sayýlar için kullanýlýr. Format: %f
float c1 = 0.9;
// Örnek Printf içinde Kullaným
printf("%f\n", c1);

// double, kesirli sayýlar için kullanýlýr. Float'tan daha kapsamlýdýr. Format: %f
float c2 = 1.999;
// Örnek Printf içinde Kullaným
printf("%f\n", c2);
printf("%.4f\n", c2); //sýnýrlamalý

//Hepsini tek printf'te yazdýralým
printf("\n%s\n%c\n%d\n%d\n%d\n%d\n%f\n%f\n%.4f","Merhaba Dünya",a1,a2,b1,b2,b3,c1,c2,c2);
// Ekrandan kaybolmamasý için
getch();
return 0;
}
