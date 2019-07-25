/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*~~~~~~~~~~~~~~~KIAK'S MOST AWESOME BUILD OF THE CENTURy!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*~~~~~~~~~~~~~~~ALL OF IT (CODING AND DEBUGGING) DONE BY THE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*~~~~~~~~~~~~~~~MOST AWESOME TEAM MEMBER OF ALL TIME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**//**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>         //To talk to the computer
#include <iomanip>          //setw and setfill
#include <stdlib.h>         //exiting program with (exit) function and some colours
#include <string>           //nylon string
#include <windows.h>        //windows header for other colours
#include <fstream>          //to read and write .txt files

using namespace std;

void MainMenu();
void ConfirmChoiceOne();
void AD();
void Password();
void AddCustomer();
void DeleteCustomer();
void DeleteName();
void DeleteContactNumber();
void DeletingCustomerNotFound();
void SearchName();
void SearchNumber();
void AllCustomers();
void credits();


int main(){
	/*

	This is the old main menu if the scroller one fails.
	Simply remove the slash * at the  start and end of this line comment
	and remove the scroller one to activate.

	int main(){
	system("cls");
	int MainManuChoice;
	bool ValidChoice=false;
	system("Color 8F");
	cout<<"######################################################################################################################################################################\n"<<endl;

	cout<<"\tWWWWWWWW                           WWWWWWWW               lllllll"<<endl;
	cout<<"\tW::::::W                           W::::::W               l:::::l"<<endl;
	cout<<"\tW::::::W                           W::::::W               l:::::l"<<endl;
	cout<<"\tW::::::W                           W::::::W               l:::::l"<<endl;
	cout<<"\t W:::::W           WWWWW           W:::::W eeeeeeeeeeee    l::::l     cccccccccccccccc   ooooooooooo      mmmmmmm    mmmmmmm       eeeeeeeeeeee"<<endl;
	cout<<"\t  W:::::W         W:::::W         W:::::Wee::::::::::::ee  l::::l   cc:::::::::::::::c oo:::::::::::oo  mm:::::::m  m:::::::mm   ee::::::::::::ee"<<endl;
	cout<<"\t   W:::::W       W:::::::W       W:::::We::::::eeeee:::::eel::::l  c:::::::::::::::::co:::::::::::::::om::::::::::mm::::::::::m e::::::eeeee:::::ee"<<endl;
	cout<<"\t    W:::::W     W:::::::::W     W:::::We::::::e     e:::::el::::l c:::::::cccccc:::::co:::::ooooo:::::om::::::::::::::::::::::me::::::e     e:::::e"<<endl;
	cout<<"\t     W:::::W   W:::::W:::::W   W:::::W e:::::::eeeee::::::el::::l c::::::c     ccccccco::::o     o::::om:::::mmm::::::mmm:::::me:::::::eeeee::::::e"<<endl;
	cout<<"\t      W:::::W W:::::W W:::::W W:::::W  e:::::::::::::::::e l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me:::::::::::::::::e"<<endl;
	cout<<"\t       W:::::W:::::W   W:::::W:::::W   e::::::eeeeeeeeeee  l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me::::::eeeeeeeeeee"<<endl;
	cout<<"\t        W:::::::::W     W:::::::::W    e:::::::e           l::::l c::::::c     ccccccco::::o     o::::om::::m   m::::m   m::::me:::::::e"<<endl;
	cout<<"\t         W:::::::W       W:::::::W     e::::::::e         l::::::lc:::::::cccccc:::::co:::::ooooo:::::om::::m   m::::m   m::::me::::::::e"<<endl;
	cout<<"\t          W:::::W         W:::::W       e::::::::eeeeeeee l::::::l c:::::::::::::::::co:::::::::::::::om::::m   m::::m   m::::m e::::::::eeeeeeee"<<endl;
	cout<<"\t           W:::W           W:::W         ee:::::::::::::e l::::::l  cc:::::::::::::::c oo:::::::::::oo m::::m   m::::m   m::::m  ee:::::::::::::e"<<endl;
	cout<<"\t            WWW             WWW            eeeeeeeeeeeeee llllllll    cccccccccccccccc   ooooooooooo   mmmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee"<<endl;

	cout<<"\n######################################################################################################################################################################"<<endl;


	cout<<"\n\n\n\n\n\tWhat do you want to do?"<<endl;

	cout<<"\n\t\t1 - Add / Delete  (requires login)"<<endl;
	cout<<"\t\t2 - Search (by name)"<<endl;
	cout<<"\t\t3 - Search (by contact number)"<<endl;
	cout<<"\t\t4 - Show all"<<endl;

	cout<<"\n\tOr enter any other key to end program\n\n"<<endl;
	while (!ValidChoice){
	cin>>MainManuChoice;

	if(MainManuChoice==1){ConfirmChoiceOne();}
	else if(MainManuChoice==2){SearchName();}
	else if(MainManuChoice==3){SearchNumber();}
	else if(MainManuChoice==4){AllCustomers();}
	else{credits();}
	}
	}
	*/
	
	system("Color aa");         //this seems to clear the screen colour, so I just used it.

	string MenuSideBySide[5] = { "Add/Delete Customers (requires login)", "Search (by name)", "Search (by number)","Show All Customers", "Exit" };
	int pointer = 0;            //pointer initial value is 0

	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);           //set text colour to 'yellow'

		cout << "######################################################################################################################################################################\n" << endl;
		cout << "\t WWWWWWWW                           WWWWWWWW               lllllll                                                                                                     " << endl;
		cout << "\t W::::::W                           W::::::W               l:::::l                                                                                                     " << endl;
		cout << "\t W::::::W                           W::::::W               l:::::l                                                                                                     " << endl;
		cout << "\t W::::::W                           W::::::W               l:::::l                                                                                                     " << endl;
		cout << "\t  W:::::W           WWWWW           W:::::W eeeeeeeeeeee    l::::l     cccccccccccccccc   ooooooooooo      mmmmmmm    mmmmmmm       eeeeeeeeeeee                       " << endl;
		cout << "\t   W:::::W         W:::::W         W:::::Wee::::::::::::ee  l::::l   cc:::::::::::::::c oo:::::::::::oo  mm:::::::m  m:::::::mm   ee::::::::::::ee                     " << endl;
		cout << "\t    W:::::W       W:::::::W       W:::::We::::::eeeee:::::eel::::l  c:::::::::::::::::co:::::::::::::::om::::::::::mm::::::::::m e::::::eeeee:::::ee                   " << endl;
		cout << "\t     W:::::W     W:::::::::W     W:::::We::::::e     e:::::el::::l c:::::::cccccc:::::co:::::ooooo:::::om::::::::::::::::::::::me::::::e     e:::::e                   " << endl;
		cout << "\t      W:::::W   W:::::W:::::W   W:::::W e:::::::eeeee::::::el::::l c::::::c     ccccccco::::o     o::::om:::::mmm::::::mmm:::::me:::::::eeeee::::::e                   " << endl;
		cout << "\t       W:::::W W:::::W W:::::W W:::::W  e:::::::::::::::::e l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me:::::::::::::::::e                    " << endl;
		cout << "\t        W:::::W:::::W   W:::::W:::::W   e::::::eeeeeeeeeee  l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me::::::eeeeeeeeeee                     " << endl;
		cout << "\t         W:::::::::W     W:::::::::W    e:::::::e           l::::l c::::::c     ccccccco::::o     o::::om::::m   m::::m   m::::me:::::::e                              " << endl;
		cout << "\t          W:::::::W       W:::::::W     e::::::::e         l::::::lc:::::::cccccc:::::co:::::ooooo:::::om::::m   m::::m   m::::me::::::::e                             " << endl;
		cout << "\t           W:::::W         W:::::W       e::::::::eeeeeeee l::::::l c:::::::::::::::::co:::::::::::::::om::::m   m::::m   m::::m e::::::::eeeeeeee                     " << endl;
		cout << "\t            W:::W           W:::W         ee:::::::::::::e l::::::l  cc:::::::::::::::c oo:::::::::::oo m::::m   m::::m   m::::m  ee:::::::::::::e                     " << endl;
		cout << "\t             WWW             WWW            eeeeeeeeeeeeee llllllll    cccccccccccccccc   ooooooooooo   mmmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee                     " << endl;
		cout << "\n######################################################################################################################################################################" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);           //set text colour to cyan

		cout << "\n\n\n\n\n\tWhat do you want to do?\n\tUse the Up or Down arrow keys to navigate. \n\tPress the 'CTRL' key to enter.\n" << endl;
		/*
		I understand that using cout to show
		this beautiful^[citation needed]^ welcome
		art-text is very tedious, but I
		like seeing a huge 'welcome' when I
		scroll through my codes

		so... yeah
		*/



		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);           //set text colour to white



		for (int i = 0; i < 5; ++i)                                             //int 'i' can have a value 0,1,2,3,4. FIVE values.
		{
			if (i == pointer)                                                   //int 'i' is pointer
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);   //set text colour to green
				cout << MenuSideBySide[i] << endl;                                        //show the pointer as green
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to white
				cout << MenuSideBySide[i] << endl;                                        //show Menu[i] without i<pointer> as 'unhighlighted' (white)
			}
		}



		while (true)                                        // Keeps rerunning
		{
			if (GetAsyncKeyState(VK_UP) != 0)               //When Up-arrow key is pressed,
			{
				pointer -= 1;                               //pointer subtracts 1
				if (pointer == -1)                          //when pointer is value -1,
				{
					pointer = 4;                            //go to bottom (Exit)
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)        //When down-arrow key is pressed,
			{
				pointer += 1;                               //pointer adds 1
				if (pointer == 5)                           //if pointer is value '5',
				{
					pointer = 0;                            //go back to the top (Add/Delete Customers).
				}
				break;
			}
			else if (GetAsyncKeyState(VK_CONTROL) != 0)     //If 'CTRL' is pressed,
			{
				switch (pointer)                            //choose what to do when pointer is at x value.
				{
				case 0:                                 //When (pointer) == 0
				{
					ConfirmChoiceOne();                 //go confirm if user wants to add/delete customer.
					break;
				}
				case 1:                                 //When (pointer) == 1
				{
					SearchName();                       //Go and search name.
					break;
				}
				case 2:                                 //When (pointer) == 2
				{
					SearchNumber();                     //go and search number.
					break;
				}
				case 3:                                 //When (pointer) == 3
				{
					AllCustomers();                     //go show all customers.
					break;
				}
				case 4:                                 //When (pointer) == 4
				{
					credits();                          //go to credits (end).
					break;
				}
				}
				pointer = 5;
			}
		}

		Sleep(130);             //sensitivity of the arrow keys.
	}

	return 0;
}

