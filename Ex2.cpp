#include<stdio.h>
int main() {
	int num1, num2, num3, num4, num5 ,evenum=0,oddnum=0;
	printf("nhap vao 5 so nguyen:\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1 %2 == 0){
	 evenum += num1; 
	} else{
		oddnum += num1; 
	}
	if(num2 %2 ==0){
		evenum += num2	 ;
	} else{
	oddnum += num2;	
	} 
	if(num3 %2==0){
		evenum += num3 ;
	} else{
			oddnum += num3 ;
	} 
	if(num4 %2==0){
		evenum += num4; 
	} else{
			oddnum += num4; 
	} 
	if(num5 %2==0){
		evenum+=num5; 
	} else{
		oddnum +=num5 ;
	} 

		printf("tong cac so le la: %d\n",oddnum);
	    printf("tong cac so chan la: %d\n",evenum);
	    return 0; 
} 
