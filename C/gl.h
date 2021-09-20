#include <stdio.h>
#include <stdlib.h>

void render(char to_render[]) {
    int i = 0;
    while (to_render[i] != '\0') {
        if (to_render[i] == '1') {
            to_render[i] == '#';
        }
        if (to_render[i] == '0') {
            to_render[i] = ' ';
        }
        i++;
    }

    return to_render;
}

void render_to_file(char file[], char to_render[]) {
    int i = 0;
    while (to_render[i] != '\0') {
        if (to_render[i] == '1') {
            to_render[i] == '#';
        }
        if (to_render[i] == '0') {
            to_render[i] = ' ';
        }
        i++;
    }
    FILE * outfile;
    outfile = fopen (file, "w");
    fprintf(outfile, "%s", to_render);
    fclose(outfile);
    
    return to_render;
}