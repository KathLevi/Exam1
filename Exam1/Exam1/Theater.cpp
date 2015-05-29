//I affirm that all code given below was written solely by me, Kathleen Levi, and that any help I received adhered to the riles stated for this exam.

#include <stdio.h>
#include "Theater.h"

Theater::Theater(string Name, string Phone){
    theaterName = Name;
    theaterPhone = Phone;
}

int called = 0;

void Theater::AddMovie(Movie& Movie){  // Add a movie at a specific time
    movies[called] = Movie;
    called++;
}

string Theater::GetMovieForHour(int Hour){ // Return the movie shown at or after the given hour... Return "" if none are upcoming
   if (Hour < 0 || Hour > 24)
    return "";
   else
   {
       for (int i = 0; i < 11; i++){
           if (Hour <= movies[i].GetShowTime()){
               movieShown = movies[i].GetTitle();
               break;
           }
       }
       return movieShown;
   }
}

int Theater::GetShowTimeForGenre(string Genre){ //When will the movie of the given genre be shown?... Return -1 if none exist
    if (Genre != "Action" && Genre != "Comedy" && Genre != "Documentary" && Genre != "Horror")
        return -1;
    else
    {
        for (int i = 0; i < 11; i++){
            if (Genre == movies[i].GetGenre()){
                hourShown = movies[i].GetShowTime();
                break;
            }
        }
        return hourShown;
    }
}

int Theater::GetPopcornPrice(){ // Make up a cost in dollars for popcorn
    popcornPrice = 2;
    
    return popcornPrice;
}

int Theater::GetCokePrice(){ // Make up a cost on Coke
    cokePrice = 1;
    
    return cokePrice;
}