/*
* UUDate.cpp
*
* Version information
* Author: TODO - Uanan Hesketh
* Date: TODO - Add date you started working on the code
* Description: This file is the implementation file for the UUDate class and defines (implements) the functions of the class
*
* Copyright notice -
*/


#include "UUDate.h"
#include <string>
#include <iostream>
#include <sstream>

UUDate::UUDate() {
	//Initialise the date to 01/01/2000
	//TODO - Add your implementation here
	day_ = (01);
	month_ = (01);
	year_ = (2000);
}

UUDate::UUDate(int day, int month, int year) {
	//TODO - Add your implementation here
	SetDay(day);
	SetMonth(month);
	SetYear(year);


}

UUDate::UUDate(std::string date) {
	//TODO - Add your implementation here 
	int x = 0;
	int dates[3];
	std::string full, getline_ (date);
	std::stringstream StrStream(getline_);

	while (x < 3)

	{
		getline(StrStream, full, '/';
		std::stringstream streamz(full);
				x++;
	}
	day_ = dates[0];
	month_ = dates[1];
	year_ = dates[2];

}

void UUDate::IncrementDate() {
	//TODO - Add your implementation here
	if (month_ == 1 || month_ == 3 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12)
	{
		if (day_ == 31)
		{
		day_ = 0; 
		++month_;
		if (month_ == 13)
		{
		{
			month_ = 1;
			++year_;
		}
	}
	}
	if (month_ == 2)
	{
		if (year_ % 400 == 0) //400/ = 4?
		{
			if (year_ % 400 == 0 || year_ % 100 != 0)
			{
				if (day_ == 29)
				{
					day_ = 0; ++month_;
				}
			}
		}
		++day_;
	}
}	


	int UUDate::Between(UUDate date) {
		//TODO - Add your implementation here
		int day = date.GetDay();
		int month = date.GetDay();
		int year = date.GetDay();

		int date1, date2;
		int elapseddays;
		int daysBetween;

		int n1, n2;

		if (d1.month <= 2)
		{
		 year = d1.month = d1.month - 1;
		 month = d1.month + 13;
		}
		else
		{
			year = d1.year;
			month = d1.month + 1;
		}

		if (d2.month <= 2)
		{
			year = d2.year - 1;
			month = d2.month + 13;
		}
		else
		{
			year = d2.year;
			month = d2.month + 1;
		}
		if (d1 >= 01 / 01 / 2000 && d1 <= 01 / 01 / 9999)
		{
			N = N + 1;
		}
		else if (d2 >= 01 / 01 / 2000 && d2 <= 01 / 01 / 9999)
		{
			N = N + 2;
		}



		
		return date;
	}

		int UUDate::GetDay() const {
			//TODO - Add your implementation here
			return day_;
		}

		void UUDate::SetDay(int day) {
			//TODO - Add your implementation here
			if (day >= 1 && day <= 31)
			{
				day_ = day;
			}
		}

		int UUDate::GetMonth() const {
			//TODO - Add your implementation here
			return month_;
		}

		void UUDate::SetMonth(int month) {
			//TODO - Add your implementation here
			if (month >= 1 && month <= 12)
			{
				month_ = month;
			}

			if ((month < 1 && month > 12))
			{
				month_ = 1;
			}

		}

		int UUDate::GetYear() const {
			//TODO - Add your implementation here
			return year_;
		}

		void UUDate::SetYear(int year) {
			//TODO - Add your implementation here
			if ((year >= 0001 && year <= 9999)) {
				year_ = year;
			}

		}

		std::string UUDate::GetDate() {
			//TODO - Add your implementation here

			std::string year = std::to_string(year_);
			std::string month = std::to_string(month_);
			std::string day = std::to_string(day_);

			std::string date = day + "/" + month + "/" + year;

			return date;
		}
