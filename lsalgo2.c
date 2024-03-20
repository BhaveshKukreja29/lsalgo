#include <stdio.h>

int main(){
    int a[100] = {2, -3, 0, 7, -2, 0, 6, -3};
    int b[100] = {0,0,0,0,0,0};
    int n;
    int k1 = 8;
    int k2 = k1;
    int max = a[0];
    int min = a[0];
    int i=0;
    int j=0;
    int counter=0;

    printf("Hello\n");

    for(i=0;i<k1;i++){
		if(min>a[i]){
			min = a[i];
		}

		if(max<a[i]){
			max = a[i];
		}
	}
    printf("min is %d and max is %d\n",min,max);
    
    
    do{
        n=min;
		for(i=0;i<k1;i++){
			if(a[i]==n){
				b[counter]=a[i];
                for(j=i;j<k1-1;j=j+1){
                    a[j]=a[j+1];
                }
                k1--;
                counter++;
			}
		}
        min = a[0];
        for(j=0;j<k1;j++){
		            if(min>a[j]){
			            min = a[j];
		            }
        	    }
        if(k1==1){
            b[counter]=a[0];
        }

    }while(min!=max);

    printf("The Sorted Array is: \n");
	for(i=0;i<k2;i++){
		printf("%d ", b[i]);
	}

}