#include<stdio.h>
void main(){
	int i,j,s;
	for(i=5;i>=1;i--){
		for(s=i;s<5;s++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j%2);
		}
		printf("\n");
	}
}
