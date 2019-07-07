#include <iostream>
#include "opencv/include/opencv2/opencv.hpp"

int main() {

   std::cout << "Hello, World!" << std::endl;

   cv::Mat tmp;

   while (true) {
      capture.read(tmp);
      if (tmp.rows) {
         std::cout << "got frame" << std::endl;
         cv::imshow("cam", tmp);
         cv::waitKey(10);
         tmp.rows = 0;
      }
   }

   return 0;
}