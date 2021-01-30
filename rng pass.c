#include <ctype.h>
#include <math.h>
#include <time.h>

//random number generaitor function pass out 
int rng()
{
	int randomNo; 
	int r;
	
srand (time(0));

for(r=0; r<1; r++){randomNo = (rand()%3)+1;}

return (randomNo);
}

int main()
{
	rng();
	
	int Var1 = rng();
	
		printf("The value of var1 is: %d\n",Var1);

	
	return(0);
	
	}	
	
