// Sales prediction

#include <iostream>

int main()
{
const long TOTAL_SALES = 2103419277;
const long long NEXT_YEAR_SALES = TOTAL_SALES*1.18;

std::cout << "Last year's prediction were $" << TOTAL_SALES << std::endl;
std::cout << "This year's prediction $" << NEXT_YEAR_SALES << std::endl;


  return 0;
}
