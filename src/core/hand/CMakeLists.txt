add_library(hand STATIC hand.cpp)

target_include_directories(hand PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(hand PUBLIC core_definitions card)