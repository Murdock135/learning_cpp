#include <iostream>
#include <cmath>

bool is_int(int a);

class lineType{

    private:
        int a, b, c;
        double slope;
        bool vertical = false, horizontal = false;

    public:
        lineType(int x_coef, int y_coef, int y_intercept);
        double getslope();
        bool isParallel(lineType);
        bool isPerpendicular(lineType);
        bool checkEqual(lineType);
};

lineType::lineType(int x_coef, int y_coef, int y_intercept){
    this-> a = x_coef;
    this-> b = y_coef;
    this-> c = y_intercept;
}

double lineType::getslope(){
    if(b == 0){
        std::cout << "Slope is undefined" << '\n';
        this-> vertical = true;
    }
    else{ 
        this-> slope = (double)-a/b; 
        return slope;
    }
}

bool lineType::checkEqual(lineType other_line){
    bool equal;
    int a1 = a;
    int b1 = b;
    int c1 = c;

    int a2 = other_line.a;
    int b2 = other_line.b;
    int c2 = other_line.c;
    
    double a_ratio = a1 > a2 ? (double)a1 / (double)a2 : (double)a2 / (double)a1;
    double b_ratio = b1 > b2 ? (double)b1 / (double)b2 : (double)b2 / (double)b1;
    double c_ratio = c1 > c2 ? (double)c1 / (double)c2 : (double)c2 / (double)c1;

    if(is_int(a_ratio) == true || is_int(b_ratio) == true || is_int(c_ratio) == true){
        equal = true;
    }
    else{ equal = false; }
    
    return equal;
}

bool lineType::isParallel(lineType other_line){
    bool parallel = false;
    double slope1 = slope;
    double slope2 = other_line.getslope();

    slope1 == slope2 ? parallel = true : parallel = false;

    return parallel;
}

bool lineType::isPerpendicular(lineType other_line){
    bool perpendicular = false;
    double slope1 = slope;
    double slope2 = other_line.getslope();


    slope1 * slope2 == -1 ? perpendicular = true : perpendicular = false;

    return perpendicular;
}

int main(){
    lineType line1(1,2,0);
    lineType line2(2,4,0);

    double slope1 = line1.getslope();
    
    std::cout << "Slope of line1: " << slope1 << '\n';
    std::cout << "Line1 and Line2 are equal: " << line1.checkEqual(line2) << '\n';

    return 0;
}

bool is_int(int a){
    return floor(a) == ceil(a);
}