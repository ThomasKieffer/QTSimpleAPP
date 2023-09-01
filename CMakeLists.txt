cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(MyQtProject)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Set the path to Qt6Config.cmake based on your Qt installation
set(QT_INSTALL_PATH "C:/Qt/6.5.1/msvc2019_64")

list(APPEND CMAKE_PREFIX_PATH "${QT_INSTALL_PATH}")
set(Qt6_DIR "${QT_INSTALL_PATH}/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

if(MSVC)
    add_compile_options(/Zc:__cplusplus)
    add_compile_options(/permissive-)
    add_compile_definitions(_ENABLE_EXTENDED_ALIGNED_STORAGE)
endif()

# Set the source files
set(SOURCES
    src/main.cpp
    src/controllers/incrementController.cpp
    src/models/incrementModel.cpp
    src/views/incrementView.cpp
)

# Set the header files
set(HEADERS
    include/controllers/incrementController.h
    include/models/incrementModel.h
    include/views/incrementView.h
    include/views/mainWindow.h
)

# # Set the resource file
# set(RESOURCES
#     styles/styles.qrc
# )

# # Generate the C++ source file from the resource file
# qt6_add_resources(${PROJECT_NAME} ${RESOURCES})


add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Widgets)
