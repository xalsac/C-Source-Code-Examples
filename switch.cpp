// SWITCH �RNE��
#include<stdio.h>
#include<locale.h>
int main(){
//T�rk�e karakter
setlocale(LC_ALL, "Turkish"); 
//D�rt ��lem Hesap Makinesi �rne�i
int islem;
int a;
int b;
printf("D�rt ��lem Hesap Makinesi\n\n1.Toplama ��lemi\n2.��karma ��lemi\n3.�arpma ��lemi\n4.B�lme ��lemi\n\n��lem Numaras� Girin:");
scanf("%d", &islem);
switch(islem) {
	case 1:
		printf("1. Say�: ");
		scanf("%d", &a);
		printf("2. Say�: ");
		scanf("%d", &b);
		printf("\nSonu�: %d", a+b);
		break;
	case 2:
		printf("1. Say�: ");
		scanf("%d", &a);
		printf("2. Say�: ");
		scanf("%d", &b);
		printf("\nSonu�: %d", a-b);
		break;
	case 3:
		printf("1. Say�: ");
		scanf("%d", &a);
		printf("2. Say�: ");
		scanf("%d", &b);
		printf("\nSonu�: %d", a*b);
		break;
	case 4:
		printf("1. Say�: ");
		scanf("%d", &a);
		printf("2. Say�: ");
		scanf("%d", &b);
		printf("\nSonu�: %d", a/b);
		break;
	default:
		printf("��lem tan�mlanamad�.");
		break;
		}


return 0;
}
