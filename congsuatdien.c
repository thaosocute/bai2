#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, t;
	printf("cong su dung ");
	scanf("%f", &a);
	printf("gio su dung ");
	scanf("%f", &t);
	float p=(a/3600000);
	#define gia 3500;
	float tien=((p/t)*720)*gia;
	printf("cong suat chuyen sang kWh la %.3f \ntong thiet hai mot thang la %.0f dong", p, tien);
	return 0;
}
