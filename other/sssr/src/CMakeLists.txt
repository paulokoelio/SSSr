cmake_minimum_required(VERSION 3.2)

add_library(SSSr 
                sssr_version.cpp                    
                sssr.cpp 
                    
            )

set_target_properties(SSSr PROPERTIES
	CXX_STANDART 17
	CXX_STANDART_REQUIRED ON
)


target_include_directories(SSSr PUBLIC ${PROJECT_SOURCE_DIR}/headers
                                            "${CMAKE_BINARY_DIR}/headers"
                                            ${PROJECT_SOURCE_DIR}/solver
                                            "/usr/include/c++/8/")

target_link_libraries( SSSr PRIVATE stdc++fs solver_lib)
                                

if (MSVC)
    target_compile_options(SSSr PRIVATE
        /W4
    )
else ()
    target_compile_options(SSSr PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

