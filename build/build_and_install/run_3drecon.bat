@echo off

rem @info:The Reconstruction Pipeline

set images_path=..\data\%~1\images
set results_path=..\data\%~1\results

app_makescene.exe -i %images_path% %results_path%
app_sfmrecon.exe %results_path%
app_dmrecon.exe -s2 %results_path%
app_scene2pset.exe -F2 %results_path% %results_path%\a.ply
app_fssrecon.exe %results_path%\a.ply %results_path%\b.ply
app_meshclean.exe -t10 %results_path%\b.ply %results_path%\final.ply

exit