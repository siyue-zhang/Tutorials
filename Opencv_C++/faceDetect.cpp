
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
/////////////// Images //////////////////////

int main() {
    
    // webcam, same as video only change path to device number
    VideoCapture cap(0);
    Mat img;
    
    CascadeClassifier faceCascade;
    faceCascade.load("Resources/haarcascade_frontalface_default.xml");
    
    if (faceCascade.empty()) { cout << "XML file not loaded" << endl;}
    
    while (true) {
        cap.read(img);
        
        vector<Rect> faces;
        faceCascade.detectMultiScale(img, faces, 1.1, 10);
        
        for (int i = 0; i < faces.size(); i++)
        {
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
        }
        
        imshow("Image", img);
        waitKey(2); // delay 10 ms
    }
    
    return 0;
}

*/
