/***********************************************

*                                              *

*                TP_lib_suite                  *

*                                              *

************************************************

Auteurs : S. Moutault, Ag. Priou

Version : nov 2011

Fichier : TP_lib_suite.H

************************************************



/* voir descriptif dans le TD des th?mes pr?c?dents */



/*----------- loto ------------*/

void  initialiserTirage(void);

short tirerNumero(void);



/*----------- genetique ------------*/

char  tirerNucleotide(void);    



/*----------- lancer d? ------------*/

long int  JouerUnTour ( void ) ;  





/*----------- divers ------------*/



int estPremier(long nombre);



void faireUnTour(void);  



void afficherChiffre(short chiffre);



void afficherCompteARebours(short compteur);



double f(double x);
