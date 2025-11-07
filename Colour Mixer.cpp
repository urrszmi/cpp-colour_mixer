#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main (){
	
	string color1, color2, color3;
	
	first :
	cout << "\nEnter 1st color (red, yellow, blue): ";
	cin >> color1;
	if (color1!="red" && color1!="yellow" && color1!="blue"){
		cout << "\nWrong color\n";
		goto first;
	}
	else if (color1 =="red"){
	system ("color 47");	
	}
	else if (color1=="yellow"){
	system ("color 60");
	}
	else{
	system ("color 10");
	}

	second :
	cout << "\nEnter 2nd color (red, yellow, blue): ";
	cin >> color2;
	if (color2!="red"&&color2!="yellow"&&color2!="blue"){
		cout << "\nWrong color\n";
		goto second;
	}
	else if (color2 =="red"){
	system ("color 47");	
	}
	else if (color2=="yellow"){
	system ("color 60");
	}
	else{
	system ("color 10");
	}
	cout << "\nMixing colour, please wait..."<<endl;
	Sleep (5000);
	
	if (color1=="red"&&color2=="yellow"||color2=="red"&&color1=="yellow"){
		cout << "\nSecondary color in orange";
		system ("color 60");
	}

	else if (color1=="red"&&color2=="blue"||color2=="red"&&color1=="blue") {
		cout << "\nSecondary color in purple";
		system ("color 57");
	}
	
	else if (color1=="yellow"&&color2=="blue"||color2=="yellow"&&color1=="blue"){
		cout << "\nSecondary color in green";
		system ("color 20");
	}
	else
	cout << "\nSame as before";
	
	return 0;
}
