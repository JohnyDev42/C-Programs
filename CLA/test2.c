#define P1(msg) printf(msg)
#define P2(msg) printf("msg")
#define P3(msg) printf(#msg)
int main()
{
	P1("Hello");
	P2("Welcom");
	P3("kernel");
}
