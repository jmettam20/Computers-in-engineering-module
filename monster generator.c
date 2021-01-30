//Librarys//////
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
////////////////////
//random number generaitor function pass out 
int rng()
{
	int randomNo; 
	int r;
	
srand (time(0));

for(r=0; r<1; r++){randomNo = (rand()%3)+1;}

return (randomNo);

}


//////////////////

int monsterPic(){
	unsigned int monster;
	
	rng();
	
	int genNo = rng();
	
if (genNo == 1){
	monster = 200;
	}
	
	if (genNo == 2){
		monster = 201;
		}
		
		else {
			monster = 202;
			}
			
			printf("\n Monster id is %d", monster);
			
			return (0);
}


//Main///////////////

int main(){
	rng(); //generates a random number 
monsterPic();//picks a monster based on random number and sets the monster variable 
	return 0;
    };
/////////////////////
