#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
struct food_menu{
	char name[20];
	int price;
}veg[20],nonveg[14],snacks[14],drinks[10];
struct order{
	char name[20];
	int price;
	int qty;
}o[10];
int ord,i,j;
void Menu();
void Veg();
void Nonveg();
void Snacks();
void Drinks();
void order(char );
void bill();
 int main(){
	char ch;
	int ord=0;
	
	printf("\n\n\n\n\t\t\t\t\tMAHARANA PRATAP COLLEGE OF PROFESSIONAL STUDIES   ");
	printf("\n\n\t\t\t\t\t\t\tBCA 3RD YEAR  ");
		printf("\n\n\t\t\t\t\t\tCOMPUTER APPLICATIONS DEPARTMENTS  ");
	printf("\n\n\t\t\t\t\t\t\tVIMAL RAJPUT");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\tSUBMITTED TO");
	printf("\n\n\t\t\t\t\t\t\t\t\t\tMs.KOMAL YADAV");
	
    printf("\n\n\n\n\n\t\t\t\t\t\tPress Enter key to continue");
   getchar();
   system("cls"); 
   
   printf("\n\n\n\n\n\t\t\t\t\tPEACOCK GARDEN THE FAMILY RESTURANTS");
   printf("\n\n \t\tThe resturants offers the mix of Indian class dishes as well as new innovative creation\n\t\tfrom across the nation.This paradise reflects flavours of comtemporary way served in a \n\t\tdining ambience.Our family Resturant is Vegeterian or Non-Vegeterian Resturants ,where \n\t\tyou can get tasty dishes.");
   printf("\n\n\n\t\t---------------------------------------------------------------------------------------");
   printf("\n\t\t\t H-HOME \t\t\t M-MENU \t\t\tX-EXIT");
   printf("\n\t\t---------------------------------------------------------------------------------------");
   
   printf("\n\n\n\t\tEnter the keyword of your choice:");
   scanf("%c",&ch);
   if (ch=='H'|| ch=='h')
   { 
    main();
   }

   else if (ch=='M'|| ch=='m')
   {	system("cls");
     Menu();
   }
   else if (ch=='X'||ch=='x'){
   
      printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tTHANK YOU");
      
       exit(0);
   }
	
	return 0;

	
}


