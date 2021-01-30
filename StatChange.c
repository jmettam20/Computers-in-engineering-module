#include <stdio.h>
#include "shopItemData.c"

int main(){
int userHealth = 100;
int userDamage = 50;
int userCredits = 1000;

printf("\n%d \n%d \n%d Stats", userHealth, userDamage, userCredits);


lazerSword();
int lazerSwordDmg2 = lazerSwordDmg();
int lazerSwordCost2 = lazerSwordCost();
lazerBlaster();
powerArmour();

lazerSwordDmg2 = lazerSwordDmg;
lazerSwordCost2 = lazerSwordCost;

int lazerBlasterDmg2 = lazerBlasterDmg;
int lazerBlasterCost2 = lazerBlasterCost;

int powerArmourDff2 = powerArmourDff;
int powerArmourCost2 = powerArmourCost;

int check = itemList();

if (check = 100){
	userDamage = userDamage + lazerSwordDmg2
	userCredits = userCredits - lazerSwordCost2
	
	}

if (check = 101){
	userDamage = userDamage + lazerBlasterDmg2
	userCredits = userCredits - lazerBlasterCost2
	
	}

if (check = 102){
	userDamage = userDamage + powerArmourDff2
	userCredits = userCredits - powerArmourCost2
	
	}
}
