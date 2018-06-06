
typedef struct DOB
{
	int d;
	int m;
	int y;
}DATE;
typedef union IDproof
{
	char Adhaar[12];
	char DL[10];
	char PAN[10];
	char VoterID[10];
}IDproof;
typedef enum IDtype
{
	Adhaar=1,DL,PAN,VoterID
}IDtype;
typedef struct STUDENT
{
	int ID;
	char name[10];
	char fname[10];
	DATE DOB;
	IDproof IDp;
	IDtype IDt;
}STUDENT;
int p;
//IDproof p1;
