add_executable(DBC main.cpp cards.cpp seedGen.cpp)

SET(GCC_CUSTOM_LINK_FLAGS "-lreadline")

SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_CUSTOM_LINK_FLAGS}")


if(MSVC)
	target_compile_definitions("${CMAKE_PROJECT_NAME}" PUBLIC _CRT_SECURE_NO_WARNINGS)

	set_target_properties("${CMAKE_PROJECT_NAME}" PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
endif()

#force remove unicode
if (WIN32)
	target_compile_options("${CMAKE_PROJECT_NAME}" PRIVATE /UUNICODE /U_UNICODE)
endif()

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC DBC_INCLUDE)