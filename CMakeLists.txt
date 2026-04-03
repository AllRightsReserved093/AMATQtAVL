cmake_minimum_required(VERSION 3.19)
project(QtAVL LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS 
    Core 
    Widgets
    3DCore
    3DRender
    3DExtras
    3DInput
    3DQuick
)

qt_standard_project_setup()

qt_add_executable(QtAVL
    WIN32 MACOSX_BUNDLE
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
    src/mainwindow.ui
    src/viewport/viewport3d.cpp
    src/viewport/viewport3d.h
)

target_link_libraries(QtAVL
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::3DCore
        Qt::3DRender
        Qt::3DExtras
        Qt::3DInput
        Qt::3DQuick
)

include(GNUInstallDirs)

install(TARGETS QtAVL
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET QtAVL
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
