#include <stdio.h>
int main(){

	int j, m, a, age;
	printf("entrer votre jour : ");
	scanf("%d", &j);
	if(j<1 || j>31){
		printf("entrer un jour valide(entre 1 et 31) ");
		scanf("%d", &j);
		if(j<1 || j>31){
			printf("jour invalide");
	  		return 0;
		}
	}
	printf("entrer votre mois : ");
	scanf("%d", &m);
	if(m<1 || m>12){
		printf("entrer un mois valide(entre 1 et 12)");
		scanf("%d", &m);
		if(m<1 || m>12){
			printf("mois invalide");
			return 0;
		}
	}
	printf("entrer votre annee :");
	scanf("%d", &a);
	if(a < 1900 || a > 2022){
		printf("entrer un jour valide(entre 1900 et 2022)");
		scanf("%d", &a);
		if(a < 1900 || a > 2022){
			printf("date invalid");
			return 0;
		}
	}
	age = 2022 - a;
	
	printf("alors votre date de naissance est : %d/%d/%d et votre age est :%d ANS", j,m,a,age);
	
	
	
	

/*	int x, y;
	
	printf("Ecrire n 1 :");
	scanf("%d",&x);
	printf("Ecrire n 2 :");	
	scanf("%d", &y);
	

	printf("la resultat de : %d + %d = %d \n", x, y,x+y);
	
	float a, b;
	printf("ecrire n 3 :");
	scanf("%f", &a);
	printf("ecrire n 4 :");
	scanf("%f", &b);
	printf("le resultat de : %.2f + %.2f = %.2f",a,b,a+b);
	*/
	
	return 0;
}
