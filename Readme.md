# Movie Ratings
# By: Clyde Shtino

# About
This C++ program has the task of taking a .txt file, which contains a list of movies and there ratings for each movie. 

# Data Reading
The data of the .txt file is handled with C++s <fstream> library. It reads data by utilizing a string array , then we intialize an index variable to get the list of movies. We read the first line into the string variable total_rate.

# Data Processing
In terms of processing, a map named movie is declared where the movie nameis a key and the value is a vector of integers which represents the ratings.

# Data population
In order to populate, each line is read from the file into our "item" string and from there it'll be stored into the array. The index is incremented to keep track of the numbers of lines read.

# Data parsing
Data thats stored in array is parsed. Each even-indexed element is considered a movie name and the following odd-indexed element is considered as a the rating to that movie. 

# Data analysis 
To perform an analysis on the data, the program interates through the movie map. It'll then calculate the total sum of the ratings for each movie and then display the results.