void ConfirmChoiceOne()
{

	char OptionOneChoice;
	//confirmation before add / delete customers
	cout << "You have chosen to add/delete/edit. This requires a password.\n\n Are you sure you want to continue? (Y/N)" << endl;
	cin >> OptionOneChoice;

	if (OptionOneChoice == 'Y' || OptionOneChoice == 'y'){ Password(); }     //if user press 'Y' or 'y' (both accepted), ask for a password.
	else if (OptionOneChoice == 'N' || OptionOneChoice == 'n'){ main(); }    //if user press 'N' or 'n', go back to the main menu (main())
	else{ ConfirmChoiceOne(); }                                       //if user press any other button, ask for a choice again. Looping by calling the funcion of itself.
}

void Password() 
{
	/*
	OMG
	This void works!
	Shocked am I.
	*/

	system("cls");
	system("color 1F");         //<stdlib.h> at work here. set the console colour to background>blue and foreground>white
	int tries = 0;              //number of tries
	string password;
	cout << "You have 5 (five) attempts to get the right password" << endl;
	while (tries <= 4){            //when number of tries is less than 5


		// makes invisible input
		HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);                     //Makes
		DWORD mode = 0;                                                       //the input
		GetConsoleMode(hStdin, &mode);                                      //invisible
		SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));                //Cool right?


		tries++;                //number of tries increases by one

		cin >> password;



		if (password == "1234")            //my password is here
		{
			SetConsoleMode(hStdin, mode | (ENABLE_ECHO_INPUT));        //re-enable visible text
			cout << "Login Success!" << endl;                               //show sense of achievement
			AD();                                                   //go ask the user if add or delete customer. Go to Void adding and deleting customers.
		}
		else
		{
			cout << "INCORRECT PASSWORD!" << endl;                      //show disappoint
		}

	}
	exit(EXIT_FAILURE);     //Exits the program and gives negative output.
}

