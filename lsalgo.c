#include <stdio.h>


int main()
{
	int a[8] = {5, -3, 0, 7, -2, 0, 6, -4};
	int i = 0;
	int n;
	int temp;
	int counter = 0;
	int k = 8;
	int max = a[0];
	int min = a[0];


	for(i=0;i<k;i++){
		if(min>a[i]){
			min = a[i];
		}

		if(max<a[i]){
			max = a[i];
		}
	}
	
	for(n=min;n<=max;n++){
		for(i=0;i<k;i++){
			if(a[i]==n){
				temp = a[i];
				a[i]=a[counter];
				a[counter]=temp;
				counter++;
			}
		}
	}
	printf("The Sorted Array is: \n");
	for(i=0;i<k;i++){
		printf("%d  ", a[i]);
	}


	return 0;
}
