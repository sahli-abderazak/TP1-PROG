#include<stdio.h>
#include<stdlib.h>
 struct personne
{
    char nom[20];
    char prenom[20];
     struct personne *pere;
     struct personne *mere;
} typedef personne;

void AfficherAncetres(personne p)
{
    printf("le nom : %s \t le prenom :%s",p.nom,p.prenom);
    printf("le nom %s et le prenom de pere %s",p.pere->nom,p.pere->prenom);
    printf("le nom %s et le prenom de mere %s",p.mere->nom,p.mere->prenom);

}
int EstunFrere(personne p1,personne p2)
{
    if((p1.pere == p2.pere) ||(p1.mere == p2.mere))
    {
            return 1;
    }
    else
    {
            return 0;
    }

}
int main()
{
    personne p,p1,p2;
    int a;
    scanf("%s%s%s%s%s%s",p.nom,p.prenom,p.pere->nom,p.pere->prenom,p.mere->nom,p.mere->prenom);
    AfficherAncetres(p);
    a=EstunFrere(p1,p2);
   if(a==1)
   {
       printf("vrai");
   }else{
   printf("faux");
   }

}
