mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j8
mv *.so ../python 
cd ../
rm -rf build

