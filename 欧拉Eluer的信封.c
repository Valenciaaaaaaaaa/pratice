#include<stdio.h>
int Euler(int n){
	int result;
	if(n==1) return 0;
	if(n==2) return 1;
	result=(n-1)*(Euler(n-1)+Euler(n-2));
	return result;
} 
int main(){
	int n,result;
	scanf("%d",&n);
	result=Euler(n);
	printf("%d",result);
	return 0;
}
