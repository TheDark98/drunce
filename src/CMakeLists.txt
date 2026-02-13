add_executable(DBC main.cpp cards.cpp seedGen.cpp)

if (WIN32)
	target_compile_options("${CMAKE_PROJECT_NAME}" PRIVATE /UUNICODE /U_UNICODE)
endif()

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC DBC_INCLUDE)