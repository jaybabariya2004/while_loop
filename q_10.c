#include<stdio.h>

int main(){
	
	int a,b = 1;
	
	printf("Enter a table no. : ");
	scanf("%d",&a);
	
	while(b <= 10){
		
		printf("%d X %d = %d\n",a,b,(a*b));
		b++;
	}
	
	return 0;
}
