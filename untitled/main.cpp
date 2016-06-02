#include <QCoreApplication>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    VideoCapture cap("Wildlife.wmv");
    int i = 6;
    i=23*3;
    Mat mat;
    while(1){
        if(cap.read(mat))
            imshow("Opencv",mat);
        waitKey(45);
    }
    return a.exec();
}
