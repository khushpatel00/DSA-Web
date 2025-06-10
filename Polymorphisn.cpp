#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape";
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        int r;
        float ans;
        cout << "Enter radius :- ";
        cin >> r;
        cout << "Circle area :- " << 3.14 * r * r << endl;
    }
};
class Tringle : public Shape
{
public:
    void draw() override
    {
        int h, b;
        float ans;
        cout << "Enter Tringle Base :- ";
        cin >> b;
        cout << "Enter Tringle Height:- ";
        cin >> h;
        cout << "Tringle area :- " << 0.5 * b * h << endl;
    }
};
class Ractangle : public Shape
{
public:
    void draw() override
    {
        int w, h;
        float ans;
        cout << "Enter Ractangle Width :- ";
        cin >> w;
        cout << "Enter Ractangle Height:- ";
        cin >> h;
        cout << "Ractangle area :- " << w * h << endl;
    }
};
main()
{
    Shape *s;
    Circle c;
    Tringle t;
    Ractangle r;
    s = &c;
    s->draw();
    s = &t;
    s->draw();
    s = &r;
    s->draw();
}