#include <stdio.h>
int main (){
	int i ,j,k,n,sum =0,sumpr,avgper; 
	sttruct si{
	char name[50];
	int marks[10];
	float per ;
	 };
	 struct si s[20];
	 printf("enetr no. of students: \n");
	 scanf("%d",&n);
	 for (i=0;i<=n-1;i++){
	 	printf("enetr name : \n");
	 	fflush(stdin);
	 	gets(s[i].name);
	 }
	 for (j=0;j<=n-1;j++){
	 	printf("enetr marks \n");
	 	scanf("%d",&s[i].marks[j]);
	 	sum = sum+s[i].marks[j];
	 }
	 
	 s[i].per = sum/5.0;
	 sumpr = sumpr +s[i].per;
	 avgper = sumpr/n;
	 for(i=0;i<=n-1;i++){
	 	if (s[i].per > avgper){
	 		puts(s[i].name);
	 		printf("%f",s[i].per);
		 }
	 }
	 return 0;
}
