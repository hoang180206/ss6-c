#include <stdio.h>

int main(){
	int pass1 = 123, pass2;
	
	do{
		printf("nhap mat khau (3 so): ");
		scanf("%d",&pass2);
		
		if(pass1 != pass2){
			printf("mat khau khong dung\n");
		}
	}while(pass1 != pass2);
	
	printf("mat khau chinh xac");
	
	return 0;
}
