


			 // Void files and Void staffRecruit() not done yet. Void files regarding reading and updating, staffRecruit() regarding deleting staffs.
			 
             // Updating specific details from text files within a line problematic. Needed for updating customers.txt when user buys new stuffs and need to overide
				  // certain specific details.
             



             // Sales Application


#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<Windows.h>

 
using namespace std;


void user(); void salesmans();

void registration(); void customerLogin();
void salesportal(); void staffAccess(); void staffRecruit(); void customersPurchaces(); void staffRecruitPortal(); //for security to recruit and fire staff (Only for the boss)

void viewcarriertype(); void viewcustomers(); void viewphoneplans(); void viewphonetype(); void viewsales();
void updatecarriertype(); void updatecustomers(); void updatephoneplans(); void updatephonetype(); void updatesales(); void updatesalesman();

void salesmansChoice(); void staffAccessChoice();

// updatecustomers() for updating their status when the make payments or buying new products.


fstream carrier, customers, phonetype, phoneplans, salesman, sales, boss;


// salesman.txt for staffs' membership. Sales.txt for sales and product statistics.


   // Global Declaration
int a = 0, age, b, c, i = 1;                                         // i for counters in txt lists. a is for pointer.

string name, sex, password, nameinput, passwordinput, shopname, shopnameinput, passwordman, passwordmaninput,Email;
string BossInput, Boss, BossPasswordInput, BossPassword;

string carriername; //names for carrier type products



int main()

{
	system("cls");
	string Menu[3] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Consumer",
		"                  Staff", "                  Exit" };

	
	while (true)
	{

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 3; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // change colour to purple
				cout << Menu[I] ;
			}

			else 
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //change colour to blue
				cout << Menu[I] ;
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 2;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 3)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{user(); break; }
				case 1:
				{salesmans(); break; }
				case 2:
				{exit(EXIT_SUCCESS); }
				}
				a = 3;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys

	}

	return 0;
	
}



void user()
{

	system("cls");
	system("Color aa");
	string Menu[3] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Register",
		"                  Login","                   Index"  };

	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 3; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
				cout << Menu[I] ;
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I] ;
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 2;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 3)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{registration(); break; }
				case 1:
				{customerLogin(); break; }
				case 2:
				{main(); break; }
				}
				a = 3;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys
	}
}
void registration()
{
	system("cls");

	// Register in details



	//.....................................................................



	// Software Mechanism

	customers.open("customers.txt", fstream::in);
	while (!customers.eof())
	{
		customers >> i >> "..." >> "..." >> "...";                    // "..." denotes variables to be read.
	}
	customers.close();

	i = i + 1;                                                        // Counter "i" added to add one more customer.

	customers.open("customers.txt", fstream::app);
	customers << i << "..." << "...";                                 // "..." denotes variables to be input.
	cout << "\nRegistered. ";
	customers.close();

	user();
}
void customerLogin()

{
	//Login

	system("cls");

	cout << "\n Name : ";
	cin >> nameinput;
	cout << "\nPassword";
	cin >> passwordinput;

	customers.open("customers.txt", fstream::in);
	while (!customers.eof() && true)
	{
		customers >> i >> "..." >> "...";

		if (password == passwordinput && name == nameinput)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);   //  change colour to green
			cout << "\n\tAccess Granted";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to white
			break;

			cout << name << "..." << "..." << endl;
			cout << "..." << "..." << endl;               // Displays desired stuffs

			customers.close();


			// making any self-payments? or doing any odering and need to see menu of phones and plans?

		}

		
	}





	if (password != passwordinput || name != nameinput)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
		cout << "\n\n\t\tAccess Denied";

		customers.close();

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to white

	}





	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to white


	system("cls");
	string Menu[2] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Login",
		"                  Main Menu", };

	while (true)
	{

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 2; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // change colour to purple
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //change colour to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 1;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 2)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{customerLogin(); break; }
				case 1:
				{user(); break; }

				}
				a = 2;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys

	}

}


