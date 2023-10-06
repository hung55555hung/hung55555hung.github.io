#include "Song.h"
#include <iostream>
using namespace std;

Song::Song(const string &title, const string &singer, const string &songw, const string &genre, int year, int duration)
    : title(title), singer(singer), songw(songw), genre(genre), year(year), duration(duration) {}
const string &Song::getTitle() const
{
    return title;
}

const string &Song::getSinger() const
{
    return singer;
}

const string &Song::getSongw() const
{
    return songw;
}

const string &Song::getGenre() const
{
    return genre;
}

int Song::getYear() const
{
    return year;
}

int Song::getDuration() const
{
    return duration;
}

void Song::setTitle(const string &title)
{
    this->title = title;
}

void Song::setSinger(const string &singer)
{
    this->singer = singer;
}

void Song::setSongw(const string &songw)
{
    this->songw = songw;
}

void Song::setGenre(const string &genre)
{
    this->genre = genre;
}

void Song::setYear(int year)
{
    this->year = year;
}

void Song::setYear(int duration)
{
    this->duration = duration;
}