#include <iostream>
#include <string>
using namespace std;

class Movie{
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	string GetTitle();
	string GetGenre();
	int GetShowTime();

};