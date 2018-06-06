/*This program shows reallocation of memory when needed*/
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int *marks=(int *)malloc(3*sizeof(int));//Initially 3*4bytes allocated...
	int mark,i,size=3,n=0;
	printf("Enter the marks(enter -1 to stop):\n");
	scanf("%d",&mark);
	while(mark!=-1)
	{
		if(n>=size)
		{
			size+=3;
			printf("Reallocating memory for 3 more integers...\n");
			marks=(int*)realloc(marks,size*sizeof(int));
			if(!marks)
			{
				printf("Insufficient Memory\n");
				exit(1);
			}
			else
				printf("Success...\n");
		}
		marks[n]=mark;
		scanf("%d",&mark);
		n++;
	}
	printf("The marks entered are\n");
	for(i=0;i<n;i++)
		printf("%5d",marks[i]);
	printf("\n");
}
