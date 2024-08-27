#include<stdio.h>

void menu(){
	int opsi;
	printf("Silahkan Pilih Menu...\n");
	printf("1.Masukkan Data Server\n");
	printf("2.Masukkan Data Person\n");
	printf("3.Masukkan Izin Masuk ke Dalam Server\n");
	printf("4.Report Akses Server\n");
	printf(">> ");
	scanf("%d", &opsi);
}

int main(){
	menu();
	return 0;
}
