#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

/*
 * ��ȡ����ʾͼ��
 */
int main() {
    // Mat image = imread("../images/liuyifei_1.png");
    // ��ȡ��ʱ��Ӳ�����ʹ��ȡ��Ϊ�Ҷ�ͼ��
    Mat image = imread("../images/liuyifei_1.png",IMREAD_GRAYSCALE);

    if (image.empty()) {
        cout << "could not load image..." << endl;
        return -1;
    }

    namedWindow("input");
    imshow("input",image);
    waitKey(0);
    return 0;
}