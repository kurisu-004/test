#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    Mat image;
    image = imread("1.jpg");

    //open failed
    if (image.empty())
    {
        cout << "could not open the picture!" << endl;
        cin.get();
        return -1;
    }

    //create the window and show pictures
    String windowName = "1";
    namedWindow(windowName);
    imshow(windowName, image);
    waitKey();
    
    cout << "shut down" << endl;

    destroyAllWindows();
    return 0;
}