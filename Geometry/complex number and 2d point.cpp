#include <complex>
#include <cmath>
const double PI = acos(-1);
const double EPS = 1e-10;
typedef complex<double> point;

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

// s
#define same(p1,p2) (dp(vec(p1,p2),vec(p1,p2)) < EPS)
// Norm of a vector
#define lengthSqr(a) (dp(a,a))
#define rotateO(p,ang) ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about) (rotateO(vec(about,p),ang)+about)
#define reflectO(v,m) (conj((v)/(m))*(m))
#define reflectA(p,m,about) (about+reflectO(vec(about,p),m))

