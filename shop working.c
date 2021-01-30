#include <stdio.h>
#include "colourslib.c"
#include <stdlib.h>
#include "title.c"
#include "shopItemData.c"
#include "itemPick.c"


int mainShopFunction(){ //gathers functions written in librarys, puts them in order as one function to be exicuted 
		title();
		lazerSword();
		lazerBlaster();
		powerArmour();
		while(1){
		itemList();
	}
}


int main(){
	
	mainShopFunction();
	}


//Take what user enters for the case selectrion and create if statements to add stats and take money

