#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

class Movie {
private:
    int releaseYear;
    string title;
    string screenWriterName;

public:
    int getReleaseYear()  {return releaseYear;}
    void setReleaseYear(int releaseYear)  {this -> releaseYear= releaseYear; }

    string getTitle()  {return title;}
    void setTitle(string title)  {this -> title = title;}

    string getScreenWriter()  {return screenWriterName; }
    void setScreenWriterName(string screenWriterName) {this ->screenWriterName = screenWriterName;}
// member print function
 void print() {
 cout << "Title: " <<title <<endl;
 cout << "Release Year: " << releaseYear<<endl;
 cout << "Screen writer name: " << screenWriterName<<endl;
 }

};

int main()
{
 cout<< fixed << setprecision(2);
 vector <Movie> movies;
// file opening
ifstream inputFile("movie.txt");
if(!inputFile.is_open()) {
    cout << "Error opening file" <<endl;
    return 1; //handle error
} else {

    string t;// temp title
    int yr; // temp year released
    string swn; // temp screen writer name

 // while loop to fill vector
 while(inputFile >> t >> yr >> swn) {
    Movie tempMovie;
    tempMovie.setTitle(t);
    tempMovie.setReleaseYear(yr);
    tempMovie.setScreenWriterName(swn);
    movies.push_back(tempMovie);
 }
   inputFile.close();
}
// output vector
for(auto m: movies) {
    m.print();
}
    return 0;
}
