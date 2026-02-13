add_subdirectory(card)
add_subdirectory(generator)
add_subdirectory(deck)
add_subdirectory(hand)
add_subdirectory(engine)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

if (WIN32)
	target_compile_options("${CMAKE_PROJECT_NAME}" PRIVATE /UUNICODE /U_UNICODE)
endif()

# target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC DBC_INCLUDE card deck)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ftxui card deck hand engine)