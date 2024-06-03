#include <stdio.h>

void main()
{
    int i;
    int a[10] = {10,5,6,7,8,9,1,2,3,4};
    int min;
    int k1 = 10;
    int counter = 0;
    int temp=0;
    int min_ind = 0;


    do{
        min = a[counter];
        min_ind = counter;

         for (i = counter; i < k1; i++)
            {
		        if (min>a[i])
                {
			        min = a[i];
                    min_ind = i;
		        }
        	}

		temp = a[counter];
        a[counter] = a[min_ind];
        a[min_ind] = temp;

        counter++;

    }while(counter < k1);

    printf("\n\n");
    printf("The Sorted Array is: \n");
	for (i=0;i<k1;i++)
    {
		printf("%d ", a[i]);
	}
    
}
