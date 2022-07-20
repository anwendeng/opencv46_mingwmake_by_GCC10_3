#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() try
{
	cout<<"try opencv\n";
	
	Mat im=imread("kanji.jpg");
	imshow("dog",im);
	waitKey(0);

	return 0;
}
catch(exception& e){
	cerr<<e.what();
	return 1;
}
