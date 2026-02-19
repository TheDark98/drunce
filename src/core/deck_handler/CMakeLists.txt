add_library(deck_handler STATIC deck_handler.cpp)

target_include_directories(deck_handler PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(deck_handler PUBLIC card hand generator)