#include <stdio.h>
int main(){
int marks [5],total=0,gradepoints=0, average=0;
char grade[4];
printf("Enter marks for 5 subjects\n");
for(int i=0;i<5;i++)
{
   printf("subjects%d",i+1);
   scanf("%d",&marks[i]);
   total+=marks[i]; /* code */
}
average=total/5;
if (average>=91 && average<=100)
{
 strcpy(grade,"O");
 gradepoints=10;   /* code */
}else if(average>=81 && average<=90){
    strcpy(grade,"A+");
    gradepoints=9;


}
else if(average>=71 && average<=80){
    strcpy(grade,"A");
    gradepoints=8;
   

}
else if(average>=61 && average<=70){
    strcpy(grade,"B+");
    gradepoints=7;
   

}
else if(average>=56 && average<=60){
    strcpy(grade,"B");
    gradepoints=6;
   

}
else if(average>=51&& average<=55){
    strcpy(grade,"C");
    gradepoints=5;
   

}else {
    strcpy(grade,"F");
    gradepoints=0;
   

}
printf("\ntotal marks are:%d\n",total);
printf("average marks %d\n",average);
printf("grade marks are %s\n",grade);
printf("gradepoint are:%d\n",gradepoints);


}

