
//  Copyright (c) 2018 Antoine Tran Tan  //

#include <ansi_c.h>
#include "my_header.h"

#define SEUIL  50
#define SEUILB -100
#define SEUILH 200

int main(void)

{
	unsigned char i, i2, i3, i4, i5;
	unsigned char bin[10]= {5, 15, 125, 55, 65, 95, 235, 1, 200, 155};
	int sat[10]={rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150};
	int dist[10]= {1,5,15,25,35,45,55,65,75};
	int distance;
	int A[5]= {1,4,3,8,6};
	int B[5]= { 2,5,1,6,7};
	int mirroir[4]={3,4,5,1};	


// 1

for(i=0; i<10; i++)
{
	if (bin[i]<SEUIL)
	{
		bin[i]=0;
	}
	else
	{
	bin[i]=1;
	} 
}

// 2

for(i2=0; i2<10; i2++)
{
	if(sat[i2]>SEUILH)
	{
	sat[i2]=SEUILH;
	}
	
	else if(sat[i2]<SEUILB)
	{
		sat[i2]=SEUILB;
	}
}

// 3

for(i3=9;i3>0;i3--)
{
	distance = abs( (dist[i3]-dist[i3-1]));
	dist[i3] = distance;			  
}

// 4

for(i4=0;i4<5;i4++)
{
	B[i4]=A[4-i4];
}

// 5

for(i5=0;i5<2;i5++)
{
	mirroir[i5+2]=mirroir[-i5+2-1];
}
	return 0; 
}
