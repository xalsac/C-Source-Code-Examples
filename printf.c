// Printf kullanmak i�in �a��r�lan k�t�phane
#include<stdio.h>
#include<locale.h> 
int main() {
//T�rk�e karakter
setlocale(LC_ALL, "Turkish"); 

// Veri Tipleri
// Standart metinler i�in 
printf("Hello World\n"); // \n alt sat�r i�in kullan�l�r Farmat: %s

// char,  0-255 aras� de�er alabilir. De�erler asc�� tablosunda bir de�ere e�ittir. Format: %c
char a1 = 66;
char a2 = 'B';
// �rnek Printf i�inde Kullan�m
printf("%c\n", a1);
printf("%d\n", a2);

// int, tam say� de�erleri al�r 32 bit'tir. Format: %d
int b1 = 99;
// �rnek Printf i�inde Kullan�m
printf("%d\n", b1);

// short int, int ile ayn�d�r tek fark� 16 bit olmas�d�r. Format: %d
short int b2 = 9;
// �rnek Printf i�inde Kullan�m
printf("%d\n", b2);

// long int, int ile ayn�d�r tek fark� 64 bit olmas�d�r. Format: %
long int b3 = 999;
// �rnek Printf i�inde Kullan�m
printf("%d\n", b3);

// float, kesirli say�lar i�in kullan�l�r. Format: %f
float c1 = 0.9;
// �rnek Printf i�inde Kullan�m
printf("%f\n", c1);

// double, kesirli say�lar i�in kullan�l�r. Float'tan daha kapsaml�d�r. Format: %f
float c2 = 1.999;
// �rnek Printf i�inde Kullan�m
printf("%f\n", c2);
printf("%.4f\n", c2); //s�n�rlamal�

//Hepsini tek printf'te yazd�ral�m
printf("\n%s\n%c\n%d\n%d\n%d\n%d\n%f\n%f\n%.4f","Merhaba D�nya",a1,a2,b1,b2,b3,c1,c2,c2);
// Ekrandan kaybolmamas� i�in
getch();
return 0;
}
