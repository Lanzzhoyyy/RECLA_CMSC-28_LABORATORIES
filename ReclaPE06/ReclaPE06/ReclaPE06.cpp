#include<iostream>
#include "Movie.h"
#include <list>

using namespace std;

/* Declaration of Functions */
void progDescription();
void movDescription();

int main() {
    /* Create movie and person object and create variables to store various inputs */
    Movie movie; 
    string fname, lname, title, synopsis, mpaa_rating, genre; 
    char gender;
    int choice = 1;
    Person person;
    
    /* Calls program description function */
    progDescription();

    /* Asks user input for the title of the movie */
    cout << "\nEnter title of Movie: ";
    getline(cin, title);
    movie.setTitle(title);

    /* Asks user input for the synopsis of the movie */
    cout << "Enter synopsis of Movie: ";
    getline(cin, synopsis);
    movie.setSynopsis(synopsis);

    /* Asks user input for the MPAA rating of the movie */
    cout << "Enter MPAA Rating of Movie: ";
    getline(cin, mpaa_rating);
    movie.setMpaa_rating(mpaa_rating);

    /* Create list of genres */
    list<string> genres; 

    /* Asks user input for the genres of the movie then collects inputs using a while loop and stores them to the list */
    while (choice == 1) {
        cout << "\nEnter genre of Movie: ";
        getline(cin, genre);
        genres.push_back(genre);

        cout << "Do you want to add more? [0 for NO or 1 for YES] : ";
        cin >> choice;
        if (choice != 1 or 0) {
            cout << "Wrong input entered" << endl;
            return 0;
        }
        cin.ignore();
    }

    /* Initialize value of choice to 1 */
    choice = 1; 

    /* Set movie genres */
    movie.setGenres(genres); 

    /* Create list of directors */
    list<Person> directors;  

    /* Asks user input for the details of the directors then collects inputs using a while loop and stores them to the list */
    while (choice == 1) {
        cout << "\nEnter the first name of the director: ";
        getline(cin, fname);

        cout << "Enter the last name of the director: ";
        getline(cin, lname);
            
        cout << "Enter the gender of the director [M or F]: ";
        cin >> gender;

        person.setFname(fname);  
        person.setLname(lname);  
        person.setGender(gender);  

        directors.push_back(person);

        cout << "\nDo you want to add more? [0 for NO or 1 for YES] :";
        cin >> choice;
        cin.ignore();

        if (choice != 1 or 0) {
            cout << "Wrong input entered" << endl;
            return 0;
        }
    }

    /* Initialize value of choice to 1 */
    choice = 1;

    /* Set movie directors */
    movie.setDirectors(directors); 

    /* Create list of actors */
    list<Person> actors;
     
    /* Asks user input for the details of the actors/actresses then collects inputs using a while loop and stores them to the list */
    while (choice == 1) {
        cout << "\nEnter the first name of the actor/actress: ";
        getline(cin, fname);

        cout << "Enter the last name of the actor/actress: ";
        getline(cin, lname);
            
        cout << "Enter the gender of the actor [M or F]: ";
        cin >> gender;

        person.setFname(fname);  
        person.setLname(lname);  
        person.setGender(gender);  

        actors.push_back(person);

        cout << "\nDo you want to add more? [0 for NO or 1 for YES] :";
        cin >> choice;
        cin.ignore();

        if (choice != 1 or 0) {
            cout << "Wrong input entered" << endl;
            return 0;
        }
    }

    /* Initialize value of choice to 1 */
    choice = 1;

    /* Create list of actors */
    movie.setActors(actors);

    /* Calling movie description function */
    movDescription();

    /* Displays all information collected from user input */
    cout << "\nTitle: " << movie.getTitle() << endl;
    cout << "\nSynopsis: " << movie.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie.getMpaa_rating() << endl;

    list<string> displayGenres = movie.getGenres();

    cout << "\nGenres:" << endl;
    for(string genre : displayGenres){
        cout << "-" << genre << endl;
    }

    list<Person> displayDirectors = movie.getDirectors();

    cout << "\nDirectors:" << endl;
    for(Person director : displayDirectors){
        cout << "Full name: "<< director.getFname() << " " << director.getLname() << endl;
        cout << "Gender: " << director.getGender() << endl;
        cout << endl;
    }
    
    list<Person> displayActors = movie.getActors();

    cout << "\nActors:" << endl;
    for(Person actor : displayActors ){
        cout << "Full name: "<< actor.getFname() << " " << actor.getLname() << endl;
        cout << "Gender: " << actor.getGender() << endl;
        cout << endl;
    }

    return 0;
}

/* Function to display program description */
void progDescription() {
    system("cls"); 
    cout << "------------------------------------------------------------------------" << endl
         << "\t\t     Programming Exercise 6 - OOP 2" << endl
         << "\t\t  Submitted by : Lance Andrei E. Recla" << endl
         << "\t\t\t  Date done: 05/17/2024" << endl
         << "\t\t\t    Subject: CMSC 28" << endl
         << "------------------------------------------------------------------------" << endl;
}

/* Function to display movie description banner */
void movDescription() {
    system("cls");
    cout << "\n------------------------------------------------------------------------" << endl
         << "                          Movie Description:" << endl
         << "------------------------------------------------------------------------" << endl;
}
