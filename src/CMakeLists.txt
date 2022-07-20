cmake_minimum_required(VERSION 3.15)

# set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../.vcpkg/scripts/buildsystems/vcpkg.cmake"
#   CACHE STRING "Vcpkg toolchain file")

# set the project name
project(app VERSION 1.1)

include(FetchContent)

FetchContent_Declare(
  fmt
  GIT_REPOSITORY "https://github.com/fmtlib/fmt"
  GIT_TAG "c4ee726532178e556d923372f29163bd206d7732" # 9.0.0
)

FetchContent_Declare(
  json
  URL "https://github.com/nlohmann/json/releases/download/v3.10.5/json.tar.xz"
)

FetchContent_MakeAvailable(fmt json)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# /source-charset:utf-8 may be better
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
# add_compile_options("$<$<C_COMPILER_ID:MSVC>:/source-charset:utf-8>")
# add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")

add_subdirectory(lib1)
list(APPEND LIBS lib1)
list(APPEND PRIVATE_LIBS fmt::fmt nlohmann_json::nlohmann_json)

# add the executable
add_executable(app app.cc)

target_link_libraries(app PRIVATE ${PRIVATE_LIBS})
target_link_libraries(app PUBLIC ${LIBS})

# add the binary tree to the search path for include files
# so that we will find app.h
target_include_directories(app PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )