#include<stdio.h>
int main(){
	char chuoi[50]= "hihihaha";
	char xuat[50];
	
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	if(fptr == NULL){
		printf("mo file thanh cong");
		return 1;
	}
	fputs(chuoi,fptr);
	
	fclose(fptr);
	printf("luu du lieu thanh cong");
	
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL){
		printf("mo file thanh cong");
		return 1;
	}
	fgets(xuat,sizeof(xuat),fptr);
	printf("\nki tu dau tien trong file la: %c", xuat[0]);
	fclose(fptr);
	return 0;
}
