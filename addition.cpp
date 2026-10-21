#include <stdio.h>
int main (){
	int n1;
	int n2;
	
	printf("Enter first numbers: ");
	scanf("%d", &n1);
	printf("Enter second numbers: ");
	scanf("%d", &n2);
	
	int res = n1 + n2;
	printf("Addition of %d and %d is: %d",n1, n2, res);
	return 0;
	
}
