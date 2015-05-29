//I affirm that all code given below was written solely by me, Kathleen Levi, and that any help I received adhered to the riles stated for this exam.

#ifndef Exam1_Movie_h
#define Exam1_Movie_h
#include <string>
using namespace std;

class Movie{
public:
    // Come up with a default for your movie theater
    Movie();
    // for genre, only Action, Comedy, Horror and Documentary. If none of those default to Comedy.
    Movie(string Title, string Genre, int ShowTime);
    string GetTitle(); // Returns movie title
    string GetGenre(); // Returns movie genre
    int GetShowTime(); // When is this movie shown?
    
private:
    string movieTitle;
    string movieGenre;
    int time;
    
};

#endif
