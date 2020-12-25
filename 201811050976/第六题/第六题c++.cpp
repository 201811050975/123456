#include <iostream>
using namespace std;
class vehicle {
private:
    int wheels;
    int weight;
public:
    vehicle(int m, int n) {
        wheels = m;
        weight = n;
    }
    void print() {
        cout << "The wheels is " << wheels << endl;
        cout << "The weight is " << weight << endl;
    }
};
class car :private vehicle {
private:
    int passenger_load;
public:
    car(int m, int n, int p) :vehicle(m, n) {
        passenger_load = p;
    }
    void print() {
        cout << "The passenger_load is " << passenger_load << endl;
    }
};
class truck :private vehicle {
private:
    int payload;
    int passenger_load;
public:
    truck(int m, int n, int p1, int p2) :vehicle(m, n) {
        payload = p1;
        passenger_load = p2;
    }
    void print() {
        cout << "The passenger_load is " << passenger_load << endl;
        cout << "The payload is " << payload << endl;
    }
};
int main()
{
    vehicle a(4, 200);
    a.print();
    //car b(4,100,5);
    //b.print();
    truck c(4, 1000, 10000, 4);
    c.print();
    return 0;
}