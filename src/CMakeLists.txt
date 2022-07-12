cmake_minimum_required(VERSION 3.15)

# set the project name
project(App VERSION 1.0)

add_subdirectory(Lib1)
list(APPEND EXTRA_LIBS Lib1)
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Lib1")

# add the executable
add_executable(App app.cc)

target_link_libraries(App PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(App PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           ${EXTRA_INCLUDES}
                           )