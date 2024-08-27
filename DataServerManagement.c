#include<stdio.h>

struct Server{
	char ip[100];
	char dns[100];
};

struct Person{
	int KTP;
	char nama[100];
};

struct Access{
	char name[100];
	char ip[100];
	
};

struct Report{
	char tanggalMasuk[12];
	char tanggalKeluar[12];
};

void menu();

void inputDataServer(){
	printf("Masukkan Data Server!\n");
	printf("\n\n");
	menu();
}

void inputDataPerson(){
	printf("Masukkan Data Person!\n");
	printf("\n\n");
	menu();
}

void izinMasukServer(){
	printf("\n\n");
	menu();
}

void reportAksesServer(){
	printf("Report Akses Server\n");
	printf("\n\n");
	menu();
}

void switchMenu(int opsi){
	switch(opsi){
		case 1:
			inputDataServer();
			break;
		case 2:
			inputDataPerson();
			break;
		case 3:
			izinMasukServer();
			break;
		case 4:
			reportAksesServer();
			break;
		case 5:
			printf("Terima Kasih\n");
			return;
	}	
}

void menu(){
	int opsi= 0;
	
	do{
		printf("Silahkan Pilih Menu...\n");
		printf("1.Masukkan Data Server\n");
		printf("2.Masukkan Data Person\n");
		printf("3.Masukkan Izin Masuk ke Dalam Server\n");
		printf("4.Report Akses Server\n");
		printf("5.Exit\n");
		printf(">> ");
		scanf("%d", &opsi);
		
		if(opsi<1 ||opsi>5){
			printf("\nPilihan tidak Valid!\n");
			printf("Silahkan Coba Lagi!\n\n");
		}else{
			printf("\n\n");
			switchMenu(opsi);
		}
	}while(opsi<1 ||opsi>5);
}

int main(){
	menu();
	return 0;
}
