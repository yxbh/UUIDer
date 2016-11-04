# go to source directory.
pwd
cd Source

# build DEBUG build.
qmake UUIDer.pro "CONFIG+=debug"
IF ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

mingw32-make
IF ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

# build RELEASE build.
qmake UUIDer.pro
IF ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

mingw32-make
IF ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }