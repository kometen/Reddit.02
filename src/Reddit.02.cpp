//============================================================================
// Name        : 02.cpp
// Author      : Claus Guttesen
// Version     :
// Copyright   : From www.reddit.com/r/cpp_questions/comments/42pgy2/shape_classes_help_with_errors/
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Circle.hpp"

using namespace std;

int main() {
	cout << "Blåbærsyltetøj" << endl;

    gnome::Point p1 {0, 3};
    gnome::Point p2 {-2, 0};
    gnome::Point p3 = p1 + p2;
    gnome::Point p4 = p1 - p2;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;

    gnome::Circle c1 {};
    gnome::Circle c2 {p1, p2};
    cout << c1 << endl;
    cout << c2 << endl;

	return 0;
}
