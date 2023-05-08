#include<stdio.h>

int main(){
	
	int n,a = 1,f = 1;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(a<=n){
		
		f = f * a;
		a++;
	}
	
	printf("Factorial = %d",f);
	
	return 0;
}
