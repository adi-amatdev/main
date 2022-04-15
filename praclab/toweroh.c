#include <stdio.h>
#include <stdlib.h>
int toh( int disk, char source , char destination , char aux)
{
	static int moves = 0;
	if ( disk == 0)
		return moves ;
	toh(disk-1, source , aux , destination);
	printf("moving %d disk from rod %c to rod %c \n", disk, source , destination );
	moves++;
	toh(disk-1, aux , destination, source);
}
int main (){
	int disk;
	printf("Enter number of disks : \n");
	scanf ("%d", &disk);
	printf("The number of moves required is : %d \n", toh (disk, 'A', 'C', 'B'));
	return 0;
}