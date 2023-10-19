#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Car {
    
    public:

    string brand;
    int no_of_wheels;
    string color;
    int no_of_gears;
    double top_speed;

    Car(string brand) {
        cout << "Your Car is being Created" << endl;
        this->brand = brand;
        this->no_of_wheels = 4;
        this->color = "";
        this->no_of_gears = 5;
        this->top_speed = 0.0;
    }


    void accelerate() {
        cout << brand << " is Accelerating" << endl;
    }

    void applying_break() {
        cout << brand << "'s breaks are being applied" << endl;
    }
};

int main() {

    Car* bmw = new Car("BMW");

    cout << "Top speed = " << bmw->top_speed << endl;
    cout << "No of Wheels = " << bmw->no_of_wheels << endl;
    cout << "Brand Name = " << bmw->brand << endl;

    Car* m_800 = new Car("Maruti 800");

    m_800->no_of_wheels = 3;

    cout << "Wheels of M_800 = " << m_800->no_of_wheels << endl;
    cout << "Wheels of BMW = " << bmw->no_of_wheels << endl;

    return 0;
}
