#include<stdio.h>
int main (){
	char chuoi[100];
	char xuat[100];
	printf("hay nhap chuoi: ");
	fgets(chuoi , sizeof(chuoi), stdin );
								// mo file 
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
								// thao tac
	if (fptr == NULL){
		printf("loi mo file ");
		return 1;	
	}
		fprintf (fptr, "%s", &chuoi );
								//dong file
	fclose(fptr);
	printf("luu du lieu thanh cong");
	
	// xuat du lieu 
	fptr = fopen("bt01.txt","r");
	if (fptr == NULL){
		printf("loi mo file ");
		return 1;	
	}
	fscanf(fptr,"%s",&xuat);
	printf("\nchuoi vua luu la: %s",&xuat);
	return 0;
}
