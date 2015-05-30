#include <iostream>
#include "Movie.h"
using namespace std;

class Theater{
private:
	int PopcornPrice = 5;
	int CokePrice = 1.50;

public:
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);

	int GetShowTimeForGenre(string Genre);

	int GetPopcornPrice();
	int GetCokePrice();

};