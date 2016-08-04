# JNIDemo

Android调用本地c/c++的小例子

# 背景

工作中需要，哈哈。这和网上的要配置这配置那不同，这个实例超级简单。

# 工具

Windows、Eclipse、 NDK

# 步骤

1. 为Eclipse配置NDK环境，网上下载离线NDK，在Preferences->NDK配置其路径。

2. 新建Android工程，右击项目->Android Tools->Add Native Suport...,会自动在项目根目录建立jni文件夹

3. 在jni文件夹中新建Android.mk（主要是配置，例如编译后的 .so 后缀文件叫什么名字;指定编译的源文件名称;） hello.c(c文件)

4. 在MainActivity里 a）用static动态加载 b）声明native方法 c）调用c中的方法

