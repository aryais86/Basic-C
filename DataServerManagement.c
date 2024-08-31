#include<stdio.h>
#include <string.h>

struct Server{
	char ip[100];
	char dns[100];
};

struct Person{
	char nama[100];
	int KTP;
};

struct Report{
	char nama[100];
	char ip[100];
	long long tanggalMasuk;
	long long tanggalKeluar;
};

void menu();

//void loadPerson(){
//	struct Person person[1000];
////	printf("\n\n");
//	
//	FILE *file;
//	file = fopen("person_db.csv","r");
//	
//	if(file == NULL){
//		printf("File does not exist.\n");
//		menu();
//	}
//	
////	char text[256];
////	int person_count;
////	
////	while(fgets(text, sizeof(text), file)){
////		sscanf(text,"%99[^\n],%d",person[person_count].nama, &person[person_count].KTP);
////		person_count++;
////	}
////	char buffer[256];
////	fgets(buffer, sizeof(buffer),file);
//	
//	char line[256];
//    while (fgets(line, sizeof(line), file)) {
//        printf("%s", line); // Print each line as it is read
//    }
//	
//	fclose(file);
//}

void writeInputServer(struct Server server){
	FILE *file;
	file = fopen("server_db.csv","a");
	int i;
	
	if(file == NULL){
		printf("File does not exist.\n");
		menu();
	}
	
	fprintf(file,"%-20s%-20s\n", server.ip, server.dns);
	fclose(file);
	 
	printf("Server Successfuly added\n");
}

void writeInputPerson(struct Person person){
	FILE *file;
	file = fopen("person_db.csv","a");
	
	if(file == NULL){
		printf("File does not exist.\n");
		menu();
	}
	
	fprintf(file,"%s,%d\n", person.nama, person.KTP);
	fclose(file);
	 
	printf("Person Successfuly added\n");
}

//int getKTP(struct Report report){
//	FILE *file;
//	file = fopen("person_db.csv","r");
//	
//	if(file == NULL){
//		printf("File does not Exist!\n");
//		return 1;
//	}
//	
//	 char buffer[150];
//    fgets(buffer, sizeof(buffer), file);
//	
//	struct Person person;
//    while (fscanf(file, "%[^\n],%d", person.nama, &person.KTP) == 2) {
//        if (strcmp(report.nama, person.nama) == 0) {
//            fclose(file); 
//            return person.KTP;
//        }
//    }
//
//    fclose(file);
//    return 1;
//}

//202408311800

//void writeInputPerson(struct Report report){
//	FILE *file;
//	file = fopen("person_db.csv","a");
//	int i;
//	
//	if(file == NULL){
//		printf("File does not exist.\n");
//		menu();
//	}
//	char KTP = "0";
//	char DNS = "0";
//	
//	fprintf(file,"%-20d%-20s%-20s%-20s%-20\n", KTP, report.nama, report.ip, DNS, report.tanggalMasuk,report.tanggalKeluar);
//	fclose(file);
//	 
//	printf("Server Successfuly added\n");
//}


void inputDataServer(struct Server server){
	printf("Masukkan Data Server!\n");
	getchar();
	printf("Masukkan IP Address : ");
	scanf("%[^\n]", server.ip);
	getchar();
	printf("Masukkan Nama DNS Server : ");
	scanf("%[^\n]", server.dns);
	getchar();
	
//	printf("IP : %s\n", server.ip);
//	printf("DNS : %s\n", server.dns);
	
	writeInputServer(server);
	
	printf("\n\n");
	menu();
}

void inputDataPerson(struct Person person){
	printf("Masukkan Data Person!\n");
	getchar();
	printf("Masukkan Nama : ");
	scanf("%[^\n]", person.nama);
	getchar();	
	printf("Masukkan ID KTP : ");
	scanf("%d", &person.KTP);
	
//	printf("ID KTP : %d\n", person.KTP);
//	printf("Nama : %s\n", person.nama);
	
	writeInputPerson(person);
	
	printf("\n\n");
	menu();
}

void izinMasukServer(struct Report report){
	struct Person person;
	printf("Masukkan Izin Masuk ke Dalam Server\n");
	getchar();
	printf("Masukkan Nama : ");
	scanf("%[^\n]", report.nama);
	getchar();
	printf("Masukkan IP Address : ");
	scanf("%[^\n]", report.ip);
	getchar();
	printf("Masukkan Tanggal Masuk(yyyyMMddhhmm) : ");
	scanf("%lld", &report.tanggalMasuk);
	printf("Masukkan Tanggal Keluar(yyyyMMddhhmm) : ");
	scanf("%lld", &report.tanggalKeluar);
	
	printf("Nama: %s\n", report.nama);
	printf("IP: %s\n", report.ip);
	printf("Tanggal Masuk: %lld\n", report.tanggalMasuk);
	printf("Tanggal Keluar: %lld\n", report.tanggalKeluar);
	
//	int a = getKTP(report);
//	char* b =getDNS(report);
//	
//	printf("KTP %s :%d\n", report.nama, a);
//	printf("DNS %s :%s\n", report.ip, b);
	
	printf("\n\n");
	menu();
}

void reportAksesServer(){
	printf("Report Akses Server\n");
	printf("\n\n");
	menu();
}

void switchMenu(int opsi){
	struct Server server;
	struct Person person;
	struct Report report;
	
	switch(opsi){
		case 1:
			inputDataServer(server);
			break;
		case 2:
			inputDataPerson(person);
			break;
		case 3:
			izinMasukServer(report);
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
		printf("5.Keluar\n");
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
//	loadPerson();
	menu();
	return 0;
}
