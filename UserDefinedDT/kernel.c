#include<stdio.h>
#include "student.h"
void readStruct(STUDENT *s)
{
	int i;
	printf("Enter the ID,name,fname,DOB,IDtype\n");
	for(i=0;i<4;i++)
	{
		s[i].ID=i+1;
		scanf("%s%s%d%d%d",s[i].name,s[i].fname,&s[i].DOB.d,&s[i].DOB.m,&s[i].DOB.y);
		printf("Enter the IDproof type:1.Adhaar 2.DL 3.PAN 4.VoterID\n");
		scanf("%d",&p);
		if(p==Adhaar)
			scanf("%s",s[i].IDp.Adhaar);
		else
			if(p==DL)
				scanf("%s",s[i].IDp.DL);
			else
				if(p==PAN)
					scanf("%s",s[i].IDp.PAN);
				else
					if(p==VoterID)
						scanf("%s",s[i].IDp.VoterID);

	}
}
