#ifndef CIRCLE_RECOGNITION_9_H
#define CIRCLE_RECOGNITION_9_H

#include <opencv2/opencv.hpp>
#include <xfeatures2d.hpp>
#include <opencv2/dnn.hpp>
#include <iostream>
#include <string>
#include "tinyxml.h"
#include <sstream>
#include "common_function.h"
#include "global_variable.h"

void Analyze_category_9_xml(char*PathStore_4);
int circle_recognition(cv::Mat In, string finger_folder, roiResult_s *results_circle);

#endif

