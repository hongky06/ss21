#include<stdio.h>
int main(){
	int dong;
	char str[100];
	printf("hay nhap so luong dong"); 
	scanf("%d",&dong);
	getchar();
	FILE *nhap;
	nhap = fopen("bt05.txt" , "w");
	if(nhap == NULL){
		printf("mo full ko thanh cong");
		return 1;
	}
	for(int i = 0 ;i < dong; i++ ){
		printf("%d : ",i+1);
		fgets(str,sizeof(str) , stdin);
		fputs(str,nhap);
	}
	fclose(nhap);
	
	nhap = fopen("bt05.txt" , "r");
	if(nhap == NULL){
		printf("mo full ko thanh cong");
		return 1;
	}
	printf("\nNoi dung file bt05.txt:\n");
    while (fgets(str, sizeof(str), nhap) != NULL) {
        printf("%s", str);
    }
	
	
	
	fclose(nhap);
	
	
	
	
	
	
	
	
	return 0;
}
