cmake_minimum_required(VERSION 3.22)


project(HydraRD)

set(TargetName HydraRDTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set (BOOST_INCLUDEDIR /usr/local/include/boost)
set (BOOST_LIBRARYDIR /usr/lib/x86_64-linux-gnu)
set (Boost_NO_SYSTEM_PATHS ON)
#set (Boost_USE_MULTITHREADED ON)
set (Boost_USE_STATIC_LIBS ON)
set (Boost_USE_STATIC_RUNTIME OFF)
set (BOOST_ALL_DYN_LINK OFF)

#find_package (Boost 1.70.0 REQUIRED)
#find_package (Python COMPONENTS Interpreter Development)


add_executable(${TargetName})

include_directories(include $ENV{USDROOT}/include ${Boost_INCLUDE_DIR} /usr/local/include/python3.7m)

target_sources(${TargetName} PRIVATE ${PROJECT_SOURCE_DIR}/src/test.cpp)

link_directories($ENV{USDROOT}/lib)
link_libraries($ENV{USDROOT}/lib)
#link_libraries(${PYTHON_LIBRARY})
target_include_directories(${TargetName} PRIVATE ${Boost_LIBRARIES} )#${PYTHON_LIBRARIES})

target_link_libraries(${TargetName} ${Boost_LIBRARIES} /usr/local/lib/libpython3.7m.a)# ${PYTHON_LIBRARIES} )
