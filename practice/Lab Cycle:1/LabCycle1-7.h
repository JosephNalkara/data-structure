#include <iostream>
#include <string>
using namespace std;

struct Song {
    std::string title;
    std::string artist;
    int duration;
    std::string genre;
    Song* next;

    Song(const std::string& _title, const std::string& _artist, int _duration, const std::string& _genre) 
        : title(_title), artist(_artist), duration(_duration), genre(_genre), next(nullptr) {}
};

class Playlist {
private:
    Song* head;

public:
    Playlist();
    ~Playlist();
    void insertSong(const std::string& title, const std::string& artist, int duration, const std::string& genre);
    void displayPlaylist() const;
    void sortByTitle();
    void sortByArtist();
    void sortByDuration();
    void sortByGenre();

private:
    Song* merge(Song* left, Song* right, const std::string& criteria);
    Song* mergeSort(Song* head, const std::string& criteria);
};

