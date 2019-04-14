mkdir _build
cd _build
set PATH=C:\Users\dimka\CLionProjects\cplusplus4;%PATH%

cmake^
 -G "MinGW Makefiles"^
 -D CMAKE_INSTALL_PREFIX=C:\Users\dimka\CLionProjects\cplusplus4\_install^
 C:\Users\dimka\CLionProjects\cplusplus4
    
mingw32-make

mingw32-make test

cmake -D COMPONENT=developer -P cmake_install.cmake

cd ..