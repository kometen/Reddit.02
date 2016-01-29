/*
 * Point.hpp
 *
 *  Created on: 26/01/2016
 *      Author: claus
 */

#ifndef POINT_HPP_
#define POINT_HPP_

#include <iostream>

namespace gnome {

class Point {
private:
    int x_;
    int y_;

public:
    Point();
    Point(const int, const int);
    virtual ~Point();
    const int x();
    const int y();
    void setX(const int x);
    void setY(const int y);
    const Point friend operator+(const Point, const Point);
    const Point friend operator-(const Point, const Point);
    friend std::ostream& operator<<(std::ostream&, const Point&);
};

} /* namespace gnome */

#endif /* POINT_HPP_ */
