set(cmake_generated ${CMAKE_BINARY_DIR}/CMakeCache.txt
        ${CMAKE_BINARY_DIR}/cmake_install.cmake
        ${CMAKE_BINARY_DIR}/Makefile
        ${CMAKE_BINARY_DIR}/CMakeFiles
        ${CMAKE_BINARY_DIR}/third_party
        ${CMAKE_BINARY_DIR}/boost
        ${CMAKE_BINARY_DIR}/ndn
        )

foreach (file ${cmake_generated})

    if (EXISTS ${file})
        file(REMOVE_RECURSE ${file})
    endif ()

endforeach (file)