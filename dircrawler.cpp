//directory crawler

#include <string>
#include <iostream>
#include <stdio.h>
#include <dirent.h>

using namespace std;

//list all directories and write to file
void write_dirs_to_file(const char *dirname, FILE *dirfile);

int main(int argc, char **argv)
{

    
    FILE * pFile;

    //open file for writing 
    char somepath[] = "contents.txt";
    pFile = fopen(somepath,"w+");

    write_dirs_to_file("/",pFile);

    fclose(pFile);


    return 0;
}

void write_dirs_to_file(const char *dirname, FILE *dirfile){

    /* Print all files and directories within the directory */
    DIR *dir;

    dir = opendir(dirname);
	struct dirent *ent;
	while ((ent = readdir(dir)) != NULL) {	

        switch (ent->d_type) {
		case DT_REG:
			fputs("f ",dirfile);
			break;

		case DT_DIR:
			fputs("d ",dirfile);            
            //write_dirs_to_file(ent->d_name,dirfile);
			break;

		case DT_LNK:
			fputs("l ",dirfile);
			break;

		default:
			fputs("o ",dirfile);
		}
                
        fputs(ent->d_name,dirfile);
        fputs(" \n",dirfile);
		
	}

	closedir(dir);



}
