#!/usr/bin/bash

echo Downloading packages
apt-get install -y libjpeg8-dev libtiff5-dev libjasper-dev libpng12-dev
apt-get install -y libgtk2.0-dev
apt-get install -y libavcodec-dev libavformat-dev libswscale-dev libv4l-dev
apt-get install -y libatlas-base-dev gfortran

# Cloning OpenCV repository
git clone https://github.com/Itseez/opencv.git
cd opencv
git checkout 3.1.0
cd ..

# Cloning OpenCV contrib repository
git clone https://github.com/Itseez/opencv_contrib.git
cd opencv_contrib
git checkout 3.1.0

# Building OpenCV
cd /src/opencv/
mkdir /src/opencv/build
cd /src/opencv/build
cmake -D CMAKE_BUILD_TYPE=RELEASE \
-D CMAKE_INSTALL_PREFIX=/usr/local \
-D INSTALL_C_EXAMPLES=OFF \
-D PYTHON_EXECUTABLE=/usr/bin/python2.7 \
-D PYTHON_INCLUDE=/usr/include/python2.7/ \
-D PYTHON_PACKAGES_PATH=/usr/local/lib/python2.7/site-packages/ \
-D PYTHON_NUMPY_INCLUDE_DIR=/usr/local/lib/python2.7/dist-packages/numpy/core/include/ \
-D INSTALL_PYTHON_EXAMPLES=ON \
-D OPENCV_EXTRA_MODULES_PATH=/src/opencv_contrib/modules \
-D BUILD_EXAMPLES=ON ..
make -j3
make install
ldconfig

#cp /usr/local/lib/python2.7/site-packages/cv2.so /app/.pyenv/versions/anaconda2-4.2.0/lib/python2.7/site-packages/