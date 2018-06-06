int msizeof(void * x)
{
	int p,c=0;
	p=x|0x01;
	while(p)
	{
		p=p<<1;
		c++;
	}
	c=c/8;
	return c;
}
