#include <iostream>
#include <string>
using namespace std;

class Theater{
public:
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);

	int GetShowTimeForGenre(string Genre);

	int GetPopcornPrice();
	int GetCokePrice();

};