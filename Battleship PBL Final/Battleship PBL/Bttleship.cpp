





#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;
void CC(int);


void setup(); void outscreen1(); void outscreen2(); void shipD2(int rw,int cl); 
void shipD(int choiceR, int choiceC); void bomb(int choiceR,int choiceC); void bomb2(int Brw,int Bcl);

int row(); int column(); int scan();
int scan2(); int game(string P1,string P2); int game2(string P1,string CPU);


const int sz = 100;
string grid[15][15], grid2[14][15], ID[sz], Poo[sz], PW[sz], login1, pass1, login2, pass2, P1, P2, Id, pass, CPU;
int cl, rw, shipG[15][15], shipG2[15][15], hit2 = 0, win = 0, win2 = 0, Wn[sz], Ls[sz], PT, PT2, RN;

int main()
{
	int Des,i=0,num=0,IDok,PSok,a=0,b=1,c=0;
	fstream Pfile;
	Pfile.open("Accounts.txt", fstream::in);
	if(!Pfile)
		cout<<"unable to find file";
	else
	{
		while(!Pfile.eof())
		{
			Pfile>>ID[i]>>Poo[i]>>Wn[i]>>Ls[i];
			if(Pfile.fail())
				{break;
			cout<<"fail";}
			else
			i++;
		}
	}
	Pfile.close();
	 num=i;
	
	cout<<"Please enter your choice "<<endl;
	cout<<"1:Play Game"<<endl<<"2:Register"<<endl<<"3:Check Score"<<endl<<"4:Quit game"<<endl;
	cin>>Des;
	while ( Des<1 || Des>=5)//selection
	{
		system("pause");
		return 0;
	}
if(Des ==1)
	{	system("cls");
		cout<<"Select your game choice :"<<endl;
		cout<<"1.PVP"<<endl;
		cout<<"2.VS CPU"<<endl;
		cout<<"3.BACK"<<endl;
		cin>>a;

		while(a<1 || a>=4)
		{	cout<<"Please select again!"<<endl;
			cin>>a;
		}
		if(a==1)
		{	system("cls");
			cout<<"Player 1 please enter ID\n";//player 1
		cin>>Id;
		cout<<"Player 1 please enter Password\n";
		cin>>pass;
		i=0;


		while(i<num)
		{
	IDok=Id.compare(ID[i]);
	PSok=pass.compare(Poo[i]);
	if(IDok == 0 && PSok == 0)
	{ 	P1=ID[i];
		PT=i;
		goto next;}
	i++;
		}
		cout<<"wrong password";
		system("pause");
		return 0;
next:
		system("cls");
		cout<<"Player 2 please enter ID\n";//player 2
		cin>>Id;
		cout<<"Player 2 please enter Password\n";
		cin>>pass;
		i=0;
		while (i<num)
		{
	IDok=Id.compare(ID[i]);
	PSok=pass.compare(Poo[i]);
	if(IDok == 0 && PSok == 0)
	{	P2=ID[i];
		PT2=i;
		goto next2;
	}
	i++;
		}
		cout<<"bobo";
		system("pause");
		return 0;
next2:
		i=0;
		while(i<num)
			{PW[i]=Poo[i];
		i++;}
		system("cls");
		cout<<"WELCOME TO WORLD OF BATTLE SHIPS !!!!!!!!!!!!!!!!!!!!!"<<endl;
		game(P1,P2);
		if(win == 8)
		{cout<<"Player 1 wins";
		Wn[PT]++;
		Ls[PT2]++;}
	else if(win2 == 8)
		{cout<<"Player 2 wins";
		Wn[PT2]++;
		Ls[PT]++;}
	else{cout<<"error";}
	system("pause");
			Pfile.open("Accounts.txt", fstream::out);
	if(!Pfile)
		cout<<"unable to find file";
	else
	{
		i=0;
		while(i<num)
		{
			Pfile<<ID[i]<<" "<<PW[i]<<" "<<Wn[i]<<" "<<Ls[i]<<endl;
			if(Pfile.fail())
				{break;
			cout<<"fail";}
			else
			i++;
		}
	}
	Pfile.close();
	
		}
	if(a==2)//VS CPU
		{system("cls");
	cout<<"Player 1 please enter ID"<<endl;
	cin>>Id;
	cout<<"Player 1 enter password"<<endl;
	cin>>pass;
	i=0;
	while(i<num)
	{
		IDok=Id.compare(ID[i]);
		PSok=pass.compare(Poo[i]);
		if(IDok==0 && PSok==0)
		{	P1=ID[i];
			PT=i;
			goto next3;}
		i++;
	}
	cout<<"Wrong Password";
	system("pause");
	return 0;

next3:
	i=0;
	while(i<num){PW[i]=Poo[i];
	i++;}
	cout<<"WELCOME PLAYER "<<ID[i]<<endl;
	system("pause");
	system("cls");
	cout<<"WELCOME TO WORLD OF BATTLE SHIPS !!!!!!!!!!!!!!!!!!!!!"<<endl;
	game2(P1,CPU);
	if(win == 8)
		{cout<<"Player 1 wins";
		Wn[PT]++;
		Ls[PT2]++;}
	else if(win2 == 8)
	{cout<<"CPU wins";}
	else{cout<<"error";}
	system("pause");
	Pfile.open("Accounts.txt", fstream::out);
	if(!Pfile)
		cout<<"unable to find file";
	else
	{
		i=0;
		while(i<num)
		{	Pfile<<ID[i]<<" "<<PW[i]<<" "<<Wn[i]<<" "<<Ls[i]<<endl;
			if(Pfile.fail()){break;}
			else
			i++;
			}
		}
Pfile.close();
	
		}
	
	else
	{	system("cls");
		return main();}

	}
else if(Des ==2)
	{	system("cls");
		cout<<"Register :"<<endl;
		Pfile.open("Accounts.txt", fstream::app);
	if(!Pfile)
		cout<<"unable to find file";
	else
	{
		string ruser,rpass;
		cout<<"please enter your username ";
		cin>>ruser;
		cout<<"please enter your password";
		cin>>rpass;
		Pfile<<ruser<<" "<<rpass<<" 0 0"<<endl;
	}
		system("pause");
		return 0;
	}
else if(Des ==3)
	{system("cls");
	cout<<"SCORE BOARD"<<endl;
	cout<<fixed<<left<<setw(7)<<"No."<<setw(15)<<"ID"<<setw(15)<<"Win"<<"Lose"<<endl;
	for(i=0;i<10;i++)
	{cout<<setw(7)<<b<<setw(15)<<ID[i]<<setw(15)<<Wn[i]<<Ls[i]<<endl;
	b++;}
	system("pause");
	system("cls");
	return main();
}
else
	return 0;
}

