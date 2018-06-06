#ifndef MYSTRCPY
#define MYSTRCPY mystrcpy
#endif
char * mystrcpy( char *dst,const char *src)
{
	return mymemcpy(dst,src,mystrlen(src)+1);
}
