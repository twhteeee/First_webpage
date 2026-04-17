#include<iostream>
#include <iomanip>
using namespace std;

void displayH();
void displayE();
void displayS();

int main(){
	displayH();
	displayE();
	displayS();
	
	return 0;
}

void displayH(){
	cout <<"H   H\n";	
	cout <<"H   H\n";
	cout <<"HHHHH\n";
	cout <<"H   H\n";
	cout <<"H   H\n";
}

void displayE(){
	cout <<"EEEEE\n";	
	cout <<"E    \n";
	cout <<"EEEEE\n";
	cout <<"E    \n";
	cout <<"EEEEE\n";
}
void displayS(){
	cout <<"SSSSS\n";	
	cout <<"S    \n";
	cout <<"SSSSS\n";
	cout <<"    S\n";
	cout <<"SSSSS\n";
}