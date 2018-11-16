//EX 43//

#include "my_header.h"
#include <stdlib.h>


int main(void)
{
    int S1=0, N1=3, N2=3, S3=0, A=0, B=1, S4=0, C=1, D=1;
    long unsigned int S2=0;

	while(N1<100)
    {
        S1 = S1+N1;
        N1 = N1+3;
	}

	while(N2<=9876)
    {
    	S2= S2+N2;
        N2= N2+3;
	}

	while(B<=12)
	{
		A= rand() %10 +1;
 		S3= S3+A;
		B=B+1;

	}

	while(D<=20)
	{
		if(C%3==0 || C%7==0)
		{
			S4= S4+C;

			D=D+1;
		}
		C = C+1
	}

	return 0;

}
