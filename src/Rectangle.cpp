/*
 * Rectangle.cpp
 *
 *  Created on: 29/01/2016
 *      Author: claus
 */

#include "Rectangle.hpp"

namespace gnome {

Rectangle::Rectangle() :
    p1(Point{0, 0}),
    p2(Point{0, 0}),
    length{0},
    width{0},
    perimeter{0},
    area{0}
    { }

Rectangle::Rectangle(const Point& p1, const Point& p2) :
    p1(p1),
    p2(p2),
    length{xDistance()},
    width{yDistance()},
    perimeter{getPerimeter()},
    area{getArea()}
    { }

const unsigned int Rectangle::xDistance() {
    return abs(p2.x() - p1.x());
}

const unsigned int Rectangle::yDistance() {
    return abs(p2.y() - p1.y());
}

const float Rectangle::getArea() {
    return length * width;
}

const unsigned int Rectangle::getPerimeter() {
    return 2 * length + 2 * width;
}

std::ostream& Rectangle::display(std::ostream& os) const {
    return os << "Rectangle, perimeter: " << perimeter << ", area: " << area;
}

Rectangle::~Rectangle() {
}

} /* namespace gnome */
