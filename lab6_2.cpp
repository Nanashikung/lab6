#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double d){
    return d/ 180*M_PI;
}

double rad2deg(double r){
    return r / M_PI * 180;
}

double findXComponent(double x1,double x2,double a1x,double a2x){
    return (x1*cos(a1x))+(x2*cos(a2x));
}

double findYComponent(double y1,double y2,double a1y,double a2y){
    return (y1*sin(a1y))+(y2*sin(a2y));
}

double pythagoras(double xsum,double ysum){
    return sqrt((pow(xsum,2)+pow(ysum,2)));
}

void showResult(double sum1,double sum2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<< sum1 <<endl;
    cout << "Direction of the resultant vector (deg) = "<< sum2<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
