#include <librealsense2/rs.hpp>
#include <opencv2/opencv.hpp>

int main() {
rs2::config cfg;
cfg.enable_stream(RS2_STREAM_FISHEYE, 1, RS2_FORMAT_Y8);
cfg.enable_stream(RS2_STREAM_FISHEYE, 2, RS2_FORMAT_Y8);
rs2::pipeline pipe;
pipe.start(cfg);

while (true) {
rs2::frameset data = pipe.wait_for_frames();
rs2::frame image_left = data.get_fisheye_frame(1);
rs2::frame image_right = data.get_fisheye_frame(2);

if (!image_left || !image_right) break;

cv::Mat cv_image_left(cv::Size(848, 800), CV_8U, (void*)image_left.get_data(), cv::Mat::AUTO_STEP);
cv::Mat cv_image_right(cv::Size(848, 800), CV_8U, (void*)image_right.get_data(), cv::Mat::AUTO_STEP);

cv::imshow("left", cv_image_left);
cv::imshow("right", cv_image_right);
cv::waitKey(1);
}
return 0;
}