add_library(player STATIC player.cpp)

target_include_directories(player PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(player PUBLIC card ai_logic hand)