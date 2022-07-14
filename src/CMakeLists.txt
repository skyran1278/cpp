cmake_minimum_required(VERSION 3.15)

# set the project name
project(app VERSION 1.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib1)
list(APPEND EXTRA_LIBS lib1)

# add the executable
add_executable(app app.cc)

target_link_libraries(app PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find app.h
target_include_directories(app PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )