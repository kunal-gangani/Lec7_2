#include<stdio.h>
void main(){
	int i;
	for(i=1;i<=5;i++){
		if(i==1 || i==3){
			printf("* * * *\n");
		}else if(i==2){
			printf("*       *\n");
		}else{
			printf("*\n");
		}
	}
}
