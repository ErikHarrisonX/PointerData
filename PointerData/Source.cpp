#include <iostream>
#include <string>

using namespace std;

//Main
void gradeByValue(int grade);
//Reference
void gradeByRef(int& grade);
//Pointer int
void gradeByPointer(int* grade);
//Pointer string 
void gradebypointer(string* grade);

void main() {
	string grade;
	string username;
	cout << "\n\n\t\t*****WELCOME TO GRADES*****\n\n";
	int num = 75;
	cout << "\nPlease Enter the name of the student whos grade you'd like to see. \n";
	cin >> username;
	cout << "\nStudent username recognized. \nShowing " << username << "'s grades.\n\n";
	//int num = grade 
	gradeByValue(num);
	cout << username << "'s grade is " << num << "%\n";
	gradeByRef(num);
	cout << username << " thought their grade is: " << num << "%\n";
	gradeByPointer(&num);
	cout << username << "'s goal grade is: "<< num << "%\n";
	gradebypointer(&grade);
	cout << username << "'s grade is at a " << grade << "\n";
	if (num > 80) {
		grade = "A";
		cout << username << " wants to get an  "<< grade << "\n\n";
	} if (num < 80) {
		grade = "B";
		cout << username << " wants to get an " << grade << "\n\n";
	}
}

void gradeByValue(int grade) {
	grade = 75;
}

void gradeByRef(int& grade) {
	grade = 78;
}

void gradeByPointer(int* grade) {
	*grade = 82;
}

void gradebypointer(string* grade) {	
	*grade = "B";
}