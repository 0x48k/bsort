#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 20

int main(void){
	int arr[SIZE];
	srand(time(NULL));
	for(int i=0;i<SIZE||!printf("\n");printf("%d ",arr[i]=rand()%100),++i);
	for(int i=0;i<SIZE-1;++i){
		if(arr[i]>arr[i+1]){
			arr[i]+=arr[i+1]-(arr[i+1]=arr[i]);
			i&&(i-=2);
		}
	}
	for(int i=0;i<SIZE||!printf("\n");printf("%d ",arr[i]),i++);
	return(0);
}