void Menu(){
	char ch;
	do{
	printf("\n\n\n\t\t\t\t\t\t\tMENU");
	printf("\n\t\t---------------------------------------------------------------------------------------");
	printf("\n\t\t\t V-VEG\t\tN-NONVEG\t\tS-SNACKS\t\t D-DRINKS");
	printf("\n\t\t---------------------------------------------------------------------------------------");
    printf("\n\n\t\tEnter the keyword of your choice:");
    scanf(" %c",&ch);
    if (ch=='V'|| ch=='v'){
    	system("cls");
    	Veg();
    	 break;
    }
	else if (ch=='N'||ch=='n'){
			system("cls");
			Nonveg();
         break;
		 
	}
	else if (ch=='S'||ch=='s'){
		system("cls");
		Snacks();
        break;
       
	}
	else if (ch=='D'||ch=='d'){
		system("cls");
		Drinks();
        break;
      }
      system("cls") ;
}while(1);
}
void Veg(){
	char ch;
	strcpy(veg[0].name,"Gobhi Paratha");  veg[0].price=35;
	strcpy(veg[1].name,"Aloo Paratha");   veg[1].price=30;
	strcpy(veg[2].name,"Plain Paratha");  veg[2].price=15;
	strcpy(veg[3].name,"Panner kulcha");  veg[3].price=60;
	strcpy(veg[4].name,"Pain Roti");      veg[4].price=8;
	strcpy(veg[5].name,"Butter Roti");    veg[5].price=12;
	strcpy(veg[6].name,"Kadhai Paneer");  veg[6].price=230;
	strcpy(veg[7].name,"Matar Paneer");   veg[7].price=160;
	strcpy(veg[8].name,"Handi Paneer");   veg[8].price=200;
	strcpy(veg[9].name,"Butter Naan");    veg[9].price=25;
	strcpy(veg[10].name,"Kabab Paratha"); veg[10].price=50;
	strcpy(veg[11].name,"Veg Biryani");   veg[11].price=80;
	strcpy(veg[12].name,"Veg Manchurian");veg[12].price=100;
	strcpy(veg[13].name,"Dal Makhni");    veg[13].price=140;
	strcpy(veg[14].name,"Mix Veg");       veg[14].price=110;
	strcpy(veg[15].name,"Zeera Rice");    veg[15].price=60;
	strcpy(veg[16].name,"Fried Rice");    veg[16].price=90;
	strcpy(veg[17].name,"Sahi Paneer");   veg[17].price=190;
	strcpy(veg[18].name,"Plain Dosa");    veg[18].price=70;
	strcpy(veg[19].name,"Masala Dosa");   veg[19].price=100;
	printf("\n\t\t1.Gobhi Paratha .............Rs.35\t2.Aloo Paratha................Rs.30");
	printf("\n\t\t3.Plain Paratha .............Rs.15\t4.Panner kulcha...............Rs.60");
	printf("\n\t\t5.Pain Roti..................Rs.8\t6.Butter Roti.................Rs.12");
	printf("\n\t\t7.Kadhai Paneer .............Rs.230\t8.Matar Paneer................Rs.160");
	printf("\n\t\t9.Handi Paneer ..............Rs.200\t10.Butter Naan................Rs.25");
	printf("\n\t\t11.Kabab Paratha ............Rs.50\t12.Veg Biryani................Rs.80");
	printf("\n\t\t13.Veg Manchurian............Rs.100\t14.Dal Makhni.................Rs.140");
	printf("\n\t\t15.Mix Veg...................Rs.110\t16.Zeera Rice.................Rs.60");
	printf("\n\t\t17.Fried Rice ...............Rs.90\t18.Sahi Paneer................Rs.190");
	printf("\n\t\t19.Plain Dosa.................Rs.70\t20.Masala Dosa................Rs.100");
	printf("\n\n\n\t\t------------------------------------------------------------------------------");
    printf("\n\t\t H-HOME\t\t\tM-MENU\t\t\tO-ORDER\t\t\tX-EXIT");
    printf("\n\t\t------------------------------------------------------------------------------");
	
	printf("\n\n\t\tEnter the keyword of your choice:");
    scanf(" %c",&ch);
    if (ch=='H'|| ch=='h'){
    	system("cls");
    	main();

    }
	else if (ch=='M'||ch=='m'){
		system("cls");
	    Menu();
		 }
	else if (ch=='O'||ch=='o'){
	 char c;
	 printf("\n\n\t\t\t\t\tOrder");
	 printf("\n\t\t\t---------------------------------");
	printf("\n\t\tEnter the serial no. of the item:");
    scanf(" %d",&i);
    strcpy(o[ord].name,veg[i-1].name);
    o[ord].price=veg[i-1].price;
    printf("\n\t\tEnter the quantity:");
    scanf(" %d",&j);
    o[ord].qty=j;
    ord++;
    printf("\n\t\tOrder more from veg(V),from other(O),for bill(B):");
    scanf(" %c",&c);
    if(c=='v'||c=='V')
    {system("cls");
      Veg();
  }
    else if(c=='o'||c=='O'){
	system("cls");
    Menu();
}
    else if(c=='b'||c=='B'){
	system("cls");
      bill();
      
	  }
    else{
	system("cls");
    Veg();
}
  }
else if(ch=='X'||ch=='x')

{	system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU");
  exit(0);
  }
  else{
  	system("cls");
  	Veg();
  }
  
}
void Nonveg(){
	char ch;
	strcpy(nonveg[0].name,"Butter Chicken");    nonveg[0].price=250;
	strcpy(nonveg[1].name,"Chicken Masala");    nonveg[1].price=220;
	strcpy(nonveg[2].name,"Chilly Chicken");    nonveg[2].price=250;
	strcpy(nonveg[3].name,"Boti Kabab");        nonveg[3].price=200;
	strcpy(nonveg[4].name,"Mutton Bangosh");    nonveg[4].price=200;
	strcpy(nonveg[5].name,"Mutton Quorma");     nonveg[5].price=240;
	strcpy(nonveg[6].name,"Egg Curry");         nonveg[6].price=100;
	strcpy(nonveg[7].name,"Egg Gravy");         nonveg[7].price=140;
	strcpy(nonveg[8].name,"Chicken kali Mirch");nonveg[8].price=175;
	strcpy(nonveg[9].name,"Mutton Kofta");      nonveg[9].price=150;
	strcpy(nonveg[10].name,"Fish Tikka");       nonveg[10].price=250;
	strcpy(nonveg[11].name,"Tundey Kabab");     nonveg[11].price=120;
	strcpy(nonveg[12].name,"Dum Biryani");      nonveg[12].price=150;
	strcpy(nonveg[13].name,"Fish Fry");         nonveg[13].price=200;
	
	
	printf("\n\t\t1.Butter Chicken .............Rs.250\t2.Chicken Masala................Rs.220");
	printf("\n\t\t3.Chilly Chicken .............Rs.250\t4Boti Kabab.....................Rs.200");
	printf("\n\t\t5.Mutton Bangosh..............Rs.200\t6.Mutton Quorma.................Rs.240");
	printf("\n\t\t7.Egg Curry ..................Rs.100\t8.Egg Gravy.....................Rs.140");
	printf("\n\t\t9.Chicken Kali Mirch .........Rs.200\t10.Mutton Kofta.................Rs.150");
	printf("\n\t\t11.Fish Tikka ................Rs.250\t12.Tundey kabab.................Rs.120");
	printf("\n\t\t13.Dum Biryani................Rs.150\t14.Fish Fry.....................Rs.200");
	
	printf("\n\n\n\t\t------------------------------------------------------------------------------");
    printf("\n\t\t H-HOME\t\t\tM-MENU\t\t\tO-ORDER\t\t\tX-EXIT");
    printf("\n\t\t------------------------------------------------------------------------------");
	
  	printf("\n\n\t\tEnter the keyword of your choice:");
    scanf(" %c",&ch);
    if (ch=='H'|| ch=='h'){
    	system("cls");
    	main();

    }
	else if (ch=='M'||ch=='m'){
		system("cls");
	    Menu();
		 }
	else if (ch=='O'||ch=='o'){
	 char c;
	 
	printf("\n\n\t\t\t\t\tOrder");
	 printf("\n\t\t\t---------------------------------");
	printf("\n\t\tEnter the serial no. of the item:");
    scanf(" %d",&i);
    strcpy(o[ord].name,nonveg[i-1].name);
    o[ord].price=nonveg[i-1].price;
    printf("\n\t\tEnter the quantity:");
    scanf(" %d",&j);
    o[ord].qty=j;
    ord++;
    printf("\n\t\tOrder more from Nonveg(N),from other(O),for bill(B):");
    scanf(" %c",&c);
    if(c=='N'||c=='n')
    {system("cls");
      Nonveg();
  }
    else if(c=='o'||c=='O'){
	system("cls");
    Menu();
}
    else if(c=='b'||c=='B'){
	system("cls");
      bill();
      
	  }
    else{
	system("cls");
   Nonveg();
}
  }
else if(ch=='X'||ch=='x')

{	system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU");
  exit(0);
  }
  else{
  	system("cls");
  	Nonveg();
  }
    
}

