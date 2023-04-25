#!/bin/sh
cd build \
&& cmake -DCMAKE_INSTALL_PREFIX=$(gnuradio-config-info --prefix) -DCMAKE_BUILD_TYPE=Debug .. \
&& make -j$(nproc) \
&& echo "Build successful. Installing now." \
&& sudo make install \
&& sudo ldconfig \
&& cd ..
