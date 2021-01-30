////Monsters

////Zombyman
int zomb(){
	
	int zombStats(){
		int zombId = 200;
		int zombHealth = 15;
		int zombGunDmg = 35;
		}
	
	printf("\n A zombyman has entred the battlefield"); 
	printf("\n They may be possessed but still capable of blowing your brains out, better get your boomstick");
	
	}

//imp
int imp(){
	
	int impStats(){
		int impId = 202;
		int impHealth = 50;
		int impFireballDmg = 50;
		int impMeleeDmg = 20;
		}
	
	printf("\n An Imp has entred the battlefield"); 
	printf("\n Imps are the footsoldiers of hell.\n Dark orange skin, blood red eyes and spikes all over.\n Watch out scortching fireballs heading your way and its claws, they slice through bone.");
	
	
	}



//barron
int barron(){
	
	int barronStats(){
		int barronId = 202;
		int barronHealth = 150;
		int barronFireballDmg = 60;
		int barronMeleeDmg = 85
		}
	
	printf("\n A Barron Of Hell has entred the battlefield"); 
	printf("\n A bull with the body of a pro wrestler and green fireballs");
	
	
	}


//Random number generator//
#include <ctype.h>
#include <math.h>
#include <time.h>

int rng(){ // tandom number genewrator function 1-3
int r;//for the for statement
unsigned int randomNo; //asign rng function to int

srand ( time(0));//random no gen

for(r=0; r<1; r++){//for loop 1 random number
randomNo = (rand()%3)+1;//roll random number between 0 and 3
	printf("%d\n", randomNo);//print the random number
	}
	};


//random number generaitor function pass out 
#include <ctype.h>
#include <math.h>
#include <time.h>
int rng()
{
	int randomNo; 
	int r;
	
srand (time(0));

for(r=0; r<1; r++){randomNo = (rand()%3)+1;}

return (randomNo);
}

#include "rng pass.c"
////////////////////



////dummy function being passed into
int main()
{
	rng();
	
	int Var1 = rng();
	
		printf("The value of var1 is: %d\n",Var1);

	
	return(0);
	
	}	
	
//Coloured text 

//Use before " but after (

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"

//use after " but before )
#define RESET   "\x1b[0m"

//must use reset  otherwise the whole code chages to the colour 

	




