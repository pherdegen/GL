//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#define Seuil 50

int main(void)
{
	unsigned char bin[10] = {5, 15, 25, 35, 45, 55, 65, 75, 85, 95};
	int i;
	
	for(i=0; i<10; i++)
	{
		if (bin[i]<Seuil)
		{
			bin[i]=0;
		}
		else
		{
			bin[i]=1;
		} 
	}return 0;
}