void salesmans()
{

	//Login for Salesman
	system("cls");


	cout << "\n Name of Shop : ";
	cin >> shopnameinput;
	cout << "\nPassword : ";
	cin >> passwordmaninput;

	salesman.open("salesman.txt", fstream::in);
	while (!salesman.eof() && true)
	{
		salesman >> i >> name >> passwordman >> shopname >> Email;

		if (passwordman == passwordmaninput && shopname == shopnameinput)
		{
			cout << "\n\tAccess Granted";
			break;

			salesman.close();

			salesportal();                                            // Call in function for staff's uses.


		}

	}


	if (passwordman != passwordmaninput || shopname != shopnameinput)
	{
		cout << "\n\tAccess Denied";
		salesman.close();
		salesmansChoice();                                   // prompt user what to do
	}



}
void salesportal()
{
	system("cls");
	string Menu[3] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Access to Product and Consumer Datas",
		"                  Staff Recruit, Resign and Firing", "                  Logout" };

	while (true)
	{
		system("cls");                                                  // So 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 3; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 2;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 3)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{staffAccess(); break; }                    // To access customers' and product details
				case 1:
				{staffRecruitPortal(); break; }                   // Recruit and firing new staffs
				case 2:
				{salesmans(); break; }
				}
				a = 3;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys
	}
}
void staffAccess()
{

	system("cls");
	string Menu[5] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             View Product Details",
		"                  Update Product Details", "                  Attending Customers",
		"\n\n                             Main Menu ( Portal )", "                  Log0ut" };

	while (true)
	{
		system("cls");                                                  // So 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 5; I = I + 1)
		{
			
			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 4;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 5)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{
					cout << endl << "Carrier Types" << endl; viewcarriertype(); 
					cout << endl << "Available Phone Plans" << endl; viewphoneplans(); 
					cout << endl << "Available Phone Types" << endl; viewphonetype(); 
					cout << endl << "Sales Statistics" << endl; viewsales();
					cout << endl << "Customers' Details" << endl << endl << endl << endl << endl << endl; viewcustomers();

					system("pause");
					break;
					staffAccess();

				} //view all details...
				case 1: // Update product details
				{
					updatesales();
					break;                                                                                                 // Functions unknown. To be specified.
				} 
				case 2:// customers buying goods...
				{
					staffAccessChoice();
					break;
				}
				case 3:
				{
					salesportal();
					break; 
				}
				case 4:
				{
					salesmans(); 
					break;
				}
				}
				a = 5;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys
	}
}
// Access all Infomation of the  customers, and all products. Must go back to salesportal() when done without logging out. menu: logout[salesman()] or go back to main menu[salesportal()].
void staffRecruitPortal()
{

	//Login for Salesman
	system("cls");


	cout << "\n Boss Username : ";
	cin >> BossInput;
	cout << "\nPassword : ";
	cin >> BossPasswordInput;

	boss.open("boss.txt", fstream::in);
	while (!boss.eof() && true)
	{
		boss >> BossPassword >> Boss;

		if (BossPassword == BossPasswordInput && Boss == BossInput)
		{
			cout << "\n\tAccess Granted";
			break;

			boss.close();

			staffRecruit();                                            // Call in function for Recruiting and Firing staffs.


		}

	}


	if (BossPassword != BossPasswordInput || Boss != BossInput)
	{
		cout << "\n\tAccess Denied";
		boss.close();
		system("pause");
		salesportal();                                   
	}



}
// Boss password for recruiting and firing staff
void staffRecruit()
{
	system("cls");
	string Menu[3] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Recruiting",
		"                  Firing and Resigning", "                  Exit to Main Portal" };


	while (true)
	{

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 3; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // change colour to purple
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //change colour to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 2;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 3)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:                    // Recruiting Staff ( Appending & adding new details of recruits into void salesman();
				{
					system("cls");

					salesman.open("salesman.txt", fstream::in);
					while (!salesman.eof())
					{salesman >> i >> "..." >> "...";}
					salesman.close();

					i = i + 1;
					
					salesman.open("name.txt", fstream::app);
					
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEnter name : ";
					cin >> nameinput;name = nameinput;
					cout << "\nNew Password : ";
					cin >> passwordmaninput; passwordman = passwordmaninput;
					cout << "\n Name of Shop : ";
					cin >> shopnameinput; shopname = shopnameinput;
					cout << "\n Email : ";
					cin >> Email;

					cout << endl << endl << name << endl << passwordman << endl << shopname << endl << Email;
					
					salesman << endl << i << passwordman << shopname << Email;
					
					salesman.close();
					system("pause");
					staffRecruit();
					break;
				}
				case 1:
				{salesmans(); break; }       // deleteling details from textfiles problematic
				case 2:
				{salesportal(); }
				}
				a = 3;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys

	}


}
// Recruit, resign and fire staffs.   NEEDS TO BE DONE PROBLEMATIC
void customersPurchaces()
{
	system("cls");
	string Menu[9] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Phone Types",
		"                       Phone Carriers", "                         Phone Plans", "\n\n                             Phone Types and Carriers",
		"          Phone Types and Plans", "                  Phone Carriers and Plans", "\n\n                             All of the Above",
		"                  Making Seperate Purchases", "              Back to Menu and Logout Customer" };

	while (true)
	{
		system("cls");                                                  // So 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 9; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 8;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 9)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{viewcarriertype(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                    //1
				case 1:
				{viewphonetype(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                   //2
				case 2:
				{viewphoneplans(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                      //3
				case 3:
				{viewphonetype(); viewcarriertype(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                      //12
				case 4:
				{viewphonetype(); viewphoneplans(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                      //13
				case 5:
				{ viewcarriertype(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                      //23
				case 6:
				{viewcarriertype(); viewphonetype(); viewphoneplans(); updatecustomers();
				system("pause"); customersPurchaces(); break; }                      //123
				case 7:
				{customersPurchaces(); system("pause"); break; }                      //making anymore forgotten purchases... rerun customersPurchaces()
				case 8:
				{salesportal(); system("pause"); break; }                      //logout
				}
				a = 9;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys
	}
}
// Attending to customers making purchases... Progress hindered due to unspecified requirements of details such as product name and costs.



void salesmansChoice()
{

	
	string Menu[2] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Re-Login",
		"                  Home"};


	while (true)
	{

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 2; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // change colour to purple
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //change colour to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 1;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 2)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{salesmans(); break; }
				case 1:
				{main(); break; }
				
				}
				a = 2;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys

	}



}

void staffAccessChoice()
{

	//Login

	system("cls");

	cout << "\n Name of Customer : ";
	cin >> nameinput;
	cout << "\nCustomer Password";
	cin >> passwordinput;

	customers.open("customers.txt", fstream::in);
	while (!customers.eof() && true)
	{
		customers >> i >> "..." >> "...";

		if (password == passwordinput && name == nameinput)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);   //  change colour to green
			cout << "\n\tAccess Granted";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to white
			break;

			customers.close();

			customersPurchaces();


			// making any payments? or doing any oderring and need to see menu of phones and plans?

		}


	}


	if (password != passwordinput || name != nameinput)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
		cout << "\n\n\t\tAccess Denied";

		customers.close();

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to white

	}



	// Rerun for logging in.


	system("cls");
	system("Color aa");
	string Menu[2] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Relogin",
		"                  Back to Staff Main Menu"};

	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 2; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // change colour to red
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 1;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 2)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{staffAccessChoice(); break; }
				case 1:
				{staffAccess(); break; }
				}
				a = 2;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys
	}

}
// CustomerPurchaces rerun choice for case 2




