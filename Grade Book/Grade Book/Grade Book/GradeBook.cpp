#include <iostream>
#include <windows.h>
using namespace std;



int main() {

	

	system("Color 0A"); // make text color green and background black
	// Header
	cout << "---------------------------------------" << endl;
	cout << "FBZ GradeBook Application" << endl;
	cout << "---------------------------------------" << endl;

	//variables
	string subj;
	string again;
	string i = "Y";
	//  Ask User name of subject
	do {
		float grade = 0;
		float average = 0;
		float total_grade = 0;


		cout << "Please enter name of subject" << endl;
		cin >> subj;

		cout << "enter grade!" << endl;
		cin >> grade;
		total_grade = grade + total_grade;
		cout << "Do you want to enter another grade? \n";
		cout << "(Y) for yes ";
		cout << "(N) for no \n";
		cin >> i;
		// while loop to gather all the grades
		
		int y = 1;
		while (i == "Y") {
			cout << "enter grade!" << endl;
			cin >> grade;
			total_grade = grade + total_grade;
			cout << "Do you want to enter another grade? \n";
			cout << "(Y) for yes ";
			cout << "(N) for no \n";
			cin >> i;
			y++;
		}

		// will show user total points and the average grade

		average = total_grade / y;

		cout << "total marks accuired for " << subj << " is => " << total_grade << endl;
		cout << "Your Grade for " << subj << " is => " << average << "%" << endl;

		cout << endl;
		cout << "Do you want to do another subject?(yes/no)" << endl;
		cin >> again;
		system("cls");

	} while (again == "yes");
}