#include <stdio.h>

int main()
{    
	//Deklarirane    
	int red;   
	int stulb;
	int i,j;
	
	float a[red][stulb];
	float b[red][stulb];
	float sumA=0.00;
	float sumB=0.00;
	//deklarirane na goleminata na matricata
	printf("vavedete razmerite na matricata (redovete i stulbovete trqbva da sa ravni!)\n");
	do{
	 printf("Redove=");
	 scanf("%d",&red);
	 printf("Stulbove=");
     scanf("%d",&stulb);
     if(red!=stulb){
     	 printf("Vavedete ravni stoinosti!\n");
	 }
	}while(red!=stulb);
	//Vavejdane na danni za masivite
	printf("Vavedete dannite v masiv a:\n");
	
	for(i=0; i<red;i++){
		for(j=0; j<stulb;j++){
			printf("Vavedete a[%d][%d]=",i,j);
			do{
				scanf("%f", &a[i][j]);
				if(a[i][j]<=-1000 || a[i][j]>=1000){
					printf("Vavedete stoinost v intervala [-1000 ; 1000]\n");
						printf("Vavedete a[%d][%d]=",i,j);
				}
			}while(a[i][j]<=-1000 || a[i][j]>=1000);
		}
	}
	
	printf("Vavedete dannite v masiv b:\n");
	
	for(i=0; i<red;i++){
		for(j=0; j<stulb;j++){
			printf("Vavedete b[%d][%d]=",i,j);
			do{
				scanf("%f", &b[i][j]);
				if(b[i][j]<=-1000 || b[i][j]>=1000){
					printf("Vavedete stoinost v intervala [-1000 ; 1000]\n");
						printf("Vavedete b[%d][%d]=",i,j);
				}
			}while(b[i][j]<=-1000 || b[i][j]>=1000);
		}
	}
	//Izvejdane na danni za masivite
	printf("********************\n");
	printf("a:\n");
	for(i=0;i<red;i++){
		for(j=0;j<stulb;j++){
			printf("%.2f  ", a[i][j]);
		}
		printf("\n\n");
	}
	
	printf("b:\n");
	for(i=0;i<red;i++){
		for(j=0;j<stulb;j++){
			printf("%.2f  ", b[i][j]);
		}
		printf("\n\n");
	}
	//Smqtane na sumite po glavnite diagonali na matricite
	for(i=0;i<red;i++){
		for(j=0;j<stulb;j++){
			if(i==j){
				sumA=sumA + a[i][j];
			}
			else{
				continue;
			}
		}
	}
	
		for(i=0;i<red;i++){
		   for(j=0;j<stulb;j++){
		    	if(i==j){
				sumB=sumB + b[i][j];
			}
			else{
				continue;
			}
		}
	}
	float c[]={sumA, sumB};
	//Otpechatvane na sumite po glavnite diagonali predi obrabotka
	printf("Sumata ot elementite po glavnite diagonali predi obrabotka (purvo na a[])\n");
	for(i=0;i<2;i++){
		printf("%.2f \n",c[i]);
	}
	//Otpechatvane na sumite po glavnite diagonalite sled obrabotka
	if(sumB>sumA){
		printf("Sled obrabotka\n");
		for(i=1;i<2;i--){
			printf("%.2f \n",c[i]);
			if(i==0){
				break;
			}
			else{
				continue;
			}
		}
	}else if(sumA==sumB){
		printf("Sled obrabotka\n");
	 for(i=0;i<2;i++){
		printf("%.2f \n",c[i]);
	  }
	}else{
		printf("Sled obrabotka\n");
		for(i=0;i<2;i++){
			printf("%.2f \n", c[i]);
		}
	}
	return 0;
}
