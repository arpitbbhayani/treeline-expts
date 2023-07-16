#include <stdio.h>
#include "treeline/db.h"

int main() {
    tl::DB* db = NULL;
    tl::Options options;
    options.create_if_missing = true;
    auto status = tl::DB::Open(options, "./tdb", &db);
    printf("database initialised? %d\n", status.ok());
}
