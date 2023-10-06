#include "SongW.h"
#include <iostream>
using namespace std;

SongW::SongW(const string &name, const string &gender, const string &birthday)
    : Person(name, gender, birthday) {}

void SongW::addSong(const Song &song)
{
    songs.push_back(song);
}

void SongW::addSongAt(int index, const Song &song)
{
    songs.add(index, song);
}

// void SongW::removeSong(const Song& song)
// {
//     songs.erase(song);
// }

void SongW::removeAllSong()
{
    songs.clear();
}
void SongW::displaySong() const
{
    //
}