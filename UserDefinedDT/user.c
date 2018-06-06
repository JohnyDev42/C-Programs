#include<stdio.h>
#include "student.h"
void readStruct(STUDENT *);
int main()
{
	int i;
	STUDENT s[4];
//	printf("%d",Adhaar);
	readStruct(s);
	for(i=0;i<4;i++)
	{
		printf("ID:%d\nNAME:%s\nFATHER NAME:%s\nDOB:%d/%d/%d\nIDtype:",s[i].ID,s[i].name,s[i].fname,s[i].DOB.d,s[i].DOB.m,s[i].DOB.y);
		if(p==Adhaar)
			printf("%s",s[i].IDp.Adhaar);
		else
			if(p==DL)
				printf("%s",s[i].IDp.DL);
			else
				if(p==PAN)
					printf("%s",s[i].IDp.PAN);
				else
					if(p==VoterID)
						printf("%s\n",s[i].IDp.VoterID);
		printf("************\n");

	}


}
