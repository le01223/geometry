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

void ReadPoint(Point& number) {
    int first, second;
    std::cin >> first >> second;
    number.x = first;
    number.y = second;
}