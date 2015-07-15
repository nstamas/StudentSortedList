/*
 * Student.cpp
 *
 *  Created on: Oct 21, 2013
 *      Author: stamas
 */
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() {
	// TODO Auto-generated constructor stub
	studentID = 0;
	credits = 0;
	GPA = 0;
}

Student::Student(int ID){
	studentID = ID;
	credits = 0;
	GPA = 0;
}

Student::Student(int ID, int cr, double grPtAv){
	studentID = ID;
	credits = cr;
	GPA = grPtAv;
}

int Student::getID() const{
	return studentID;
}

int Student::getCredits() const{
	return credits;
}

double Student::getGPA()const{
	return GPA;
}

void Student::update(char grade, int cr){
	//Variable for new GPA
		double newGPA;
		//Switch statement to check whether the letter passed through is valid. If
		//grade is valid, that grade is assigned a value which is used to calculate
		//new GPA.
		switch (toupper(grade)){
		case 'A':
			newGPA = 4;
			break;
		case'B':
			newGPA = 3;
			break;
		case 'C':
			newGPA = 2;
			break;
		case'D':
			newGPA = 1;
			break;
		case'F':
			newGPA = 0;
			break;
		default:
			//error message asking for a valid letter grade
			cout << "Please enter a valid letter grade" << endl;
		}

		//Calculates and updates the new GPA
		GPA = ((double)(GPA * credits) + (double)(newGPA * cr))/(double)(credits + cr);
		credits = cr + credits;
}

void Student::print() const{
	cout << studentID << ", " << credits << ", "<< GPA;
}

