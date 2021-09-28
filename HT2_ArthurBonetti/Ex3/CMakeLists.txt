cmake_minimum_required( VERSION 2.8 )
project(main_fold)

set(CMAKE_CXX_FLAGS "-std=c++11 -O3")

# if the library is installed in a standard location, we would use
# find_library and not specify this manually. We choose to do it manually
# to keep it simpler.
if(NOT LIBRARY_INSTALL_PATH) # cmake was not invoced with -DLIBRARY_INSTALL_PATH
    set(LIBRARY_INSTALL_PATH ${CMAKE_SOURCE_DIR}/../install) # hardcoded
endif()

link_directories(${LIBRARY_INSTALL_PATH}/lib)
include_directories(${LIBRARY_INSTALL_PATH}/include)

add_executable(main_fold main.cpp)
target_link_libraries(main_fold rotate_scale)

install(TARGETS main_fold DESTINATION bin)
