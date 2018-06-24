#include "PrimeAPI.h"

void *operator new(size_t size, const char *pkFileAndLine, const char *pkType);
void *operator new[](size_t size, const char *pkFileAndLine, const char *pkType);

void *operator new(size_t size) {
  return operator new(size, "", "");
}

void *operator new[](size_t size) {
  return operator new(size, "", "");
}

void *operator new(size_t size, void* ptr) {
  return ptr;
}