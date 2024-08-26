#include<stdio.h>

int main(){
int assignment_score, midExam_score,finalExam_score,final_score;

printf("Input Assignment Score: ");
scanf("%d", &assignment_score);

printf("Input Mid Exam Score: ");
scanf("%d", &midExam_score);

printf("Input Final Exam Score: ");
scanf("%d", &finalExam_score);

final_score = (0.2*assignment_score)+(0.3*midExam_score)+(0.5*finalExam_score);

printf("Final Score is %d",final_score);
}
