//Lazer sword
int lazerSword(){
	printf(RED " \n\n <______LAZER SWORD______> "); 
	
int lazerSwordId = 100; //gives an id number to the lazerSword
int lazerSwordCost = 20; //gives an id number to the lazerSword
int lazerSwordDmg = 80; //gives an id number to the lazerSword
		
//tells the user the ID code for items
printf(RED " \n The ID code for the lazer sword is %d"RESET, lazerSwordId); 
printf(RED"\n Lazer Sword Damage %d" RESET, lazerSwordDmg);  
printf(RED"\n Lazer Sword Price In Credits %d\n"RESET, lazerSwordCost ); 

return(lazerSwordCost,lazerSwordDmg);
}

//lazer blaster
int lazerBlaster(){
	
		printf(CYAN " \n <______LAZER Blaster______> "); 
	
int lazerBlasterId = 101; //gives an id number to the lazerBlaster
int lazerBlasterDmg = 50; //gives an id number to the lazerBlaster
int lazerBlasterCost = 100; //gives an id number to the lazerBlaster

//tells the user the ID code for items
printf(CYAN"\n The ID code for the lazer blaster is %d"RESET, lazerBlasterId);
printf(CYAN"\n Lazer Blaster Damage %d"RESET, lazerBlasterDmg );
printf(CYAN"\n Lazer Blaster Price In Credits %d\n"RESET, lazerBlasterCost );


return(lazerBlasterDmg,lazerBlasterCost);
	}
	
//powerArmour
int powerArmour(){

	printf(MAGENTA " \n <______POWER ARMOUR______> "); 

int powerArmourId = 102;  //gives an id number to the powerArmour
int powerArmourDff = 65;  //gives an id number to the powerArmour
int powerArmourCost = 100;  //gives an id number to the powerArmour

//tells the user the ID code for items
printf(MAGENTA"\n The ID code for the power armour is %d"RESET, powerArmourId);
printf(MAGENTA"\n Power Arnour Deffence %d"RESET, powerArmourDff );
printf(MAGENTA"\n Lazer Power Armour In Credits %d\n"RESET, powerArmourCost );
return(powerArmourDff,powerArmourCost);
	}

