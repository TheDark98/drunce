add_library(ai_logic STATIC ai_logic.cpp)

target_include_directories(ai_logic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(ai_logic PUBLIC core_definitions engine player)