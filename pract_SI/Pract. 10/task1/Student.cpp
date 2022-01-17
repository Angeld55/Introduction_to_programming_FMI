#include "pch.h"
#include "Student.h"
#include <iostream>

float Student::calculateFinalGrade() //среден успех за годината.
{
	return (GradeFirstTerm + GradeSecondTerm) / 2;
}

bool Student::checkBirthdate(unsigned _year) // роден преди определена година.
{
	return year < _year;
}

void Student::enterData()
{
	std::cin >> name >> adress >> year >> GradeFirstTerm >> GradeSecondTerm;
}