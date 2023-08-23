#include "AskUser.h"
#include <iostream>
using namespace std;



void AskUser::greetUser()
{
	cout << "Hello! Please Enter Your Last Name to Continue! ";
	
	string userLastName;
	
	cin >> userLastName;

	cout << "Nice To Meet You, " << userLastName << "!\nPlease Enter Your Age to Continue: ";

	int userAge;
	//get the users age 
	cin >> userAge;

	//add one to the users age 
	userAge++;
	cout << "Looks like Your approaching " << userAge << " Years Old!";


}