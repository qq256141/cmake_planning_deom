project(process)

add_library(${PROJECT_NAME}
SHARED
process.cpp
)#生成动态库，由于只有一个文件就是process.cpp所以可以这么写，如果有很多的话，可以通过如最开始设置变量的方法来写。

target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir})#指定头文件包含目录，这个就是找头文件的

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)
target_link_libraries(${PROJECT_NAME}
PUBLIC
Eigen3::Eigen
)