add_library(card STATIC card.cpp)

target_include_directories(card PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(card PUBLIC core_definitions)