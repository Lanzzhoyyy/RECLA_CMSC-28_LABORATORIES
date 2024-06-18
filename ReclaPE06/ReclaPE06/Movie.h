#include<iostream>
#include "Person.h"
#include <string>
#include <list>

using std::string;
using std::list;

class Movie {
    private:
    /* Attributes */
        string Title;
        string Synopsis;
        string Mpaa_rating;
        list <string> Genres;
        list <Person> Directors;
        list <Person> Actors;

    public:
        /* Default constructor */
        Movie() {}
        
        /* Getters of each attribute */
        const string& getTitle() { return Title; }
        const string& getSynopsis() { return Synopsis; }
        const string& getMpaa_rating() { return Mpaa_rating; }
        const list <string>& getGenres() { return Genres; }
        const list <Person>& getDirectors() { return Directors; }
        const list <Person>& getActors() { return Actors; }

        /* Setters of each attribute */
        void setTitle (const string& mtitle) { Title = mtitle; }
        void setSynopsis(const string& msynopsis) { Synopsis = msynopsis; }
        void setMpaa_rating(const string& mmpaa_rating) { Mpaa_rating = mmpaa_rating; }
        void setGenres(const list <string>& mgenres) { Genres = mgenres; }
        void setDirectors(const list <Person>& mdirectors) { Directors = mdirectors;}
        void setActors(const list <Person>& mactors) { Actors = mactors;}
    };


