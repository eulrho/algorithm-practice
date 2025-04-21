// Archivist
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

std::string winners[] = {
		"ITMO",   // 1995
		"SPbSU",  // 1996
		"SPbSU",  // 1997
		"ITMO",   // 1998
		"ITMO",   // 1999
		"SPbSU",  // 2000
		"ITMO",   // 2001
		"ITMO",   // 2002
		"ITMO",   // 2003
		"ITMO",   // 2004
		"ITMO",   // 2005
		"PetrSU, ITMO", // 2006
		"SPbSU",  // 2007
		"SPbSU",  // 2008
		"ITMO",   // 2009
		"ITMO",   // 2010
		"ITMO",   // 2011
		"ITMO",   // 2012
		"SPbSU",  // 2013
		"ITMO",   // 2014
		"ITMO",   // 2015
		"ITMO",   // 2016
		"ITMO",   // 2017
		"SPbSU",  // 2018
		"ITMO"    // 2019
};


int main()
{
	fast;
	int year; cin >> year;
	cout << winners[year - 1995];
	return (0);
}