#include <stdio.h>

volatile int count=0;
void child();
void parent();

int main(){
	switch(fork()){
		case -1:
			printf("fork error!\n");
			break;
		case 0:
			child();
			break;
		default:
			parent();
	}
}

void child(){
	while(count<=5){
		count++;
		printf("child:%d\n",count);
	}
}

void parent(){
	while (count<=5){
		count++;
		printf("parent:%d\n",count);
	}
}
