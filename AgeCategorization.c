#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculate_age(int birth_year, int birth_month, int birth_day) {
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);

    int age = current_time.tm_year  - birth_year;
    
    return age;
}

int main() {
    FILE *file = fopen("birthdate.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int day, month, year;
    int a=0,b=0,c=0,d=0,e=0;
    while (fscanf(file, "%d/%d/%d", &day, &month, &year) != EOF) {
        int age = calculate_age(year, month, day);
        year = year +1900;
        printf("Date: %02d/%02d/%04d - Age: %d years\n", day, month, year, age);
        if(age>51){
        	a++;
		}else if(age>=44 || age<=51){
			b++;
		}else if(age>=36 || age<=43){
			c++;
		}else if(age>=28 || age<=35){
			d++;
		}else{
			e++;
		}
	}
	printf("Above 51 : %d\n", a);
	printf("Between 44-51 : %d\n", b);
	printf("Between 36-43 : %d\n", c);
	printf("Between 28-35 : %d\n", d);
	printf("Below 28 : %d\n", e);
		
		

    fclose(file);
    return 0;
}

