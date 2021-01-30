
//list each item in a case switch
int itemList(){ //Item list function
	
	
int items = 3;

printf("\n Pick an item");
scanf("%d",&items);


switch(items)
{
	case 100:
printf("\n You picked a lazer sword you have +100 damage and 100 credits have been taken from your account.");
	break;
	
	case 101:
	printf("\n You picked a lazer blaster you have +100 damage and 100 credits have been taken from your account.");
	break;
	
	case 102:
	printf("\n You picked power armour you have +100 armour and 100 credits have been taken from your account.");
	break;
	
	case 0: 
 printf("Exiting the program....\n");
   exit(0);
	break;
	
return(items);
}

	
	}




