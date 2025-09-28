#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

class Movie {
    private:
    int releaseYear;
    string title;
    string screenWriter;

    public:
    int getReleaseYear()  {return releaseYear;}
    void setReleaseYear(int releaseYear)  {this -> releaseYear; }

    string getTitle()  {return title;}
    void setTitle(string title)  {this -> title;}

    string getScreenWriter(string screen)  {}


};

int main()
{

    return 0;
}
