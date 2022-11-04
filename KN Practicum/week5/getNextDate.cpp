#include <iostream>

bool isValidMonth(unsigned month)
{
	return month > 0 && month < 13;
}

bool isLeapYear(unsigned year)
{
	return !(year % 4) && (year % 100) || !(year % 400);
}

// Просто изброяваме месеците с 31 дена
bool isMonthWithThirtyOneDays(unsigned month)
{
	return month == 1 || month == 3 || month == 5 || month == 7 ||
		   month == 8 || month == 10 || month == 12;
}

// Ако не е февруари и не е месец с 31 дена.. Няма какво друго да е
bool isMonthWithThiryDays(unsigned month)
{
	return month != 2 && !isMonthWithThirtyOneDays(month);
}

bool isFebruary(unsigned month)
{
	return month == 2;
}

bool isDecember(unsigned month)
{
	return month == 12;
}

bool isValidDate(unsigned day, unsigned month, unsigned year)
{
	// Ако месецът е невалиден няма какво да смятаме повече
	if (isValidMonth(month) == false)
		return false;

	// Ако денят е невалиден също директно връщаме false
	if (day == 0 || day > 31)
		return false;

	// Ако денят е по - малък от 29 сто процента е валиден
	if (day < 29)
		return true;

	// Ако е февруари и имаме високосна година месецът има 29 дена.
	// Проверяваме дали не са ни въвели 29 февруари в невисокосна година.
	if (isFebruary(month))
	{
		if (isLeapYear(year))
			return (day < 30);

		return (day < 29);
	}
	else if (isMonthWithThirtyOneDays(month))
	{
		return (day < 32); // day може да е 29, 30 или 31
	}

	return (day < 31); // day може да е 29 или 30
}

// Функция, която приема дата, представена като три положителни
// цели числа и намира датата след един ден


void getNextDate(unsigned day, unsigned month, unsigned year, unsigned &resDay, unsigned &resMonth, unsigned &resYear)
{
	if (!isValidDate(day, month, year))
	{
		resDay = resMonth = resYear = -1; // индикатор за грешка!
		return;							  // изпълнението на функцията приключва
	}

	day += 1; // увеличаваме деня с 1

	// Ако е февруари ще проверим дали не сме стигнали
	// 29-ти при невисокосна и 30 при високосна
	// В такъв случай отиваме в март
	if (isFebruary(month))
	{
		if ((day == 29 && !isLeapYear(year)) || (day == 30 && isLeapYear(year)))
		{
			resDay = 1;
			resMonth = 3;
			resYear = year;
			return;
		}
	}
	else if (isMonthWithThirtyOneDays(month) && day == 32)
	{
		// Ако месецът е с 31 дена, стигнали сме до 32-ри и е декември то 
		// датата е 1 януари <годината + 1>
		if (isDecember(month))
		{
			resDay = 1;
			resMonth = 1;
			resYear = ++year;
		}
		// В противен случай просто отиваме на следващия месец
		else
		{
			resDay = 1;
			resMonth = ++month;
			resYear = year;
		}
		return;
	}
	else if (isMonthWithThiryDays(month) && day == 31)
	{
		// Ако имаме месец с 30 дена и сме стигнали ден 31
		// Просто отиваме на следващия месец
		resDay = 1;
		resMonth = ++month;
		resYear = year;
		return;
	}

	// Ако никой от тези случаи не е изпълнен то имаме валиден отговор!
	resDay = day;
	resMonth = month;
	resYear = year;
}

// Намираме датата след n дена
void getDateAfter(unsigned day, unsigned month, unsigned year, unsigned n, unsigned &resDay, unsigned &resMonth, unsigned &resYear)
{
	for (size_t i = 0; i < n; i++)
	{
		getNextDate(day, month, year, resDay, resMonth, resYear);

		day = resDay;
		month = resMonth;
		year = resYear;
	}
}

int main()
{
	unsigned day = 28;
	unsigned month = 2;
	unsigned year = 2024;

	// Това са променливи в които пазим резултата от изпълнението на getNextDate:
	unsigned resDay = 0;	// Резултата за дена		
	unsigned resMonth = 0;	// Резултата за месеца
	unsigned resYear = 0;	// Резултата за годината
	//
	
	getNextDate(day, month, year, resDay, resMonth, resYear);
	std::cout << "Date after " << day << "." << month << "." << year << " is " << resDay << "." << resMonth << "." << resYear << std::endl;

	getDateAfter(1, 1, 2024, 366, resDay, resMonth, resYear);

	// Направете така, че потребителя да въвежда дата.
	// Ако датата е коректна да извежда резултата
	// Ако не е коректна да изведе подходящо съобщение за грешка
	// Важно: Не е добра идея да извеждате резултата във функция.
	// Трябва той да се изведе в мейн.
}
