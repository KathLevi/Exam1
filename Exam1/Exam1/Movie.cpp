//I affirm that all code given below was written solely by me, Kathleen Levi, and that any help I received adhered to the riles stated for this exam.

#include <stdio.h>
#include "Movie.h"

Movie:: Movie(){
    movieTitle = "Best Movie Ever";
    movieGenre = "Romantically Horrible";
    time = 1;
}

Movie::Movie(string Title, string Genre, int ShowTime){
    movieTitle = Title;
    movieGenre = Genre;
    time = ShowTime;
}

string Movie::GetTitle(){
    
    return movieTitle;
}


string Movie::GetGenre(){
    if (movieGenre != "Action" && movieGenre != "Comedy" && movieGenre != "Horror" && movieGenre != "Documentary")
        movieGenre = "Comedy";
    
    return movieGenre;
}

int Movie::GetShowTime(){
    return time;
}