void Snacks(){
	char ch;
	strcpy(snacks[0].name,"Samosa");        snacks[0].price=15;
	strcpy(snacks[1].name,"Bread Pakoda");  snacks[1].price=15;
	strcpy(snacks[2].name,"Veg Roll");      snacks[2].price=60;
	strcpy(snacks[3].name,"Aloo Paties");   snacks[3].price=20;
	strcpy(snacks[4].name,"Paneer Paties"); snacks[4].price=25;
	strcpy(snacks[5].name,"Burger");        snacks[5].price=35;
	strcpy(snacks[6].name,"Pizza Slice");   snacks[6].price=70;
	strcpy(snacks[7].name,"Hot Dog");       snacks[7].price=80;
	strcpy(snacks[8].name,"Momos");         snacks[8].price=50;
	strcpy(snacks[9].name,"French Fries");  snacks[9].price=30;
	strcpy(snacks[10].name,"Maggie");       snacks[10].price=40;
	strcpy(snacks[11].name,"Chowmien ");    snacks[11].price=50;
	strcpy(snacks[12].name,"Papdi Chaat");  snacks[12].price=30;
	strcpy(snacks[13].name,"Chilli Potato");snacks[13].price=60;
	
	
	printf("\n\t\t1.Samosa ...............Rs.15\t2.Bread Pakoda..............Rs.15");
	printf("\n\t\t3.Veg Roll .............Rs.60\t4.Aloo Paties...............Rs.20");
	printf("\n\t\t5.Paneer Paties.........Rs.25\t6.Burger....................Rs.35");
	printf("\n\t\t7.Pizza Slice ..........Rs.70\t8.Hot Dog...................Rs.80");
	printf("\n\t\t9.Momos ................Rs.50\t10.French Fries.............Rs.30");
	printf("\n\t\t11.Maggie ..............Rs.40\t12.Chowmien.................Rs.50");
	printf("\n\t\t13.Papdi Chaat..........Rs.30\t14.Chilli Potato............Rs.60");
	
	printf("\n\n\n\t\t------------------------------------------------------------------------------");
    printf("\n\t\t H-HOME\t\t\tM-MENU\t\t\tO-ORDER\t\t\tX-EXIT");
    printf("\n\t\t------------------------------------------------------------------------------");
	
	printf("\n\n\t\tEnter the keyword of your choice:");
    scanf(" %c",&ch);
    if (ch=='H'|| ch=='h'){
    	system("cls");
    	main();

    }
	else if (ch=='M'||ch=='m'){
		system("cls");
	    Menu();
		 }
	else if (ch=='O'||ch=='o'){
	 char c;
	 
	printf("\n\n\t\t\t\t\tOrder");
	 printf("\n\t\t\t---------------------------------");
	printf("\n\t\tEnter the serial no. of the item:");
    scanf(" %d",&i);
    strcpy(o[ord].name,snacks[i-1].name);
    o[ord].price=snacks[i-1].price;
    printf("\n\t\tEnter the quantity:");
    scanf(" %d",&j);
    o[ord].qty=j;
    ord++;
    printf("\n\t\tOrder more from Snacks(S),from other(O),for bill(B):");
    scanf(" %c",&c);
    if(c=='s'||c=='S')
    {system("cls");
      Snacks();
  }
    else if(c=='o'||c=='O'){
	system("cls");
    Menu();
}
    else if(c=='b'||c=='B'){
	system("cls");
      bill();
      
	  }
    else{
	system("cls");
    Snacks();
}
  }
else if(ch=='X'||ch=='x')

{	system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU");
  exit(0);
  }
  else{
  	system("cls");
  	Snacks();
  }
    
}
void Drinks(){
	char ch;
	strcpy(drinks[0].name,"Signatue");        drinks[0].price=400;
	strcpy(drinks[1].name,"Royal Stag");      drinks[1].price=200;
	strcpy(drinks[2].name,"Bacardi");         drinks[2].price=150;
	strcpy(drinks[3].name,"Old Monk");        drinks[3].price=200;
	strcpy(drinks[4].name,"Mild Beers");      drinks[4].price=250;
	strcpy(drinks[5].name,"Gimlet");          drinks[5].price=140;
	strcpy(drinks[6].name,"Premium Beers");   drinks[6].price=300;
	strcpy(drinks[7].name,"Bloody Marry'");   drinks[7].price=80;
	strcpy(drinks[8].name,"Gin Fizz");        drinks[8].price=50;
	strcpy(drinks[9].name,"Blender's Pride'");drinks[9].price=140;
	
	
	printf("\n\t\t1.Signatue ................Rs.400\t2.Royal Stag...............Rs.200");
	printf("\n\t\t3.Bacardi .................Rs.150\t4.Old Monk.................Rs.200");
	printf("\n\t\t5.Mild Beers...............Rs.250\t6.Gimlet...................Rs.140");
	printf("\n\t\t7.Premium Beers ...........Rs.300\t8.Gin Fizz.................Rs.80");
	printf("\n\t\t9.Blender's Pride .........Rs.50\t10.Bloody Marry............Rs.140");
	
	
	printf("\n\n\n\t\t------------------------------------------------------------------------------");
    printf("\n\t\t H-HOME\t\t\tM-MENU\t\t\tO-ORDER\t\t\tX-EXIT");
    printf("\n\t\t------------------------------------------------------------------------------");
	
	printf("\n\n\t\tEnter the keyword of your choice:");
    scanf(" %c",&ch);
    if (ch=='H'|| ch=='h'){
    	system("cls");
    	main();

    }
	else if (ch=='M'||ch=='m'){
		system("cls");
	    Menu();
		 }
	else if (ch=='O'||ch=='o'){
	 char c;
	 
    printf("\n\n\t\t\t\t\tOrder");
	 printf("\n\t\t\t---------------------------------");
	printf("\n\t\tEnter the serial no. of the item:");
    scanf(" %d",&i);
    strcpy(o[ord].name,drinks[i-1].name);
    o[ord].price=drinks[i-1].price;
    printf("\n\t\tEnter the quantity:");
    scanf(" %d",&j);
    o[ord].qty=j;
    ord++;
    printf("\n\t\tOrder more from Drinks(d),from other(O),for bill(B):");
    scanf(" %c",&c);
    if(c=='d'||c=='D')
    {system("cls");
      Drinks();
  }
    else if(c=='o'||c=='O'){
	system("cls");
    Menu();
}
    else if(c=='b'||c=='B'){
	system("cls");
      bill();
      
	  }
    else{
	system("cls");
    Drinks();
}
  }
else if(ch=='X'||ch=='x')

{	system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU");
  exit(0);
  }
  else{
  	system("cls");
  	Drinks();
  }
  
    
}




