#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <cstring>
using string::std;

class VertexStruct {
private:
    float x, y, z;
public:
    void setToZero();
    void set(float vx, float vy, float vz);
    void showSet();
};
// From class VertexStrcut to here, could be the header.h file of class VertexStrcut 
void VertexStruct::setToZero() {
    x = 0;
    y = 0;
    z = 0;
}
void VertexStruct::set(float vx, float vy, float vz) {
    this->x = vx;
    this->y = vy;
    this->z = vz;
}
void VertexStruct::showSet() {
    cout << "Vx: " << x << ", Vy: " << y << ", Vz: " << z << '\n';
}
// From void setToZero() to void showSet() you could put thofse at VertextStruct.cpp file 
// If you are gonna use it all at one file, need to add VertexStruct::setToZero() like this.


int main(){

    VertexStruct v;
     /*v.x = 1;      // all of them are inaccessible, bc they are private
    v.y = 2;
    v.z = 3;*/
    v.set(3, 5, 8);
    v.showSet();

    return 0;
}
