#include <stdio.h>


int main(){
	int a[6]={3,5,7,1,9,4};
	int i,n;
	int temp;
	int sortedIndex=0;
	int k = 7;
	
	for(n=1;n<=k;n++){
		if(n!=a[n-1]){
			for(i=sortedIndex;i<k;i++){
				if(a[i]==n){
					temp = a[i];
					a[i]=a[sortedIndex];
					a[sortedIndex]=temp;
					sortedIndex++;
					break;
					}
				}
			}
		else{
			sortedIndex++;
		    }
	}
	printf("The Sorted Array is: \n");
	for(i=0;i<k-1;i++){
		printf("%d  ", a[i]);
	}


	return 0;
}
