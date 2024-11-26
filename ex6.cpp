#include <stdio.h>
int main(){
	int num;
	for(num=1; num<=100; num++){
		if(num%3==0 && num%5!=0){
			printf("%d. fizz\n",num);
		}else if(num%3!=0 && num%5==0){
			printf("%d. buzz\n",num);
		}else if(num%3==0 && num%5==0){
			printf("%d. FizzBuzz\n",num);
		}else{
			printf("\n");
		}
	}
	
	return 0;
} 
