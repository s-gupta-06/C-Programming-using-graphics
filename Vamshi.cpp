#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
void V();
void A();
void M();
void S();
void H();
void I();
COORD coord={0,0};
void gotoxy (int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int i,j;
	Sleep(2000);
	V();
	A();
	M();
	S();
	H();
	I();
	getch();
	return 0;
}
void V()
{
	system("color A");
	gotoxy(1,1);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(2,2);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(3,3);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(4,4);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(5,5);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(6,6);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(7,7);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(8,6);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(9,5);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(10,4);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(11,3);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(12,2);
	cout<<":";
	Sleep(100);
	system("color A");
	gotoxy(13,1);
	cout<<":";
	Sleep(100);
}
void A()
{
	int i,j;
	for(j=7;j>2;j--)
	{
		system("color A");
		gotoxy(16,j);
		Sleep(40);
		cout<<":";
	}
	for(i=16;i<21;i++)
	{
		system("color A");
		
		gotoxy(i,2);
		Sleep(40);
		cout<<":";
	}
	for(j=2;j<8;j++)
	{
		system("color A");
		gotoxy(21,j);
		Sleep(40);
		cout<<":";
	}
	for(i=16;i<21;i++)
	{
		system("color A");
		
		gotoxy(i,5);
		Sleep(40);
		cout<<":";
	}
}
void M()
{
	int i,j;
	for(j=7;j>2;j--)
	{
		system("color A");
		gotoxy(25,j);
		Sleep(40);
		cout<<":";
	}
	system("color A");
	gotoxy(25,2);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(26,3);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(27,4);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(28,5);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(29,4);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(30,3);
	Sleep(40);
	cout<<":";
	system("color A");
	gotoxy(31,2);
	Sleep(40);
	cout<<":";
	for(j=2;j<8;j++)
	{
		system("color A");
		gotoxy(31,j);
		Sleep(40);
		cout<<":";
	}
}
void S()
{
	int i,j;
	for(i=40;i>35;i--)
	{
		system("color A");
		
		gotoxy(i,2);
		Sleep(40);
		cout<<":";	
	}
	for(j=2;j<5;j++)
	{
		system("color A");
		
		gotoxy(35,j);
		Sleep(40);
		cout<<":";
	}
	for(i=36;i<40;i++)
	{
		system("color A");
		
		gotoxy(i,4);
		Sleep(40);
		cout<<":";	
	}
	for(j=4;j<7;j++)
	{
		system("color A");
		
		gotoxy(40,j);
		Sleep(40);
		cout<<":";
	}
	for(i=40;i>34;i--)
	{
		system("color A");
		
		gotoxy(i,7);
		Sleep(40);
		cout<<":";	
	}
}
void H()
{
	int i,j;
	for(j=2;j<8;j++)
	{
		system("color A");
		
		gotoxy(44,j);
		Sleep(40);
		cout<<":";
	}
	for(i=44;i<49;i++)
	{
		system("color A");
		
		gotoxy(i,4);
		Sleep(40);
		cout<<":";
	}
	for(j=2;j<8;j++)
	{
		system("color A");
		
		gotoxy(49,j);
		Sleep(40);
		cout<<":";
	}
}
void I()
{
	int i,j;
	for(i=53;i<62;i++)
	{
		system("color A");
		gotoxy(i,2);
		Sleep(40);
		cout<<":";
	}
	for(j=2;j<8;j++)
	{
		system("color A");
		gotoxy(57,j);
		Sleep(40);
		cout<<":";
	}
	for(i=53;i<62;i++)
	{
		system("color A");
		gotoxy(i,7);
		Sleep(40);
		cout<<":";
	}
}