// Samy and Satish to do the editing and specifications.   NEEDS TO BE DONE


void viewcarriertype()
{
	carriertype.open("carriertype.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		while (!myFile.eof())
		{
			carriertype >> name >> salary;
			if (myFile.fail())
				break; cout << "Error";
			else
			{
				cout << name << " " << salary << endl;
			}
		}
	}
	carriertype.close();
}


void viewcustomers()
{
	customers.open("customers.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		while (!myFile.eof())
		{
			customers >> name >> salary;
			if (myFile.fail())
				break; cout << "Error";
			else
			{
				cout << name << " " << salary << endl;
			}
		}
	}
	customers.close();
}


void viewphoneplans()
{
	phoneplans.open("phoneplans.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		while (!myFile.eof())
		{
			phoneplans >> name >> salary;
			if (myFile.fail())
				break; cout << "Error";
			else
			{
				cout << name << " " << salary << endl;
			}
		}
	}
	phoneplans.close();
}


void viewphonetype()
{
	phonetype.open("phonetype.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		while (!myFile.eof())
		{
			phonetype >> name >> salary;
			if (myFile.fail())
				break; cout << "Error";
			else
			{
				cout << name << " " << salary << endl;
			}
		}
	}
	phonetype.close();
}


void viewsales()
{
	sales.open("sales.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		while (!myFile.eof())
		{
			sales >> name >> salary;
			if (myFile.fail())
				break; cout << "Error";
			else
			{
				cout << name << " " << salary << endl;
			}
		}
	}
	sales.close();
}





