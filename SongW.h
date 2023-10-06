#include "Person.h"
#include "List.h"
#include <string>
#include <iostream>
#include "Song.h"
using namespace std;
class SongW : public Person
{
public:
    SongW(const string &name, const string &gender, const string &birthday);

    void addSong(const Song &song);              // thêm một bài hát vào cuối danh sách
    void addSongAt(int index, const Song &song); // thêm một bài hát vào vị trí bất kì
    void removeSong(const Song &song);           // xóa một bài hát khỏi danh sách
    void removeAllSong();                        // xóa tất cả các bài hát khỏi danh sách
    void displaySong() const;                    // hiển thị thông tin bài hát
protected:
    List<Song> songs;
};