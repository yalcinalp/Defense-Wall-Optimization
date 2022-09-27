
#include <stdio.h>

int main() {
	
	int wall_length[100000];
	int tribe_sayisi;
	int width;
	int height;
	int f_attack_time;
	int position;
	int speed;
	int attack_interval;
	int number_of_attacks;
	int i;
	int j;
	int k;
	int l;
	int alp;		/* alp dedigim variable benim ilgilendigim duvar uzunlugu */

	scanf("%d", &alp);
	scanf("%d", &tribe_sayisi);

	for(j=0;j<alp+1;j++){
		
		wall_length[j] = 1;
		
	}

	for(l=0;l<tribe_sayisi;l++){

		scanf("%d %d %d %d %d %d %d", &width, &height, &f_attack_time, &position, &speed, &attack_interval, &number_of_attacks);

		for(i=0;i<number_of_attacks;i++){
			
			if(i==0){
		
				for(k=position;k<width+position;k++){

					if(0 <= k && k < alp+1){

					 	/* aga benim buraya yazdigim k < alp yerine alp+1 falan da olabilir haberin olsun o baya sikinti?  */
					 
						if(wall_length[k] < height){
							 
							wall_length[k] = height;
							 
						}

					}	
				}
			}
			
			else{
				
				 position += attack_interval*speed;
				 
				 for(k=position;k<width+position;k++){

				 	if(0 <= k && k < alp+1){
					 
						 if(wall_length[k] < height){
							 
							 wall_length[k] = height;

						}
						 
					 }
					 
				 }
				
			}
		  
		}
		
	}
	
	for(i=0;i<alp;i++){
			
		printf("%d ",wall_length[i]);
			
		}

	printf("%d",wall_length[alp]);
	printf("\n");

	return 0;
}




