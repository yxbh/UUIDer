# go to source directory.
pwd
cd Source

# build DEBUG build.
qmake UUIDer.pro "CONFIG+=debug"
mingw32-make

# build RELEASE build.
qmake UUIDer.pro
mingw32-make