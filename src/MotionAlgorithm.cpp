//
// Created by chrisn on 7/7/19.
//

#include "MotionAlgorithm.h"
#include "Logger.h"

std::shared_ptr<VideoEvent> MotionAlgorithm::process(std::shared_ptr<Image> image) {

   if (average.rows == 1) {
      average = cv::Mat(image->rows(), image->cols(), CV_32FC3);
   }
   if (image->rows() == average.rows) {
      if (image->cols() == average.cols) {
         images.push_back(image);
         images.pop_back();
      } else {
         Logger::getInstance().logError("error motion algorithm image dimensions changed");
      }
   } else {
      Logger::getInstance().logError("error motion algorithm image dimensions changed");
   }
}

MotionAlgorithm::MotionAlgorithm() {
   //simple init
   average = cv::Mat(1, 1, CV_8UC1);
}
