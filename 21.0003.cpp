#include<stdio.h>
int main(){
	char a[100];
	char b[100];
printf("hay nhap chuoi: ");
fgets(a,sizeof(a),stdin);

FILE *ptr;
ptr = fopen("bt02.txt ","w");
if(ptr == NULL){
	printf("k mo file ");
	return 1;
}
fprintf(ptr , "%s" ,a );
fclose(ptr);


ptr = fopen("bt02.txt" , "r");
if(ptr == NULL){
	printf("k mo file ");
	return 1;
}

fgets(b , sizeof(b),ptr );
printf("%s",b);
fclose(ptr);
	return 0;
}
