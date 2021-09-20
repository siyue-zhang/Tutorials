#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
int main()
{

    // read image
    string path = "Resources/test.png";
    Mat img = imread(path); // Mat image data type
    Mat imgGray, imgBur, imgCanny, imgDil, imgErode;
    
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img, imgBur, Size(7,7), 3, 0);
    Canny(imgBur, imgCanny, 25, 75);
    
    //Dilate kernel, bigger size -> more dilate
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
    dilate(imgCanny, imgDil, kernel);
    
    erode(imgDil, imgErode, kernel);
    
    imshow("Image", img);
    //imshow("Image Gray", imgGray);
    //imshow("Image Blur", imgBur);
    imshow("Image Canny", imgCanny);
    imshow("Image Dilation", imgDil);
    imshow("Image Erode", imgErode);


    waitKey(0); // wait infinity

    
    
    return 0;
}
*/

