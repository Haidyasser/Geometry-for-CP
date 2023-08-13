#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-10
#define X real()
#define Y imag()

#define vec(a,b) ((b)-(a))
#define angle(a) (atan2((a).Y,(a).X))
#define length(a) (hypot((a).Y,(a).X))

// Normalizes a vector is a unit vector in the same direction
#define normalize(a) ((a)/length(a))
// Dot product
#define dp(a,b) ((conj(a)*(b)).real())
// Cross product
#define cp(a,b) ((conj(a)*(b)).imag())
// Angle between two vectors
#define angle(a,b) (acos(dp(a,b)/length(a)/length(b)))
#define same(p1,p2) (dp(vec(p1,p2),vec(p1,p2)) < EPS)
#define lengthSqr(a) (dp(a,a))


typedef complex<double> point;
int dcmp(double x, double y) {
    return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1;
}

bool isCollinear(point a, point b, point c) {
    return dcmp(cp(b - a, c - a), 0) == 0;
}

bool isPointOnRay(point a, point b, point c) {
    return isCollinear(a, b, c) && dcmp(dp(b - a, c - a), 0) == 1;
}

bool isPointOnSegment(point a, point b, point c) {
    return isPointOnRay(a, b, c) && isPointOnRay(b, a, c);
}