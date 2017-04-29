#define PRACTICE
#ifdef PRACTICE1

#include "Common.h"
#include "date.h"

using namespace date;

int main(void)
{
	std::cout << "Practice 1 : Construct Date Data" << std::endl;
	// Making date data "sys_days" type
	std::cout << "Making date data with \"sys_days\" type" << std::endl;
	sys_days sys_d1 = 2017_y / apr / 29;
	sys_days sys_d2 = 29_d / apr / 2017;
	sys_days sys_d3 = apr / 29 / 2017;

	printDate(sys_d1);
	printDate(sys_d2);
	printDate(sys_d3);

	// Making date data "year_month_day" 
	std::cout << std::endl;
	std::cout << "Making date data with \"year_month_day\" type" << std::endl;
	year_month_day ymd_d1 = 2017_y / apr / 29;
	year_month_day ymd_d2 = 29_d / apr / 2017;
	year_month_day ymd_d3 = apr / 29 / 2017;

	printDate(ymd_d1);
	printDate(ymd_d2);
	printDate(ymd_d3);

	// Making date data "year_month_weekday" 
	std::cout << std::endl;
	std::cout << "Making date data with \"year_month_weekday\" type" << std::endl;
	using namespace date::literals;
	year_month_weekday ymw_d1 = 2017_y / apr / mon[1];
	year_month_weekday ymw_d2 = mon[2] / apr / 2017;
	year_month_weekday ymw_d3 = apr / mon[3] / 2017;

	printDate(ymw_d1);
	printDate(ymw_d2);
	printDate(ymw_d3);

	// Translate to "year_month_day"
	auto tr_d1 = year_month_day{ ymw_d1 };
	auto tr_d2 = year_month_day{ ymw_d2 };
	auto tr_d3 = year_month_day{ ymw_d3 };

	printDate(tr_d1);
	printDate(tr_d2);
	printDate(tr_d3);

	_getwch();
	return 0;
}

#endif