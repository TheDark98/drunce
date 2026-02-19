add_subdirectory(core)
add_subdirectory(formatting)


add_executable(${CMAKE_PROJECT_NAME} main.cpp)

if (WIN32)
	target_compile_options("${CMAKE_PROJECT_NAME}" PRIVATE /UUNICODE /U_UNICODE)
endif()

target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC core_definitions engine deck_handler player ai_logic formatting)