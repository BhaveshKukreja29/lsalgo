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

	
    for(i=0;i<k1;i++){               //This loop selects the minimum and maximum values to start the sorting process below.
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
		for(i=0;i<k1;i++){                   //swapping logic starts here
			if(a[i]==n){
				b[counter]=a[i];       //basically if you find the minimum at a[i] copy that in b[counter]
                for(j=i;j<k1-1;j=j+1){
                	a[j]=a[j+1];                        //this loop deletes the copied element from a[i] by shifting it's succeeding indexes one step behind
            	}
            	k1--;                                //to reduce to size of a[i] since we deleted an element
            	counter++;                           //points to the location for next element to be stored.
			}
		}                                   //swapping logic ends
        min = a[0];
        for(j=0;j<k1;j++){
			if(min>a[j]){                  //to select the new minimum value for next iteration
	            min = a[j];
			}
        }
        if(k1==1){                        //k1==1 means only one element remains, added this because the loop didn't consider the last remaining element.
            b[counter]=a[0];
        }

    }while(min!=max);

    printf("The Sorted Array is: \n");      
    for(i=0;i<k2;i++){                 //prints the array b
		printf("%d ", b[i]);
    }

}
