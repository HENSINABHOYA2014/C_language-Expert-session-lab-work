#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter Value of a:");
	scanf("%d",&a);
	
	printf("Enter Value of b:");
	scanf("%d",&b);
	
    c=a;
    a=b;
    b=c;
	
	printf("a=%d,b=%d",a,b);
}