void bill(){
	int total=0;
	int i;
	char c;
	float gst;
	printf("\n\n\n\t\t\t\t\t\tPEACOCK GARDEN THE FAMILY RESTURANTS");
	printf("\n\t\t\t\t\t\t\tTEL:01234 535 5424");
	printf("\n\t\t\t\t\t\t\tVAT NO 128 8768 98");
	printf("\n\t\t\t\t\t\t\t    TAX INVOICE");
	printf("\n\n\t\t\t\t\tBill No: RES01");
	printf("\n\t\t\t\t\t-----------------------------------------------------------");
	printf("\n\t\t\t\t\tQty\t\tDescription \t\t U.P.\t Total");
	printf("\n\t\t\t\t\t------------------------------------------------------------");
	 for ( i = 0; i < 10; i++) {
        if (o[i].qty > 0) {
            int itemTotal = o[i].price * o[i].qty;
            total += itemTotal;
            printf("\n\t\t\t\t\t %d\t\t%s  \t\t  %d\t %d", o[i].qty, o[i].name, o[i].price, itemTotal);
        }
    }
    printf("\n\t\t\t\t\t-------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t\t\t Subtotal:%d",total);
    gst=(total*8)/100;
    printf("\n\t\t\t\t\t\t\t\t\t\t GST(8%%):%0.2f",gst);
    printf("\n\t\t\t\t\t\t\t\t\t      GRAND TOTAL:%0.2f",total+gst);
    printf("\n\t\t\t\t\t-------------------------------------------------------");
printf("\n\t\t\t\t\t\tDiscretionary service charge included.");
printf("\n\n\n\t\t\t\t\t\t     Press Any Key to continue");
getchar();
getchar();
system("cls");
main();
 

}

	
	
	


