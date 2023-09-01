project(ressource)

qt6_add_resources(RESSOURCES styles/styles.qrc)

add_library(_static_ressources ${RESSOURCES})
target_link_libraries(_static_ressources PRIVATE QT6::Core)
add_library(ressources ALIAS _static_ressources)