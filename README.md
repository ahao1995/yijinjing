# yijinjing
基于功夫1.0 mmap通信库组件
依赖 log4cplus boost

```
# 安装log4cplus
wget https://github.com/log4cplus/log4cplus/releases/download/REL_2_0_5/log4cplus-2.0.5.tar.gz
tar -zxvf log4cplus-2.0.5.tar.gz
cd log4cplus-2.0.5
mkdir build
cd build
cmake ..
make
make install
# 安装boost
yum install boost
yum install boost-devel
# 运行setup.sh 新建所需文件夹
sh setup.sh


