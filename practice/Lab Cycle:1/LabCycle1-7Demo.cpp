#include "LabCycle1-7.cpp"

int main() {
    Playlist playlist;

    playlist.insertSong("Song1", "Artist1", 200, "Rock");
    playlist.insertSong("Song2", "Artist2", 180, "Pop");
    playlist.insertSong("Song3", "Artist3", 220, "Jazz");
    playlist.insertSong("Song4", "Artist4", 250, "Blues");
    playlist.insertSong("Song5", "Artist5", 190, "Rock");

    cout << "Original Playlist:\n";
    playlist.displayPlaylist();

    cout << "\nSorted Playlist by Title:\n";
    playlist.sortByTitle();
    playlist.displayPlaylist();

    cout << "\nSorted Playlist by Artist:\n";
    playlist.sortByArtist();
    playlist.displayPlaylist();

    cout << "\nSorted Playlist by Duration:\n";
    playlist.sortByDuration();
    playlist.displayPlaylist();

    cout << "\nSorted Playlist by Genre:\n";
    playlist.sortByGenre();
    playlist.displayPlaylist();

    return 0;
}

