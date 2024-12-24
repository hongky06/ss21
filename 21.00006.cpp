#include<stdio.h>
int main(){
	char a[100] = "Do Hong Ky";
	char b[100];
	char c[100];
FILE *ptr01;
ptr01 = fopen("bt01.txt" , "w");
if(ptr01 == NULL){
	printf("khong khai bao file ");
	return 1;	
}
fputs(a,ptr01);
fclose(ptr01);

ptr01 = fopen("bt01.txt" , "r");
if(ptr01 == NULL){
	printf("khong khai bao file ");
	return 1;	
}
fgets(b , sizeof(b) , ptr01 );
printf("ben tron ptr01 la: %s", b);
fclose(ptr01);


// xong 1 
FILE *ptr02;
ptr02 = fopen("ptr02","w");
if(ptr02 == NULL){
	printf("khong khai bao file ");
	return 1;
}
fputs(b , ptr02 );
fclose(ptr02);

ptr02 = fopen("ptr02","r");
if(ptr02 == NULL){
	printf("khong khai bao file ");
	return 1;	
}
fgets(c , sizeof(c), ptr02);
printf("\nben trong ptr02 la: %s", c);
	return 0;
}
