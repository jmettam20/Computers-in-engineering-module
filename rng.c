//Random number generator//
int rng(){ // tandom number genewrator function 1-3
int r;//for the for statement
unsigned int randomNo; //asign rng function to int

srand ( time(0));//random no gen

for(r=0; r<1; r++){//for loop 1 random number
randomNo = (rand()%3)+1;//roll random number between 0 and 3
	printf("%d\n", randomNo);//print the random number
	}
	};
