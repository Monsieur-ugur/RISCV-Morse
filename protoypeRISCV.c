#include <stdlib.h>
#include <stdio.h>

NB: je fais pose une limte dans le nombre de caractère asser basse pour limiter la place occupée par les tableaux dans la RAM, étant donner ue le code Morse occupe au minimum 5 fois plus de place 


void codeur(char *phrase, char *morse){
	printf("\n Ne contient que les caractères alphanumériques et les espaces\n");
	
	char lettre;
	for(i=0;i<50;i++){
		scanf("")
	}
	
}

void decodeur(char *phrase, char *morse){
	char lettre[5]; //taille maximale d'un caractère alphanumérique en morse

}
void main(){
	char phrase[50], morse[275];
	int boo; //booléen permettant de faire le choix 
	
	
	printf("Bienvenue dans le codeur/décodeur tapez C pour code et D pour décoder\n " );
	scanf("%d",&boo);
	printf("entrez votre message\n");
	
	
	if(boo==C){
		printf("entrez votre message à coder\n");
		scanf("%s",&phrase);
		codeur(&phrase, &morse);
		printf("\n message codé: \n %s", morse);
		}
	else{
		printf("entrez votre message à décoder\n");
		scanf("%s",&morse);
		decodeur(&phrase, &morse);
		printf("\n message décodé: \n %s", phrase);
		}
}
