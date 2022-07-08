# file_Manager.cpp

use command line to pass file names that you want to sort out.
Use flag -o to sort and -r to rename before the file names.

-function sort_File() enumerate the files you passed in a progressive numerical order.
{ e.g. @shell ./file_Manager -o a b c
	your files are renamed as 01) a ; 02) b ; 03) c}

-function rename_File() change spaces and hyphens with underscores and makes the name of the file camelCased 
{ e.g. from “file-with-hyphens and spaces.txt” -→to “file_With_Hyphens_And_Spaces.txt”]
