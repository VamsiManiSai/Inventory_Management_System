// opps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random>
#include "rectangle.h"
#include "person.h"
#include "Item.h"
using namespace std;

class vehicle {

    public:
        string color;
        int speed;
        void forward(){
            cout << " vroom vroom" << endl;
        }

        void information() {
            cout << " The max spped of the bmw " << color << " color varient is " << speed << endl;
        }

        void setengine(string engine) {
            this->engine = engine;
        }
        string getengine() {
            return engine;
        }

    private:
        string engine;
};


class employee {

    private :
        string name;
        string department;
        string position;
        double salary;

    public:
        void set_name(string name) {
            this->name = name;
        }
        
        void set_department(string department) {
            this->department = department;
        }

        void set_position(string position) {
            this->position = position;
        }

        void set_salary(double salary) {
            this->salary = salary;
        }

        string get_name() {
            return name;
        }

        string get_department() {
            return department;
        }

        string get_position() {
            return position;
        }

        double get_salary() {
            return salary;
        }

        void to_string() {
            cout << " employee informaion " << endl;
            cout << " name   :  " << this -> name << endl;
            cout << " deartment :  " << this-> department<< endl;
            cout << " position  :  " << this-> position << endl;
            cout << " salary in $ :  " << this-> salary << endl;
            cout << endl;
            cout << endl;
        }
};

int main()
{

    /*vehicle bmw;

    bmw.color = "black";
    bmw.speed = 200;

    bmw.forward();
    bmw.information();

    rectangle rect;

    rect.setheight(4);
    rect.setwidth(3);

    cout << rect.cal_area() << endl;
    cout << rect.cal_circum() << endl;

    rectangle rect2;

    rect2.setheight(3);
    rect2.setwidth(1);

    cout << rect2.cal_area() << endl;
    cout << rect2.cal_circum() << endl;

    employee emp1;
    emp1.set_name("vamsi");
    emp1.set_department("Development");
    emp1.set_position("level1");
    emp1.set_salary(25000.80);
    emp1.to_string();

    employee emp2;
    emp2.set_name("solomon");
    emp2.set_department("Tester");
    emp2.set_position("level1");
    emp2.set_salary(25000.80);
    emp2.to_string();

    person p1("Vamsi Krishna");
    p1.person_info();*/

    Item i("cpp", 10, 300.49, 400.99);
    i.display();

    Item i2("python", 7, 200.99, 449.49);
    i2.display();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
