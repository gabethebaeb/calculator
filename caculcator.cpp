#include <iostream>
#include <stdlib.h>
#include <io.h>



using namespace std;
int main() {
system("title my calculator && color 04");
	
double int1;
char op;
double int2;

cout << "\n1st ingeter:";
cin >> int1;
cout << "\noperation:";
cin >> op;
cout << "\n 2nd ingeter:";
cin >> int2;

if(op == '*'){
cout << "\nresult:" << endl;	
cout << int1 * int2;
}

if(op == '+') {
cout << "\nresult:" << endl;	
cout << int1 + int2;	
}	

if(op == '-') {
cout << "\nresult:" << endl;	
cout << int1 - int2;		
}	
if(op == '/') {
cout << "\nresult:" << endl;	
cout << int1 / int2;		
}

system("chkdsk");

}

