project(planning_main)#工程名
add_subdirectory(pnc_map)
add_subdirectory(process) #添加两个子目录

#将mian.cpp添加为可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)
#让主可执行文件能找到.h文件
target_include_directories(${PROJECT_NAME}
PUBLIC
#${CMAKE_SOURCE_DIR}/src/process 这么写也可以但可以通过在第一层设置变量的方式简化路径
${Process_Dir}#直接调用就好
)#让可执行文件以public的方式去包含头文件库所在的文件夹
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)#让可执行文件链接动态库，不是很懂