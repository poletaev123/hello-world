#pragma once
#include <iostream>
#include <ctime>


using namespace std;


class DataTime
{
public:
	DataTime(int day1, int month1, int year1);
	DataTime();
	void printToday();
	void printYesterday();
	void printTomorrow();
	void printFuture(int N);
	void printPast(int N);
	void printMonth();
	void printWeekDay();
	void calcDifference(DataTime d1, DataTime d2);

private:
	int day, month, year, count;
	time_t rawtime, time1, time2, daysDifference;
	struct tm *timeinfo;
	char* days[7];
	char* months[12];

};