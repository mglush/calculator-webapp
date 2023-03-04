cmake_minimum_required(VERSION 3.0)

project(CalculatorAPI)

# set up restbed here.
find_path( restbed_SOURCE
           NAMES "distribution"
           HINTS "${PROJECT_SOURCE_DIR}/restbed"
         )

if ( restbed_SOURCE )
    set( restbed_BUILD "${CMAKE_CURRENT_BINARY_DIR}/restbed_build" )
    set( restbed_DISTRIBUTION "${restbed_SOURCE}/distribution" )
    set( restbed_INCLUDE "${restbed_DISTRIBUTION}/include" )
    set( restbed_LIBRARY "${restbed_DISTRIBUTION}/library" )

    message( STATUS "${Green}Found Restbed include at: ${restbed_INCLUDE}${Reset}" )
else ( )
    message( FATAL_ERROR "${Red}Failed to locate Restbed dependency.${Reset}" )
endif ( )

# find all files from restbed library
file(GLOB_RECURSE restbed_LIBRARY_FILES
        "${restbed_LIBRARY}/*.a")

include_directories(${restbed_INCLUDE})

add_executable(CalculatorAPI
    main.cpp
    CalcResourceFactory.cpp
    CalcService.cpp
    CalcServiceSettingsFactory.cpp)

target_link_libraries(CalculatorAPI ${restbed_LIBRARY_FILES})

target_include_directories(CalculatorAPI PUBLIC ${CMAKE_SOURCE_DIR}/include)

set_property(TARGET CalculatorAPI PROPERTY CXX_STANDARD 17)