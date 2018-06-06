//#include<math.h>
#define PRIME(n) {int i,j,p=0;\
	for(i=1;i<n;i++){\
		p=0;\
	for(j=2;j<=i/2;j++)\
	if(i%j==0)\
	p=1;\
	if(p==0)\
	printf("%5d",i);}}
#define ISPRIME(n) int i,p=0;for(i=2;i<=n/2;i++)\
			 if(n%i==0){\
				p=1;\
				 break;\
			 }\
			if(p==1)\
				printf("Not Prime\n");\
			else printf("isPrime\n");
				
