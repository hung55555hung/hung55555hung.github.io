#include "Singer.h"
#include <iostream>
using namespace std;

Singer::Singer(const string &name, const string &gender, const string &birthday)
    : Person(name, gender, birthday) {}

void Singer::addSong(const Song &song)
{
    songs.push_back(song);
}

void Singer::addSongAt(int index, const Song &song)
{
    songs.add(index, song);
}

// void Singer::removeSong(const Song& song)
// {
//     songs.erase(song);
// }

void Singer::removeAllSong()
{
    songs.clear();
}
void Singer::displaySong() const
{
    //
}