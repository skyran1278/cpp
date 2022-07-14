add_library(lib1 lib1.cc)

# state that anybody linking to us needs to include the current source dir
# to find MathFunctions.h, while we don't.
target_include_directories(lib1
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )