/*
 * Point.cpp
 *
 *  Created on: 26/01/2016
 *      Author: claus
 */

#include "Point.hpp"

namespace gnome {

Point::Point() : x_(0), y_(0) {}

Point::Point(const int x, const int y) : x_(x), y_(y) {}

void Point::setX(const int x) {
    this->x_ = x;
}

void Point::setY(const int y) {
    this->y_ = y;
}

const int Point::x() {
    return x_;
}

const int Point::y() {
    return y_;
}

Point::~Point() {
    // TODO Auto-generated destructor stub
}

const Point operator+(const Point a, const Point b) {
    Point tmp = a;
    tmp.x_ += b.x_;
    tmp.y_ += b.y_;
    return tmp;
}

const Point operator-(const Point a, const Point b) {
    Point tmp = a;
    tmp.x_ -= b.x_;
    tmp.y_ -= b.y_;
    return tmp;
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    return out << "(" << p.x_ << ", " << p.y_<< ")";
}

} /* namespace gnome */
