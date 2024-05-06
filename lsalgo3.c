#include <stdio.h>

void main()
{
    int i;
    int j;
    int n;
    int a[10] = {10,5,6,7,8,9,1,2,3,4};
    int max = a[0];
    int min = a[0];
    int k1 = 10;
    int counter = 0;
    int temp=0;


	//the for loop below selects the minimum and maximum value of the array
    for(i=0;i<k1;i++)
    {
	    if(min>a[i])
        {
	        min = a[i];
		}

		if(max<a[i])
        {
			max = a[i];
		}
	}

    do{
        n=min;										//starting the sort with minimum value
		for (i=0;i<k1;i++)							
    	{
			if (a[i]==n)
            {
		   		temp = a[counter];					//swapping the minimum at it's designated place
				a[counter]=a[i];
        		a[i] = temp;
                                		
				counter++;
			}
		}
        min = a[counter];							// a[counter] to avoid having the same minimum value again and going in an infinite loop
        for (j=counter;j<k1;j++)					//j = counter to ignore the already sorted part of array
		{
	        if (min>a[j])
			{
				min = a[j];							// new minimum value found
		    }
        }
    }while(min != max);


    printf("The Sorted Array is: \n");
    for (i=0;i<k1;i++)
    {
		printf("%d ", a[i]);
    }
}