void updatecarriertype()
{
	carrier.open("carriertype.txt", fstream::in);
	while (!carrier.eof())
	{
		carrier >> i >> carriername >> "..." >> "...";                    // "..." denotes variables to be read.
	}
	carrier.close();

	i = i + 1;                                                        // Counter "i" added to add one more customer.


	carrier.open("carriertype.txt", fstream::app);
	if (!carrier)
		cout << "Unable to open file in append mode";
	else
	{
		cout << "Enter new Product name : ";
		cin >> carriername;

		carrier << endl <<i<< carriername;   // For example...
	}
	carrier.close();
}


void updatecustomers()
{
	customers.open("customers.txt", fstream::app);
	if (!customers)
		cout << "Unable to open file in append mode";
	else
	{
		
	}
	customers.close();
}


void updatephoneplans()
{
	phoneplans.open("phoneplans.txt", fstream::app);
	if (!myFile)
		cout << "Unable to open file in append mode";
	else
	{
		int i = 0;
		while (i<3)
		{
			cout << "Enter name and salary: ";
			cin >> name >> salary;
			phonetype << name << " " << salary << endl;
			i++;
		}
		cout << "Data saved!" << endl;
	}
	phoneplans.close();
}


void updatephonetype()
{
	phonetype.open("phonetype.txt", fstream::app);
	if (!myFile)
		cout << "Unable to open file in append mode";
	else
	{
		int i = 0;
		while (i<3)
		{
			cout << "Enter name and salary: ";
			cin >> name >> salary;
			phonetype << name << " " << salary << endl;
			i++;
		}
		cout << "Data saved!" << endl;
	}
	phonetype.close();
}


void updatesales()
{
	sales.open("sales.txt", fstream::app);
	if (!myFile)
		cout << "Unable to open file in append mode";
	else
	{
		int i = 0;
		while (i<3)
		{
			cout << "Enter name and salary: ";
			cin >> name >> salary;
			sales << name << " " << salary << endl;
			i++;
		}
		cout << "Data saved!" << endl;
	}
	sales.close();
}


void updatesalesman()
{
	salesman.open("salesman.txt", fstream::app);
	if (!myFile)
		cout << "Unable to open file in append mode";
	else
	{
		int i = 0;
		while (i<3)
		{
			cout << "Enter name and salary: ";
			cin >> name >> salary;
			salesman << name << " " << salary << endl;
			i++;
		}
		cout << "Data saved!" << endl;
	}
	salesman.close();
}


