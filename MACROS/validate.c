#define IsValid(a,b,c) {\
	if(c%100!=0&&c%4==0||c%400==0)\
		leap=1;\
	if(a<=0||a>31||b>12||b<1||c<1000||c>3000)\
		i=0;\
	else\
		if(b==4||b==6||b==9||b==11)\
		{\
			if(a==31)\
			i=0;\
		}\
		else\
			if(b==2&&(a==30||a==31))\
				i=0;\
			else\
				if(b==2&&leap==0)\
				{\
					if(a==29)\
						i=0;\
				}\
}
		

		
