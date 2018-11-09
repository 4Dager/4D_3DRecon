@echo off

rem @info:copy files to bin

set lib_path=..\lib\Release\x64
set bin_path=..\..\bin

mkdir %bin_path%

copy /Y "%lib_path%\app_bundle2pset.exe" "%bin_path%\app_bundle2pset.exe"
copy /Y "%lib_path%\app_dmrecon.exe" "%bin_path%\app_dmrecon.exe"
copy /Y "%lib_path%\app_featurerecon.exe" "%bin_path%\app_featurerecon.exe"
copy /Y "%lib_path%\app_fssrecon.exe" "%bin_path%\app_fssrecon.exe"
copy /Y "%lib_path%\app_makescene.exe" "%bin_path%\app_makescene.exe"
copy /Y "%lib_path%\app_mesh2pset.exe" "%bin_path%\app_mesh2pset.exe"
copy /Y "%lib_path%\app_meshalign.exe" "%bin_path%\app_meshalign.exe"
copy /Y "%lib_path%\app_meshclean.exe" "%bin_path%\app_meshclean.exe"
copy /Y "%lib_path%\app_meshconvert.exe" "%bin_path%\app_meshconvert.exe"
copy /Y "%lib_path%\app_prebundle.exe" "%bin_path%\app_prebundle.exe"
copy /Y "%lib_path%\app_scene2pset.exe" "%bin_path%\app_scene2pset.exe"
copy /Y "%lib_path%\app_sceneupgrade.exe" "%bin_path%\app_sceneupgrade.exe"
copy /Y "%lib_path%\app_sfmrecon.exe" "%bin_path%\app_sfmrecon.exe"

copy /Y "..\..\dependencies\glew\bin\x64\glew32.dll" "%bin_path%\glew32.dll"

copy /Y "run_3drecon.bat" "%bin_path%\run_3drecon.bat"

exit