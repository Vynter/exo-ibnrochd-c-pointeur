#include <stdio.h>
#include <stdlib.h>

int remplisage(int *tab,int tsize){
    printf("Veuillez saisir les dix valeurs\n");
    printf("_______________________________\n");
    for(int i=0 ; i<tsize ; i++){
        printf("Veuillez saisir la valeur N %d\n",i+1);
        scanf("%d",&tab[i]);
    }
    return 0;
}

int occurance(int *v){
    printf("Veuillez saisir l'occurance que vous voulez supprimer \n");

    scanf("%d",v);
    
    return 0;
}

 

int supp(int *tab,int tsize,int *val,int *nbr){

    int k=0;
    int nb=0;
    
        for (int z = 0; z < tsize; z++)
    {
        if(tab[z]==*val) {
            nb++;
        }

    }

    for (int i = 0; i < tsize; i++)
    {
        if(tab[i]==*val){
            for (int j = i; j < tsize-k; j++)
            {
                tab[j]=tab[j+1];
                
            }
            k++;
            i--;
        }
    }

    *nbr=nb;
    return 0;
}

int affichage(int *tab,int tsize){
    for(int i=0 ; i<tsize ; i++){
    printf("la valeurs N %d : %d\n",i+1,tab[i]);
    }
    return 0;
}

int main()
{
    int tsize=10;
    int *tab=NULL;
    int val=0;
    int nbr=0;

    tab = malloc(tsize * sizeof(int));

    if(tab==NULL){
        printf("erreur d'allocation \n");
        return 1;
    }

    remplisage(tab,tsize);
    
    occurance(&val);

    supp(tab,tsize,&val,&nbr);

    tsize=tsize-nbr;
    printf("nbr est a %d \n",nbr);
    printf("siez est a %d \n",tsize);

    tab=(int*)realloc(tab,(10)*sizeof(int));

    affichage(tab,tsize);

    return 0;
}

