#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/opencv.hpp"
#include<vector>
#include<iostream>
#include<fstream>

///////////
////
//// Usage notes: requires c++14
//// To complile:  g++ -std=c++14 q10.cpp -o q10 `pkg-config --libs opencv`


int main(){
    
    std::ofstream outfile;
    outfile.open ("4102a1.txt");
    

    //rotation matrix = I3
    cv::Mat rMatrix = (cv::Mat_<double>(3,3) << 1, 0, 0, 0, 1, 0, 0, 0, 1);
    
    //t matrix = [-170, -105, -70]T
    cv::Mat tMatrix = (cv::Mat_<double>(3, 1) << -170.0, -105.0, -70.0);
    
    // Camera Matrix - K matrix
    // focal length: f = 500
    // pixel sizes: sx = sy = 1
    // (o_x, o_y> = (320,240)    
    cv::Mat kMatrix = (cv::Mat_<double>(3,3) << -500, 0, 320, 0, -500, 240, 0, 0, 1);
    
    //Distortion effects, all zero
    cv::Mat distMatrix = (cv::Mat_<double>(4,1) << 0,0,0,0);

    //Object point
    cv::Point3f inPoint = cv::Point3f(350.0, 220.0, 150.0);
    std::vector<cv::Point3f> objPoints = {inPoint};
    
    //image points
    std::vector<cv::Point2f> imPoints; 
    
    cv::projectPoints(objPoints, rMatrix, tMatrix, kMatrix, distMatrix, imPoints);
    
    std::cout << "Object point: ";
    outfile << "Object point: ";
    for(auto& e1: objPoints) {
        std::cout << e1 << std::endl;
        outfile << e1 << std::endl;
    }
    std::cout << "Image point: " ;
    outfile << "Image point: " ;
    for(auto& e1: imPoints){
        std::cout << e1 << std::endl;
        outfile << e1 << std::endl;
    }
    
    outfile.close();
    
    return 0;
}