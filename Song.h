#include <string>
#include <iostream>
using namespace std;

class Song
{
public:
    Song(const string &title, const string &singer, const string &songw, const string &genre, int year, int duration);

    const string &getTitle() const;
    const string &getSinger() const;
    const string &getSongw() const;
    const string &getGenre() const;
    int getYear() const;
    int getDuration() const;

    void setTitle(const string &title);
    void setSinger(const string &singer);
    void setSongw(const string &songw);
    void setGenre(const string &genre);
    void setYear(int year);
    void setDuration(int duration);

protected:
    string title;
    string singer;
    string songw;
    string genre;
    int year;
    int duration;
};