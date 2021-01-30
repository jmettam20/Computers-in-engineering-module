//random number generaitor function pass out 
int rng()
{
	int randomNo; 
	int r;
	
srand (time(0));

for(r=0; r<1; r++){randomNo = (rand()%3)+1;}

return (randomNo);

}

