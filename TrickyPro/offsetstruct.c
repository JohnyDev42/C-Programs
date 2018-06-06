/*In other words, the offsetof macro is returning the relative locations(offsets) of integer variable a, integer array b and character variable c in the structure abc.

How it works:
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
The macro type casts a literal value 0 into a pointer of the input TYPE. This makes the compiler behave as if there was an instance of a TYPE variable at address 0. That makes finding the offsets of individual member as simple as dereferencing their addresses, given the base address of the structure is 0. You see an additional typecasting to (size_t) as the code is made portable on all architectures.

This is super useful when implementing linked lists in a radically different way than most of us are used to. Essentially you can think of a linked list node as two hands (named prev and next), which can sit in a structure, and connect that structure as a part of the linked list. It makes the design scalable as it decouples your payload data from the linked list pointers. Thus, you can modify the structure definition and include as many linked list nodes as required. */



#include <stdio.h>
    #include <stdlib.h>
    #define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
     
struct abc {
	        int a;
		int b[4];
		char c;
				    
} abc_inst;
     
int main()
{
	printf("%lu %lu %lu\n", offsetof(struct abc, a),offsetof(struct abc, b),offsetof(struct abc, c));
	   return 0;		    
}
