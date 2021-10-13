#include <stdio.h>
int main()
{
    int i, j, size, count, freq[16], num[100];
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
       scanf("%d", &num[i]);
	for (i=0; i<size; i++)
        freq[i]=-1;
	for (i=0; i<size; i++)
	{
		count=1;
		for(j=i+1; j<size; j++)
		{
    		if(num[i]==num[j])
    		{
    			count++;
    			freq[j]=0;
    		}
    	}
    	if(freq[i]!=0)
    	    freq[i]=count;
	}
    printf("The frequency of array elements: \n");
 	for (i=0; i<size; i++)
  	{
  		if(freq[i]!=0)
  		    printf("%d: %d \n", num[i], freq[i]);
  	}

    return 0;
}
