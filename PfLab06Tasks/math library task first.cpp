#include<stdio.h>
#include<math.h>
int main(){
	int h,rad;
	float l; 
	printf("enter the intensity of quake   ");
	scanf("%d",&h);
	printf("enter the standarad value:");
	scanf("%d",&rad);
	l=log10(h/rad);
	printf("%.2f ",l);

	return 0;
}
