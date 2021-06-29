#include "Image.h"
#include <cstring>
#include <iostream>
#include <fstream>

class Event;
class Point;

Image::Image(const char *file) {
    strcpy(_fileName, file);
    std::cout << "Constructing image from file " << file << "." << std::endl;
}

Image::~Image() { delete _fileName; }

void Image::Draw(const Point &at) {
    std::cout << "Drawing image at point " << at << "." << std::endl;
}

void Image::HandleMouse(Event &event) {
    // std::cout << "Handling mouse event " << event << std::endl;
}

const Point &Image::GetExtent() { return _extent; }

void Image::Load(std::istream &from) {
    std::cout << "Loading image from input stream ";
    std::copy(std::istream_iterator<char>(from), std::istream_iterator<char>(),
              std::ostream_iterator<char>(std::cout));
}

void Image::Save(std::ostream &to) {
    std::cout << "Saving image to output stream ";
    // TODO
}

std::ostream &operator<<(std::ostream &os, const Image &i) {
    os << i._extent << " " << i._fileName;
    return os;
}

std::istream &operator>>(std::istream &is, Image &i) {
    is >> i._extent;

    const auto str = std::string(i._fileName);
    for (auto ch : str) {
        is >> ch;
    }

    return is;
}
