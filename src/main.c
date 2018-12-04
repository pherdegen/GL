//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
#include <math.h>



int main(void)
{
    char nom[100]; 
	char age[100]; 
	char prenom[100];
	
	printf("Tapez le nom : ");
	scanf ("%s", nom);
	printf("Tapez le prenom : ");
	scanf ("%s", prenom);
	printf("Tapez l'age : ");
	scanf ("%s", age);
	
	printf("Je m'appelle %s %s et j'ai %s ans.", nom, prenom, age);

}
