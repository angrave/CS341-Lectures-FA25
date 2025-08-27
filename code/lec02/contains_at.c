#include <stdio.h>

int contains_at(char*);


int main(int argc, char** argv) {
  int result = contains_at("Hello email");
  if(result) printf("Contains an @");
  else printf("No @ found");
  return 0;
}

int contains_at(char* ptr) {
  // hile(1) {
//     char c = *ptr;
//     if(c == '@') return 1;
//     if(c ==  '\0') break;
//     ptr ++;
//   }
  char c;
  while( (c = *ptr++) ) if(c=='@') return 1;
  return 0;
}
