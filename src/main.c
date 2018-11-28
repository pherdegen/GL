//  Copyright (c) 2018 Antoine Tran Tan	//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
    {
	 unsigned char combinaison1 [6]={32,5,23,2,13,22};
	 unsigned char combinaison2 [6]={1,32,13,17,12,5};  
	 unsigned char bon_numero=0;
	 unsigned char meilleurscore=0;
	 unsigned char score[100];	
	 int i1,i2,a,b,c;
	 
	 initialiserTirage();  
	 for(a=0;a<100;a++)
		{
		for(i2=0;i2<6;i2++)
		combinaison2[i2]=tirerNumero();
		
	 	for (i1=0;i1<6;i1++)
			{
			for(b=0;b<6;b++)
				{
				if(combinaison1[i1]==combinaison2[b])
				bon_numero++;
				}
				score[a]=bon_numero;
			}
		}
		meilleurscore=score[1];
		
		for(c=2;c<100;c++)
			{    
			if (meilleurscore>>score[c])

			meilleurscore=meilleurscore;

	     	else

			meilleurscore=score[c];
			}
		return 0;
	}

	 
