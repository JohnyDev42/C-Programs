int IsMatching(char *,char *);
int mystrstr(char *str,char *sub)
{
	int i=0;
	while(str[i])
	{
		if(str[i]==sub[0])
		{
			if(IsMatching(str+i,sub))
				return i;
		}
		
			i++;
	}
	return -1;
}
int IsMatching(char *str1,char *str2)
{
	printf("%s\t%s\n",str1,str2);
	int i=0;
	while(str2[i])
	{
	if(str1[i]!=str2[i])
		return 0;
	i++;
	}	
	return 1;
}