int game(string p1,string p2)
{

	int ship=0,choiceR,choiceC;
	const int sz=15;
	string co[sz],r[sz];
	setup();//setup map

outscreen1();// set player 1 ship location
cout<<endl;
cout<<P1<<" set ship"<<endl; 
choiceR=row();
choiceC=column();
shipD(choiceR,choiceC);
system("cls");
outscreen2();// set player 2 ship location
cout<<endl;
cout<<P2<<" set ship"<<endl; 
choiceR=row();
choiceC=column();
shipD2(choiceR,choiceC);
system("cls");
	while(win < 8 && win2 < 8)
{	


outscreen2();//player 1 att
cout<<endl<<"Player 1 attack bomb"<<endl;
choiceR=row();
choiceC=column();
bomb(choiceR,choiceC);
system("cls");
win=scan();
outscreen2();
cout<<win;
system("pause");
system("cls");

outscreen1();//player 2 att
cout<<endl<<"Player 2 attack"<<endl;
choiceR=row();
choiceC=column();
bomb2(choiceR,choiceC);
system("cls");
win2=scan2();
outscreen1();
cout<<win2;
system("pause");
system("cls");
	}
	return 0;
}
int game2(string P1,string CPU)
{int ship=0,choiceR,choiceC;
	const int sz=15;
	string co[sz],r[sz];
	srand(time(NULL));
	setup();//setup map

outscreen1();// set player 1 ship location
cout<<endl;
cout<<P1<<" set ship"<<endl; 
choiceR=row();
choiceC=column();
shipD(choiceR,choiceC);
system("cls");
outscreen2();// CPU SET ship location
cout<<endl;
cout<<"CPU set ship"<<endl; 
choiceR=rand()%14;
choiceC=rand()%14;
shipD2(choiceR,choiceC);
system("cls");
	while(win < 8 && win2 < 8)
{	


outscreen2();//player 1 att
cout<<endl<<"Player 1 attack bomb"<<endl;
choiceR=row();
choiceC=column();
bomb(choiceR,choiceC);
system("cls");
win=scan();
outscreen2();
cout<<win;
system("pause");
system("cls");

outscreen1();//CPU att
cout<<endl<<"CPU attack"<<endl;
choiceR=rand()%14;
choiceC=rand()%14;
bomb2(choiceR,choiceC);
system("cls");
win2=scan2();
outscreen1();
cout<<win2;
system("pause");
system("cls");
	}
	return 0;
}


