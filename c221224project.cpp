#include<bits/stdc++.h>
using namespace std;
int main()
{
	char name[30], pizza1[]="Chicken Fazita" ,pizza2[]="Chicken BBQ" ,pizza3[]="Beef Delight" ,pizza4[]="Pepperoni Special",
	pasta1[]="Chicken with Cheese Pasta",pasta2[]="Oven Baked Mushroom Pasta",pasta3[]="Spicy Beef Pasta",
    bur1[]="Grilled Chicken Burger",bur2[]="Cheese Burger",bur3[]="Beef Burger",
    sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Veg Sandwich",
    bir1[]="Chicken Biryani", bir2[]="Kacchi Biryani", bir3[]="Beef Biryani",gotostart ;
	int choice=0,pchoice,pchoice1, quantity,price=0;
	beginning:
	system("CLS");
	cout<<"\t\t\t----------BD Fast Food-----------\n\n";
	cout<<"Please enter your name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"!"<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizza\n";
	cout<<"2) Burger\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Pasta\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nPlease enter your choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\nPlease enter which flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Tk.250\n"<<"2) Regular Tk.500\n"<<"3) Large Tk.900\n";
			cout<<"\nChoose size please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease enter quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: price += 250*quantity;
			break;

			case 2: price += 500*quantity;
			break;

			case 3: price += 900*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\n\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;

			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
           else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}

		}

	 }

	 else if(choice==2)
	 {
		cout<<"\n1) "<<bur1<<" Tk.180"<<"\n";
		cout<<"2) "<<bur2<<" Tk.150"<<"\n";
		cout<<"3) "<<bur3<<" Tk.160"<<"\n";

		cout<<"\nPlease enter which burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease enter quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: price += 180*quantity;
			break;

			case 2: price += 150*quantity;
			break;

			case 3: price += 160*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1) "<<sand1<<" Tk.210"<<"\n";
		cout<<"2) "<<sand2<<" Tk.160"<<"\n";
		cout<<"3) "<<sand3<<" Tk.150"<<"\n";

		cout<<"\nPlease enter which sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease enter quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: price += 210*quantity;
			break;

			case 2: price += 160*quantity;
			break;

			case 3: price += 150*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<sand2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1) "<<pasta1<<" Tk.170"<<"\n";
		cout<<"2) "<<pasta2<<" Tk.200"<<"\n";
		cout<<"3) "<<pasta3<<" Tk.180"<<"\n";

		cout<<"\nPlease enter which pasta you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease enter quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: price += 170*quantity;
			break;

			case 2: price += 200*quantity;
			break;

			case 3: price += 180*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<pasta1;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<"  "<<pasta2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<pasta3;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}

 }
}
	else if(choice==5)
	 {
		cout<<"\n1) "<<bir1<<" Tk.160"<<"\n";
		cout<<"2) "<<bir2<<" Tk.220"<<"\n";
		cout<<"3) "<<bir3<<" Tk.150"<<"\n";

		cout<<"\nPlease enter which biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease enter quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: price += 160*quantity;
			break;

			case 2: price += 220*quantity;
			break;

			case 3: price += 150*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<bir1;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<"  "<<bir2;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your order---------\n";
			 cout<<""<<quantity<<" "<<bir3;
			 cout<<"\nYour total bill is "<<price<<"\nYour order will be delivered in 40 Minutes";
			 cout<<"\nThank you for ordering from BD Fast Food.\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please select right option: \n";
				cout<<"\nWould you like to start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			else if(gotostart=='N' || gotostart=='n')
				{
				  cout<<"\nThank you so much for your order."<<endl;
				  return 0;
			}
			}
}

