#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*

int main()
{
    string path = "Resources/cards.jpg";
    Mat img = imread(path);
    
    float w = 250, h = 350;
    Mat matrix, imgWarp;
    

    // use paint software to find the point coordinates
    Point2f src[4] = {{780, 110}, {1015, 85}, {844, 350}, {1115, 330}}; //source
    Point2f dst[4] = {{0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h}}; //destination
    
    matrix = getPerspectiveTransform(src, dst);
    warpPerspective(img, imgWarp, matrix, Point(w,h));
    
    for (int i = 0; i<4; i++) {
        circle(img, src[i], 10, Scalar(0,0,255),FILLED);
    }
    
    imshow("Cards", img);
    imshow("Cards Warp", imgWarp);

    waitKey(0);
    
    return 0;
    
}
 
*/
