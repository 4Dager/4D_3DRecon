@echo off

rem @info:unzip

set depen_path=..\..\dependencies\

unzip %depen_path%glew.zip -d %depen_path%
unzip %depen_path%libjpeg.zip -d %depen_path%
unzip %depen_path%libpng.zip -d %depen_path%
unzip %depen_path%libtiff.zip -d %depen_path%
unzip %depen_path%zlib.zip -d %depen_path%

exit