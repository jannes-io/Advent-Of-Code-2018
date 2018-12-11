// AoC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Day11.h"

using namespace std;

int main()
{
	const auto day11 = new Day11(2568);

	day11->executePartOne();
	day11->executePartTwo();

	delete day11;
	
    return 0;
}
