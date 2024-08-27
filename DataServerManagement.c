#include<stdio.h>

void switchMenu(int opsi){
	switch(opsi){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}	
}

void menu(){
	int opsi=0;
	
	do{
		printf("Silahkan Pilih Menu...\n");
		printf("1.Masukkan Data Server\n");
		printf("2.Masukkan Data Person\n");
		printf("3.Masukkan Izin Masuk ke Dalam Server\n");
		printf("4.Report Akses Server\n");
		printf("Exit\n");
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