void CC(int c)
{HANDLE  hc;
	hc = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc, c);
}
void setup()
{	for(rw=0;rw<15; rw++)
	{	
	for(cl=0;cl<15; cl++)
	{
		grid[rw][cl]="[_]";
	}
	}

	for(rw=0;rw<15; rw++)
	{	
	for(cl=0;cl<15; cl++)
	{
		grid2[rw][cl]="[_]";
	}
	}

}
void outscreen1()
{
	cout<<fixed<<left<<setw(5)<<" ";
	for(cl=0;cl<15;cl++)
	{
		cout<<setw(3)<<cl;
	}
	cout<<endl;
for (rw=0; rw<15; rw++)
{
	cout<<setw(4)<<rw;
	for(cl=0; cl<15; cl++)
	{
		cout<<setw(2)<<grid[rw][cl];
	}
	cout<<endl;
}
}
void outscreen2()
{
	cout<<fixed<<left<<setw(5)<<" ";
	for(cl=0;cl<15;cl++)
	{
		cout<<setw(3)<<cl;
	}
	cout<<endl;
for (rw=0; rw<15; rw++)
{
	cout<<setw(4)<<rw;
	for(cl=0; cl<15; cl++)
	{
		cout<<grid2[rw][cl];
	}
	cout<<endl;
}
}
void shipD(int rw,int cl)
{
	int rwS,cwS,cwA;
	rwS=rw+4;
	cwS=cl+2;
	cwA=cl;
	for(rw=rw; rw<=rwS; rw++)
	{
		cl=cwA;
		for(cl=cl; cl<cwS; cl++)
		{
	shipG[rw][cl]=1;
		}
	}
	system("cls");
}
void shipD2(int rw,int cl)
{
	int rwS,cwS,cwA;
	rwS=rw+4;
	cwS=cl+2;
	cwA=cl;
	for(rw=rw; rw<=rwS; rw++)
	{
		cl=cwA;
		for(cl=cl; cl<cwS; cl++)
		{
	shipG2[rw][cl]=1;
		}
	}
	system("cls");
}
void bomb(int Brw,int Bcl)
{
	int bomb[15][15];
	bomb[Brw][Bcl]= 1;
	if(shipG2[Brw][Bcl] == bomb[Brw][Bcl])
		{
			CC(2);
	grid2[Brw][Bcl]="[X]";
	}
	else
		{CC(7);
		grid2[Brw][Bcl]="[O]";
	}
}
void bomb2(int Brw,int Bcl)
{
	int bomb2[15][15];
	bomb2[Brw][Bcl]= 1;
	if(shipG[Brw][Bcl] == bomb2[Brw][Bcl])
		{
			CC(2);
	grid[Brw][Bcl]="[X]";
	}
	else
		{CC(7);
		grid[Brw][Bcl]="[O]";
	}
}


int row()
{
int choiceR;
cout<<"Please choose a set ROW coordinates"<<endl;
cin>>choiceR;
while( choiceR>14 || choiceR<0 )
{
	cout<<"Please enter again Row coordinates"<<endl;
	cin>>choiceR;
}
return choiceR;
}
int column()
{
int choiceC;
cout<<"Please choose a set Coloumn coordinates"<<endl;
cin>>choiceC;
while( choiceC>14 || choiceC<0 )
{
	cout<<"Please enter again Coloumn coordinates"<<endl;
	cin>>choiceC;
}
return choiceC;
}
int scan()
{
	int hit=0,chit;
	string chk ="[X]";
	for (rw=0; rw<15; rw++)
{
	for(cl=0; cl<15; cl++)
	{
		
		if(chit=grid2[rw][cl].compare(chk)==0)
		{
			hit++;
	}
}
}
	return hit;
}
int scan2()
{
	int hit=0,chit;
	string chk2 = "[X]";
	for (rw=0; rw<15; rw++)
{
	for(cl=0; cl<15; cl++)
	{
		if(grid[rw][cl].compare(chk2) == 0)
		{
			hit++;
	}
}
}
	return hit;
}
