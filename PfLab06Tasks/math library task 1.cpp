#include<stdio.h>
#include<math.h>
int main(){
	int h,rad;
	float l; 
	printf("enter the highetof building  ");
	scanf("%d",&h);
	printf("enter the value of theta in (radian):");
	scanf("%d",&rad);
	l=h/tan(rad);
	printf("%.2f ",l);

	return 0;
}
