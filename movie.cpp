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
    void setReleaseYear(int releaseYear)  {this -> releaseYear; }

    string getTitle()  {return title;}
    void setTitle(string title)  {this -> title;}

    string getScreenWriter()  {return screenWriterName; }
    void setScreenWriterName(string getScreenWriterName) {this ->screenWriterName;}
// member print function
 void print() {
 cout << "Title: " <<endl;
 cout << "Release Year: " <<endl;
 cout << "Screen writer name: " <<endl;
 }

};

int main()
{
 cout<< fixed << setp

    return 0;
}
