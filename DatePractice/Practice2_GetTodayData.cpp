#define PRACTICE2
#ifdef PRACTICE2
#include "Common.h"
#include "date.h"
#include <chrono>

using namespace date;
using namespace std::chrono;

int main(void)
{
	std::cout << "Practice 2 : Get Today date data" << std::endl;
	// floor<days> converts time_point data to sys_days 
	auto today = floor<days>(system_clock::now());
	auto tomorrow = today + days{ 1 };
	auto yesterday = today - days{ 1 };

	std::cout << "Today - days{1} : " << std::endl;
	printDate(yesterday);
	std::cout << "Today : " << std::endl;
	printDate(today);   
	std::cout << "Today + days{1} : " << std::endl;
	printDate(tomorrow);

	std::cout << "\nGet today type \"year_month_day\"" << std::endl;
	auto ymd_today = year_month_day{ floor<days>(system_clock::now()) };
	printDate(ymd_today);

	std::cout << "\nCalculate first day of this month" << std::endl;
	auto first_day_this_month = year_month_day{ ymd_today.year(), ymd_today.month(), day{ 1 } };
	printDate(first_day_this_month);

	std::cout << "\nCalculate last day of this month" << std::endl;
	auto d1 = year_month_day_last(ymd_today.year(), month_day_last{ ymd_today.month() });
	auto last_day_this_month = year_month_day{ d1 };
	printDate(last_day_this_month);

	std::cout << "\nCalculate last day of this Febuary" << std::endl;
	auto d2 = year_month_day_last(year{ 2017 }, month_day_last{ month{ 2 } });
	auto last_day_feb = year_month_day{ d2 };
	printDate(last_day_feb);

	_getwch();
	return 0;
}

#endif