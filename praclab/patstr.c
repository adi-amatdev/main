#include<stdio.h>
#include<stdlib.h>
int len( char *ptr)
{
	int i=0 ;
	while (ptr[i] !='\0')
	{
		i++;
	}
	return i;
}
void pat_search( char *txt , char *pat){
	int i,j;
	int m = len(txt);
	int n = len(pat);
	for (i =0 ; i <= (m-n); i++){
		for(j=0; j< n; j++)
				if (txt[i+j] != pat[j])
					break;
			
		if (j == n )
				printf("Pattern string found at pos %d \n",i+1);
			
	}
}
int main (){
	char txt[50], pat[50];
	printf("Enter the main string : \n");
	fgets(txt , 50 , stdin);
	printf("Enter the pattern to be found : \n");
	fgets(pat , 50 , stdin);
	pat_search(txt , pat);
	return 0;
}