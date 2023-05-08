#include<stdio.h>

int main(){
	
	int n,a = 1,sum = 0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(a<=n){
		
		sum += a;
		a++;
	}
	
	printf("Sum = %d",sum);
	
	return 0;
}
