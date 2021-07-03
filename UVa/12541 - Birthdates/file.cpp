#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <utility>
#include <cmath>
#include <bitset>

using namespace std;


//Our person class
class Person
{
public:
	Person(string name, int day, int month, int year);
	string getName() { return this->m_name; }
	int getDay() { return this->m_day; }
	int getMonth() { return this->m_month; }
	int getYear() { return this->m_year; }
	~Person();
private:
	string m_name;
	int m_day;
	int m_month;
	int m_year;
};

Person::Person(string name, int day, int month, int year) : m_name(name), m_day(day), m_month(month), m_year(year)
{

}

Person::~Person()
{

}

//custom sorting function
bool lesserfn(Person a, Person b)
{
	if(a.getYear() != b.getYear())
	{
		return (a.getYear() < b.getYear());
	}
	else if(a.getYear() == b.getYear())
	{
		if(a.getMonth() != b.getMonth())
		{
			return (a.getMonth() < b.getMonth());
		}
		else if(a.getMonth() == b.getMonth())
		{
			if(a.getDay() != b.getDay())
			{
				return (a.getDay() < b.getDay());
			}
		}
	}
}


int main()
{
	//Fast IO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
#endif

	vector<Person> arr;
	int n;
	string name;
	int day;
	int month;
	int year;

	cin >> n;

	//enter values into array
	while(n--)
	{
		cin >> name >> day >> month >> year;
		arr.push_back(Person(name, day, month, year));
	}

	sort(arr.begin(), arr.end(), lesserfn);

	cout << arr.back().getName() << "\n";
	cout << arr.front().getName() << "\n";
	
	return 0;
}
