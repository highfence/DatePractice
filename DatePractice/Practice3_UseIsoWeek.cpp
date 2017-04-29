#define PRACTICE3
#ifdef PRACTICE3
#include "Common.h"
#include <chrono>
#include "date.h"
#include "iso_week.h"

using namespace std::chrono;
using namespace iso_week;
using namespace iso_week::literals;

int main(void)
{
	std::cout << "Practice 3 : Date data handling Using \"iso_week.h\"" << std::endl;
	std::cout << "Making \"iso_week\" data" << std::endl;
	auto isod1 = 2017_y / 18 / mon;
	auto isod2 = 18_w / mon / 2017_y;
	auto isod3 = mon / 18_w / 2017_y;

	printDate(isod1);
	printDate(isod2);
	printDate(isod3); 

	std::cout << "\nGet \"iso_week\" date data from system_clock::now()" << std::endl;
	auto today = floor<days>(system_clock::now());
	auto today_iso = year_weeknum_weekday{ today };
	printDate(today_iso);

	std::cout << "\nTranslate \"iso_week\" data to unsinged int type" << std::endl;
	std::cout << "week " << (unsigned)today_iso.weeknum() << std::endl;
	_getwch();
	return 0;
}

#endif