#include <stdio.h>

int main(){
	int arr[]={50,60,70,80};
	for(int i=0;i<4;i++){
		int total=1990,j=0;
		while(total%40!=0){
			if(total<40)
				break;
			total-=arr[i];
			j++;
	
		}
		if(total>40){
		int m= total/40+j;
		printf("%d",m);
		break;
		}
	}
}
