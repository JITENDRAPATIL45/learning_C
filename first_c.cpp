#include <stdio.h>
int main (){
	int n1;
	int n2;
	
	printf("Enter two numbers: ");
	scanf("%d , %d", &n1, &n2);
	
	int res = n1 + n2;
	
	printf("Addition: %d", res);
	return 0;
	
}
