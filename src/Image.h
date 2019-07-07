//
// Created by chrisn on 7/7/19.
//

#ifndef CATAWAY_IMAGE_H
#define CATAWAY_IMAGE_H


#include <opencv2/core/mat.hpp>

class Image {
public:
   int rows() { return mat.rows; }

   int cols() { return mat.cols; }

   cv::Mat mat;
};


#endif //CATAWAY_IMAGE_H
