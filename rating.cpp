// Copyright Clyde Shtino (2023)
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main (int argc, char * argv[]) {
    ifstream file; // file variable
    int index = 0; // index variable
    string total_rate, rate, item; // string variables for printing results 
    string array[100]; // array to store data from the file

    file.open("hw7.txt"); // open file

    if (!file){ // null check
    
        cout << "An error has occured while opening! " << endl;
        exit(1);
    }

    getline(file, total_rate); // obtaining the first line from file
    map < string, vector <int> > movie; // map for strings and vector as an int value

    while (file.good()) { // while loop to loop over file 
    
        getline(file, item); // goes over each line in file 
        array[index++] = item; // stores lines into the array
    }

    for (int i = 0; i <= index - 2; i+=2) { // loop over the array 
        string s = array[i]; // Obtaing movie name into array

        int r = stoi(array[i + 1]); // Obtains the move rating and converts to type int
        movie[s].push_back(r); // Adds rating to the vector
    }

    map <string, vector <int> >:: iterator it; //iterator for the map

    vector <int> ::iterator it2; // iterator for the vector

    for (it = movie.begin(); it != movie.end(); ++it) { // looping over the movie map 
        int num_of_item = it -> second.size(); // obtains the size of the vector
        cout << it -> first << " => " << num_of_item << " Review ,";

        int sum = 0; // Variable for total sum
        double avg = 0; // double variable for average 

        for (it2 = it -> second.begin(); it2 != it -> second.end(); ++it2) {
            sum += *it2; // adding all the ratings
        }

        avg = (double)sum / num_of_item; // to find the avg of rating

        cout << " Average of " << setprecision(2) << avg << " / 5" << endl;
    }

    return 0;

}