add_library(generator STATIC generator.cpp)

target_include_directories(generator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})