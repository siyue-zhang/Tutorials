#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//int main()
//{
    
    
    
    
    /*************
    // read image
    string path = "Resources/test.png";
    Mat img = imread(path); // Mat image data type
    imshow("Image", img);
    waitKey(0); // wait infinity
    **************/
    
    
    /*************
    // load video, load image in a while loop
    string path = "Resources/test_video.mp4";
    VideoCapture cap(path);
    Mat img;
     
    while (true) {
        cap.read(img);
        imshow("Image", img);
        waitKey(1); // delay 1 ms
    }
    **************/
    
    
    /*************
    // webcam, same as video only change path to device number
    VideoCapture cap(0);
    Mat img;
    
    while (true) {
        cap.read(img);
        imshow("Image", img);
        waitKey(10); // delay 10 ms
    }
    **************/
    
    
    
//    return 0;
//}








