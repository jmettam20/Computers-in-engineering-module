#include "jellO.c"
#include "chungus.c"
#include "gnome.c"

int monsterPic(){
	unsigned int monster;
	
	rng();
	
	int genNo = rng();
	
if (genNo == 1){
	monster = 200;
	jello();
	}
	
	if (genNo == 2){
		monster = 201;
		chungus();
		}
		
		else {
			monster = 202;
			gnome();
			}
			
			printf("\n Monster id is %d", monster);
			
			return (0);
}

