double fixAngle(double angle) {
    if(angle > 1)
        return 1;
    if(angle < -1)
        return -1;
    return angle;
}
// sin(A)/a = sin(B)/b = sin(C)/c
double getSide_A(double side_b, double angle_B, double angle_A) {
    return side_b * sin(angle_A) / sin(angle_B);
}

double getAngle_A(double side_a, double side_b, double angle_B) {
    return asin(fixAngle(side_a * sin(angle_B) / side_b));
}

// a^2 = b^2 + c^2 - 2bc * cos(A)
double getAngle_A(double side_a, double side_b, double side_c) {
    return acos(fixAngle((side_b * side_b + side_c * side_c - side_a * side_a) / (2 * side_b * side_c)));
}

//given length of three medians, find the area of the triangle
double getArea(double median_a, double median_b, double median_c) {
    if(median_a <= 0 || median_b <= 0 || median_c <= 0)
        return -1;
    double s = (median_a + median_b + median_c) / 2;
    double median_area = sqrt(s * (s - median_a) * (s - median_b) * (s - median_c));
    if(median_area <= 0)
        return -1;
    return median_area * 4 / 3;
}