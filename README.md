## 4Dager-3D Reconstruction Pack

## 概述

3D Reconstruction包基于SFM等算法，可以用多张图片还原物体的3D模型。代码使用C++编写，并能够在linux和windows上使用。

</br>

## 安装

### 1. 源码编译

项目中提供了Makefile，使用linux的用户可以直接使用make命令完成编译。
同时也在windows上完成build，用户可以根据需要用visual studio编辑工程文件。

1.1 安装编译

linux：

```
    $ git clone https://github.com/4Dager/4D_3DRecon
    $ cd 4D_3DRecon/source
    $ make -j8
```
windows：

VS工程文件位于**4D_3DRecon/build/4D_3DRecon.sln**

1.2 源代码依赖项

 * **libjpeg** (http://www.ijg.org/)
 * **libpng** (http://www.libpng.org/pub/png/libpng.html)
 * **libtiff** (http://www.libtiff.org/)
 * **OpenGL** (http://glew.sourceforge.net/)
 
### 2. 运行测试

2.1 3D重建 **Pipeline**

使用预置的 **run_3drecon.bat** ，位于 **4D_3DRecon\build\build_and_install** 中


```
    $ cd bin
    $ run_3drecon.bat ${data_set_name}
```

2.2 数据接口 **Input** and **Output**

在 **4D_3DRecon/data** 下创建文件夹 **${data_set_name}** 。将图片放入 **4D_3DRecon/data/${data_set_name}/images** 中。

运行后，结果位于 **4D_3DRecon/data/${data_set_name}/results** 中，其中 **final.ply** 是最终结果。

</br>
