#pragma once
#include <string>

struct Student
{
	//variable Student
	std::string name;
	std::string adress;
	unsigned year;
	float GradeFirstTerm, GradeSecondTerm;

	float calculateFinalGrade(); //среден успех за годината.

	bool checkBirthdate(unsigned _year); // роден преди определена година.

	void enterData();
};