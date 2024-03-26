#include "LabCycle1-7.h"

Playlist::Playlist() : head(nullptr) {}

Playlist::~Playlist() {
    while (head) {
        Song* temp = head;
        head = head->next;
        delete temp;
    }
}

void Playlist::insertSong(const std::string& title, const std::string& artist, int duration, const std::string& genre) {
    Song* newSong = new Song(title, artist, duration, genre);
    if (!head) {
        head = newSong;
    } else {
        Song* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newSong;
    }
}

void Playlist::displayPlaylist() const {
    Song* temp = head;
    while (temp) {
        std::cout << "Title: " << temp->title << ", Artist: " << temp->artist 
                  << ", Duration: " << temp->duration << "s, Genre: " << temp->genre << std::endl;
        temp = temp->next;
    }
}

void Playlist::sortByTitle() {
    head = mergeSort(head, "title");
}

void Playlist::sortByArtist() {
    head = mergeSort(head, "artist");
}

void Playlist::sortByDuration() {
    head = mergeSort(head, "duration");
}

void Playlist::sortByGenre() {
    head = mergeSort(head, "genre");
}

Song* Playlist::merge(Song* left, Song* right, const std::string& criteria) {
    Song* result = nullptr;

    if (!left)
        return right;
    if (!right)
        return left;

    if (criteria == "title") {
        if (left->title <= right->title) {
            result = left;
            result->next = merge(left->next, right, criteria);
        } else {
            result = right;
            result->next = merge(left, right->next, criteria);
        }
    } else if (criteria == "artist") {
        if (left->artist <= right->artist) {
            result = left;
            result->next = merge(left->next, right, criteria);
        } else {
            result = right;
            result->next = merge(left, right->next, criteria);
        }
    } else if (criteria == "duration") {
        if (left->duration <= right->duration) {
            result = left;
            result->next = merge(left->next, right, criteria);
        } else {
            result = right;
            result->next = merge(left, right->next, criteria);
        }
    } else if (criteria == "genre") {
        if (left->genre <= right->genre) {
            result = left;
            result->next = merge(left->next, right, criteria);
        } else {
            result = right;
            result->next = merge(left, right->next, criteria);
        }
    }

    return result;
}

Song* Playlist::mergeSort(Song* head, const std::string& criteria) {
    if (!head || !head->next)
        return head;

    Song* slow = head;
    Song* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Song* mid = slow->next;
    slow->next = nullptr;

    Song* left = mergeSort(head, criteria);
    Song* right = mergeSort(mid, criteria);

    return merge(left, right, criteria);
}
