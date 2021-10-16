#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int width;
        int height;

    public:
        // use constructor to initialize the class values
        Rectangle(int w, int h)
        {
            width = w;
            height = h;
        }

        int area()
        {
            return width * height;
        }

        void changeWidth(int w)
        {
            width = w;
        }

};



int main()
{
    Rectangle r(10,5);
    cout << r.area() << endl;
    
    r.changeWidth(20);
    cout << r.area() << endl;

    return 0;
}