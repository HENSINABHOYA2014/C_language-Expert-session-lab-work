#include<stdio.h>
main(){
	int x,y,ans;
	
	printf("Enter Value of x:");
	scanf("%d",&x);
	
	printf("Enter Value of y:");
	scanf("%d",&y);
	
    ans = (x*x*x) + (y*y*y) + 3*x*y*(x+y);

	
	printf("ans=%d",ans);
}


