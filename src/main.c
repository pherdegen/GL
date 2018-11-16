//Ex 45//

#include "my_header.h"
#include "TP_lib.h"
#include <stdio.h>



int main(void)

{

	short int score=0 ,i=0;

	printf("C'est ton tour");

	i= LancerDe();

	if(i==1)

	{

		printf("Tu perds la main");

	}

	else

	{
	    while(i!=1)
	{

		if(i==2||i==4||i==6)

		{
			score= score+i;
		}

		else if(i==3)

		{
			score= score * 3;
		}
		
		else if(i==5&&score>=2)
		{
			score= score-2;
		}
		
		else if(i==5&&score<2)
		{
			i=LancerDe();
		}
			i=LancerDe();
	}

	printf("Tu perds la main, ton score est %d",score);

	}

}
return 0;
