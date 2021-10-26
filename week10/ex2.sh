echo nikolina > ../week01/file.txt
link ../week01/file.txt _ex2.txt
ls -i ../week01/file.txt
find -inum 657941
find -inum 657941 -exec rm {} \;
