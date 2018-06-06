/* Returns a Duplicate string of Original string */

#ifdef HAVE_CONFIG_H
#include<config.h>
#endif

#if defined _LIBC || defined STDC_HEADERS
 #include<stdlib.h>
 #include<string.h>
#else
 char *malloc();
 char *memcpy();
#endif

#undef __strdup
#undef strdup

#ifndef weak_alias
#define __strdup strdup
#endif

char * __strdup(const char* s)
{
	size_t len=strlen(s)+1;
	void *new=malloc(len);
	if(new==NULL)
		return NULL;
	return (char*)memcpy(new,s,len);
}

#ifdef lib_hidden_def
 libc_hidden_def(__strdup)
#endif
#ifdef weak_alias
	weak_alias(__strdup,strdup)
#endif