void AD()
{
	string ChoiceAD;
	cout << "\n\n\nDo you want to Add or Delete customer?" << endl;
	cin >> ChoiceAD;

	if (ChoiceAD == "Add" || ChoiceAD == "a" || ChoiceAD == "add" || ChoiceAD == "A")
	{
		AddCustomer();
	}           //When user types 'add' or 'Add' or 'a' or 'A', go add customer (ask for name)

	else if (ChoiceAD == "Delete" || ChoiceAD == "d" || ChoiceAD == "delete" || ChoiceAD == "D")
	{
		DeleteCustomer();
	}        //when user types ^blah^ with delete, go delete customer from the long list of names

	else
	{
		cout << "Please enter add/delete to continue" << endl;
		AD();
	}                     //if user types anything besides ^^^, repeat this loop.
}

void AddCustomer()
{

	//Get Customer's Name
	system("color 8A");                                                         //set background>grey foreground>green
	system("cls");                                                              //clear the screen
	cout << "Please enter customer's name.\nDo not enter the same name as the previous records!\n" << endl;
	fstream inFile;

	string name;
	string number;
	int onechick = 0;
	int twochick = 0;
	int threechick = 0;
	int familymeal = 0;
	int drink = 0;                  //int drink is for input, int drinks is for output.
	string request;

	//This is for showing what is currently in the file.
	string outputname;
	int onechicken, twochicken, threechicken, familychick, drinks;
	string outputnumber;
	string outputrequest;


	inFile.open("customers.txt");        //open the file

	if (!inFile){                    //check if can open file or not
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else {
		cout << "Customer name" << setw(20) << "Contact Number" << setw(20) << "Orders" << setw(100) << "Requests" << endl;
		while (!inFile.eof()){
			inFile >> outputname >> outputnumber >> onechicken >> twochicken >> threechicken >> familychick >> drinks >> outputrequest;
			if (inFile.fail())
				break;
			else if (outputname != "delete")
			{
				cout << outputname << setw(20) << outputnumber << setw(15) << onechicken << " one piece chicken" << " " << twochicken << " two piece chicken" << " " << threechicken << " three piece chicken" << " " << familychick << " family meal" << " " << drinks << " drink(s)" << setw(20) << outputrequest << endl;
			}
		}
	}
	inFile.close();

	cin >> name;

	//Get Customer's contact
	cout << "\n\n\n...And customer's contact number?" << endl;
	cin >> number;


	system("cls");
	system("color 8B");

	/*
	This is my order menu
	My awesome order menu
	Please order from my
	order menu~
	*/

	cout << "Please continue to make all your selections by using the item number on the left." << endl;
	cout << "To remove accidental orders, simply enter '-' before the item# to remove that item." << endl;
	cout << endl;
	cout << "When you are finished, enter 'e' to exit." << endl;
	cout << endl;
	cout << endl;
	cout << ".................................MENU..........................................." << endl;
	cout << "Item# | Description-------------------------------------------------------------" << endl;
	cout << "______|_________________________________________________________________________" << endl;
	cout << "[100] | 1 Piece Chicken........................................................." << endl;
	cout << "      |" << endl;
	cout << "[200] | 2 Piece Chicken........................................................." << endl;
	cout << "      |" << endl;
	cout << "[300] | 3 Piece Chicken........................................................." << endl;
	cout << "      |" << endl;
	cout << "[400] | Family Meal - 10 piece chicken with 4 Drinks and 4 Fries................" << endl;
	cout << "      |" << endl;
	cout << "[500] | Drink one-size - option of coke, sprite or root beer...................." << endl;
	cout << "______|_________________________________________________________________________" << endl;
	cout << endl;

	bool done = false;             //bool can be either be a true or false value

	while (done != true){

		char choice;               //I'm defining choice and subChoice
		string subChoice;          //here so it will be 'less complication'

		cin >> subChoice;

		if (subChoice == "100")    { choice = '1'; }
		if (subChoice == "200")    { choice = '2'; }
		if (subChoice == "300")    { choice = '3'; }
		if (subChoice == "400")    { choice = '4'; }
		if (subChoice == "500")    { choice = '5'; }
		if (subChoice == "-100")   { choice = '6'; }
		if (subChoice == "-200")   { choice = '7'; }
		if (subChoice == "-300")   { choice = '8'; }
		if (subChoice == "-400")   { choice = '9'; }
		if (subChoice == "-500")   { choice = '0'; }
		if (subChoice == "e")      { choice = 'e'; }

		switch (choice)      //This is my way of doing things. Changing a string to a char is not really necessary but it really adds lines to the project.
		{
		case '1':
			onechick++;
			break;
		case '2':
			twochick = twochick + 1;
			break;
		case '3':
			threechick++;
			break;
		case '4':
			familymeal = familymeal + 1;
			break;
		case '5':
			drink++;
			break;
		case '6':
			onechick = onechick - 1;        //values (of the orders) here and down become -1 when case if entered
			break;
		case '7':
			twochick = twochick - 1;
			break;
		case '8':
			threechick = threechick - 1;
			break;
		case '9':
			familymeal = familymeal - 1;
			break;
		case '0':
			drink = drink - 1;
			break;
		case 'e':                       //when case 'e', bool done become true and will exit while loop.
			done = true;

		}
	}
	cout << endl;
	cout << endl;
	cout << "You have ordered the following:" << endl;
	cout << "______________________________________" << endl;
	if (onechick>0){ cout << onechick << "\t#100\t1 Piece Chicken" << endl; }
	if (twochick>0){ cout << twochick << "\t#200\t2 Piece Chicken" << endl; }
	if (threechick>0){ cout << threechick << "\t#300\t3 Piece Chicken" << endl; }
	if (familymeal>0){ cout << familymeal << "\t#400\tFamily Meal - 10 piece chicken with 4 Drinks and 4 Fries" << endl; }
	if (drink>0){ cout << drink << "\t#500\tDrink one-size - option of coke, sprite or root beer" << endl; }
	cout << "______________________________________" << endl;
	system("pause");
	system("cls");
	cout << "Request from customer? (Please use '_' for space)" << endl;
	cin >> request;

	cout << "\tCustomer name" << setw(20) << "Contact Number" << setw(20) << "Orders" << setw(100) << "Requests" << endl;

	cout << setw(20) << name << setw(20) << number << setw(10) << onechick << " One piece chicken" << setw(3) << twochick << " Two piece chicken" << setw(3) << threechick << " Three piece chicken" << setw(3) << familymeal << " Family Chicken" << setw(3) << drink << " Drink(s)" << setw(20) << request << endl;

	cout << "\n\nPress Y to save order or N to go back and add a different customer ( NOT SAVING THE CURRENT ONE ! )" << endl;
	cout << "Or press any other key to go back to the main menu" << endl;

	string anotherChoice;
	cin >> anotherChoice;
	if (anotherChoice == "N" || anotherChoice == "n"){ AddCustomer(); }
	else if (anotherChoice == "Y" || anotherChoice == "y")
	{
		inFile.open("customers.txt", fstream::app);
		if (!inFile)
		{
			cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team for more info" << endl;
			system("pause");
			main();
		}
		else
		{

			inFile << name << " " << number << " " << onechick << " " << twochick << " " << threechick << " " << familymeal << " " << drink << " " << request << endl;

			if (inFile.fail()) cout << "Error encountered while adding data!" << endl;

			else cout << "\n\n\nCustomer's order has been saved!\n\n\n\n\n";
		}
		inFile.close();
		Sleep(3000);
		main();
	}
	else cout << "Order not saved!" << endl;
	system("pause");
	main();
}


void DeleteCustomer()
{
	system("cls");
	system("color 3A");

	cout << "How would you want to delete this customer? (Name / Contact Number)" << endl;
	string choice;
	cin >> choice;

	if (choice == "Name" || choice == "name" || choice == "n" || choice == "N")   { DeleteName(); }
	else if (choice == "contact number" || choice == "Contact Number" || choice == "cn" || choice == "CN" || choice == "c" || choice == "C")  { DeleteContactNumber(); }
	else DeleteCustomer();      //else repeat the loop-2147213312, 80042000
}


void DeleteName()
{
	ifstream inFile;
	string name;
	string number;
	int onechick, twochick, threechick, familychick, drink;
	string request;

	inFile.open("customers.txt");

	if (!inFile)
	{
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else
	{
		cout << "Customer name" << setw(20) << "Contact Number" << setw(20) << "Orders" << setw(100) << "Requests" << endl;
		//Header
		while (!inFile.eof())
		{
			inFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;

			if (inFile.fail())
				break;

			else if (name != "delete")
			{
				cout << name << setw(20) << number << setw(15) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(20) << request << endl;
			}
		}

	}
	inFile.close();         //stop showing all customers and close the file

	fstream dFile;

	dFile.open("customers.txt", fstream::in);
	string deletename;
	bool findings = false;

	cout << "\nPlease enter the customer's name that you want to delete:\t";

	cin >> deletename;

	if (!dFile)
	{
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else
	{
		while (!dFile.eof())
		{
			dFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;   //telling the program how the format looks like

			if (dFile.fail()){ break; }

			else if (name == deletename)
			{
				cout << "\n\n" << setw(20) << name << setw(20) << number << setw(20) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(50) << request << endl;
				cout << "Do you want to delete this customer? (Y/N)";
				string confirmation;
				cin >> confirmation;

				if (confirmation == "N" || confirmation == "n")
				{
					cout << "Find another customer or quit? (F = Find / Q = Quit)" << endl;
					string FindQuit;
					cin >> FindQuit;

					if (FindQuit == "F" || FindQuit == "f"){ DeleteCustomer(); }
					else if (FindQuit == "Q" || FindQuit == "q"){ main(); }
				}
				else if (confirmation == "Y" || confirmation == "y")
				{
					name = "delete";
					number = "delete";
					findings = true;
				}
				while (!dFile.eof())
				{
					dFile << name << ' ' << number << ' ' << onechick << ' ' << twochick << ' ' << threechick << ' ' << familychick << ' ' << drink << ' ' << request;
					dFile.close();
				}

			}

		}
	}
	if (!findings)
	{
		DeletingCustomerNotFound();
	}

}


void DeleteContactNumber()
{
	ifstream inFile;
	string name;                    //Declare what I want to show
	string number;
	int onechick, twochick, threechick, familychick, drink;
	string request;

	inFile.open("customers.txt");       //open the file

	if (!inFile){                    //check if can open file or not
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else {
		cout << "Customer name" << setw(20) << "Contact Number" << setw(20) << "Orders" << setw(100) << "Requests" << endl;
		//Header
		while (!inFile.eof()){
			inFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;

			if (inFile.fail())
				break;
			else if (name != "delete")
			{
				cout << name << setw(20) << number << setw(15) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(20) << request << endl;
			}
		}

	}
	inFile.close();         //stop showing all customers and close the file

	fstream dFile;

	dFile.open("customers.txt");
	string deletenumber;
	bool findings = false;

	cout << "\nPlease enter the customer's name that you want to delete:\t";
	cin >> deletenumber;

	if (!dFile)
	{
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else
	{
		while (!dFile.eof())
		{
			dFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;
			if (dFile.fail()){ break; }
			else if (number == deletenumber)
			{
				cout << "\n\n" << setw(20) << name << setw(20) << number << setw(20) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(50) << request << endl;
				findings = true;
				break;
			}
		}
		if (!findings)
		{
			DeletingCustomerNotFound();
		}
		cout << "Do you want to delete this customer? (Y/N)";
		string confirmation;
		cin >> confirmation;
		if (confirmation == "N" || confirmation == "n")
		{
			cout << "Find another customer or quit? (F = Find / Q = Quit)" << endl;
			string FindQuit;
			cin >> FindQuit;

			if (FindQuit == "F" || FindQuit == "f"){ DeleteCustomer(); }
			else if (FindQuit == "Q" || FindQuit == "q"){ main(); }
		}
		else if (confirmation == "Y" || confirmation == "y")
		{
			//Do this part again!
		}
	}

	system("pause");
	main();
}


void DeletingCustomerNotFound(){
	string ContinueOrDelete;
	cout << "The customer that you have entered cannot be found. \n Do you want to continue deleting or go back to main menu? (C = Continue , M = Main Menu)" << endl;
	cin >> ContinueOrDelete;
	if (ContinueOrDelete == "C" || ContinueOrDelete == "c"){ DeleteCustomer(); }
	else if (ContinueOrDelete == "M" || ContinueOrDelete == "m"){ main(); }
	else DeletingCustomerNotFound();


	system("pause");
	main();
}


void SearchName()
{
	system("cls");
	system("color 0E");     //      ~Black and Yellow~

	ifstream inFile;
	string name;
	string number;
	int onechick, twochick, threechick, familychick, drink;
	string request;
	string InputName;
	bool findings = false;

	cout << "Please enter the customer's name:\t";
	cin >> InputName;

	inFile.open("customers.txt");

	if (!inFile){
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else{
		while (!inFile.eof()){
			inFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;

			if (inFile.fail())break;
			else if (name == InputName && name != "delete"){
				cout << setw(20) << name << setw(20) << number << setw(20) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(50) << request << endl;
				findings = true;
				break;
			}

		}
	}
	inFile.close();
	if (!findings){ cout << "The customer that you have entered cannot be found.\nMove along." << endl; }
	system("pause");
	main();
}


void SearchNumber()
{
	system("cls");
	system("color 0E");     //      ~Black and Yellow~

	ifstream inFile;
	string name;
	string number;
	int onechick, twochick, threechick, familychick, drink;
	string request;
	string InputNumber;
	bool findings = false;

	cout << "Please enter the customer's contact number\t";
	cin >> InputNumber;

	inFile.open("customers.txt");

	if (!inFile){
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else{
		while (!inFile.eof()){
			inFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;

			if (inFile.fail())break;
			else if (number == InputNumber){
				cout << setw(20) << name << setw(20) << number << setw(20) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(50) << request << endl;
				findings = true;
				break;
			}

		}
	}
	inFile.close();
	if (!findings){ cout << "The customer that you have entered cannot be found.\nMove along." << endl; }
	system("pause");
	main();
}


void AllCustomers()
{
	system("cls");
	system("color 0E");     //      ~Black and Yellow~
	ifstream inFile;
	string name;
	string number;
	int onechick, twochick, threechick, familychick, drink;
	string request;

	inFile.open("customers.txt");

	if (!inFile){
		cout << "Unable to open file.\n\nPlease contact KIAK's awesome debugging team." << endl;
		system("pause");
		main();
	}
	else {
		cout << "Customer name" << setw(20) << "Contact Number" << setw(20) << "Orders" << setw(100) << "Requests" << endl;

		while (!inFile.eof()){
			inFile >> name >> number >> onechick >> twochick >> threechick >> familychick >> drink >> request;

			if (inFile.fail())
				break;
			else if (name != "delete")       //If name is not delete then..
			{
				cout << name << setw(20) << number << setw(15) << onechick << " one piece chicken" << " " << twochick << " two piece chicken" << " " << threechick << " three piece chicken" << " " << familychick << " family meal" << " " << drink << " drink(s)" << setw(25) << request << endl;
			}
		}

	}
	inFile.close();         //stop showing all customers and close the file
	cout << "\n\n\n\n\n";
	system("pause");
	main();
}


void credits()
{
	//end with gusto
	system("cls");
	system("Color 0B");     //colour background>black foreground>cyan
	cout << "\n\n" << setfill(':') << setw(200) << ":" << endl;
	cout << setfill('x') << setw(200) << "x" << endl;
	cout << "\t\t\t\t\t  ,ad####ba,  ########ba  ########### ########ba,   ## ############ ad#####ba  " << endl;
	cout << "\t\t\t\t\t d#*'    `*#b ##      *#b ##          ##      `*#b  ##      ##     d#*     *#b " << endl;
	cout << "\t\t\t\t\td#'           ##      ,#P ##          ##        `#b ##      ##     Y#,         " << endl;
	cout << "\t\t\t\t\t##            ##aaaaaa#P' ##aaaaa     ##         ## ##      ##     `Y#aaaaa,   " << endl;
	cout << "\t\t\t\t\t##            ##****##'   ##*****     ##         ## ##      ##       `*****#b, " << endl;
	cout << "\t\t\t\t\tY#,           ##    `#b   ##          ##         #P ##      ##             `#b " << endl;
	cout << "\t\t\t\t\t Y#a.    .a#P ##     `#b  ##          ##      .a#P  ##      ##     Y#a     a#P " << endl;
	cout << "\t\t\t\t\t  `*Y####Y*'  ##      `#b ########### ########Y*'   ##      ##      *Y#####P*  " << endl;
	cout << setfill('x') << setw(200) << "x" << endl;
	cout << setfill(':') << setw(200) << ":" << endl;
	cout << "\n\n\n" << setfill(' ') << setw(81) << "Team KIAK\n" << endl;
	cout << setw(82) << "- Donald Lim" << endl;                   //The one who is awesome and did most of the work
	cout << setw(85) << "- Tan Chin Hang" << endl;                //Thanks (in advance) for the treat
	cout << setw(81) << "- Shahir Ng" << endl;                    //Thanks (in advance) for the treat
	cout << setw(81) << "- Glenn Ang" << endl;                    //Thanks (in advance) for the treat
	cout << "\n\n\n\n\n\n\n\n\n\n\nVersion alpha 0.9\n\n" << endl;

	Sleep(15000);       //Allow time for thanking audience ~15sec (cause im too lazy to use <ctime> )
	exit(EXIT_SUCCESS); //Close the program with success
}
