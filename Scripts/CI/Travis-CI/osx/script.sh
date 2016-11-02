
cd Source

qmake UUIDer.pro "CONFIG+=debug"
make

make clean
qmake UUIDer.pro
make
