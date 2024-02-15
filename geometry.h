#include<iostream>


struct Point {
    int x;
    int y;
};

struct Point AddPoints(Point a, Point b) {
    Point c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

void PrintPoint(Point a) {
    std::cout <<  a.x << " " << a.y  << '\n';
}

Point ReadPoint(Point& number) {
    Point point;
    std::cin >> point.x >> point.y;
    return point;
}