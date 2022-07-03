#include <iostream>
#include <cstdio> // i use rename()
#include <cstring>
#include <string>
using namespace std;

const int MAX_CHAR = 1000;

void sort_File (char*[], int);
void rename_File (char*[], int);
//flag -o to sort
//flag -r to rename files like "my_Beautiful_File"
int main (int argc, char* argv[]) {
    char* string_flag = argv[1];
    if (argc < 2) cout << "pass to this program command line argument, we use argv[]" << endl << "-o to sort, -r to rename" << endl;
    else {
        if (strcmp(string_flag, "-o") == 0) sort_File(argv, argc);
        //if (strcmp(string_flag, "-r") == 0) rinomina(argv, (argc-1));
        if (strcmp(string_flag, "-o") != 0 && strcmp(string_flag, "-r") == 0) cout << "use flag -o to sort or -r to rename" << endl;
    }   
    return 0;
}

void sort_File (char* file_List[], int n) {
    for (int i = 2 ; i < n ; i++ ) { //i = 2 because 0 is the program name and 1 is the flag
        char sorted_Name[MAX_CHAR] = "0";
        string str_n = to_string(i-1);
        const char* number = str_n.c_str();
        if (i>=10) sorted_Name[0] = '\0';
        strcat(sorted_Name, number);
        strcat(sorted_Name, ") ");
        strcat(sorted_Name, file_List[i]);
        rename(file_List[i], sorted_Name);
    }
}
