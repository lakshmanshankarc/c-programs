#include <stdio.h>
int main() {

        FILE * fp;
        char c;
        printf("File Handling\n");

        //open a file
        fp = fopen("demo.txt", "w");

        //writing operation
        while ((c = getchar()) != EOF) {
            putc(c, fp);
        }

        //close file
        fclose(fp);
        printf("Data Entered:\n");

        //reading
        fp = fopen("demo.txt", "r");
        while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }
        fclose(fp);
        return 0;
    }


ex

















// #include <stdio.h>
// int main() {
// FILE *fp;

// //opening
// fp  = fopen("data.txt", "w");

// //write into the file
// fputs("Hello World is added to the file\n",fp);
// fputs("I am wrting into a file\n",fp);

// //buffer read
// char buffer[50],another;
// fgets(buffer,50,fp);
// printf("%s helo",buffer);

// //close the opened file
// fclose(fp);
// }