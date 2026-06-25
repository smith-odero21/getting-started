 /* arrays */
 #include  <stdio.h>

 int main() {
    char names[5][20] = {"Sandra\n", "Alice\n", "Joe\n", "John\n", "James\n"};

    for(int  i = 0; i < 5; i++){
        printf("%s", names[i]);
    }

    return 0;
 }





