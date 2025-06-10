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
        ans = 3.14 * r * r;
        cout << "Circle area :- " << ans << endl;
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
        ans = 0.5 * b * h;
        cout << "Tringle area :- " << ans << endl;
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
        ans = w * h;
        cout << "Ractangle area :- " << ans << endl;
    }
};
main()
{
    Shape *s; // pointer object
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