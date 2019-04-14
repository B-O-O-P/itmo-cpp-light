#ifndef CPLUSPLUS10_POINT_H
#define CPLUSPLUS10_POINT_H


struct Point {
    Point();
    Point(double x, double y);

    double getX() const;
    double getY() const;

private:
    double x;
    double y;
};


#endif //CPLUSPLUS10_POINT_H
