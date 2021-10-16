#include <iostream>

using namespace std;

/*
    Change original data -> pass pointer as input
    Create new value -> pass value as input
*/

struct Rectangle
{
    /* data */
    int width;
    int height;
};

void initialize (struct Rectangle *r, int w, int h)
{
    r -> width = w;
    r -> height = h;
}

int area(struct Rectangle r)
{
    int area = r.width * r.height;
    return area;
}

void changeWidth(struct Rectangle *r, int w)
{
    r -> width = w;
}


int main()
{
    struct Rectangle myRec;
    initialize(&myRec, 10, 5);
    
    int a = area(myRec);
    cout << a << endl;

    changeWidth(&myRec, 100);
    a = area(myRec);
    
    cout << a << endl;
    return 0;
}
