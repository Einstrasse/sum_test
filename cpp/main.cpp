#include "sum.h"
#include <string>
#include <cstdio>

using namespace std;

int main() {
	char track[] = "취약점";
	char name[] = "정한길";
	printf("[%s]sum_test[%s]\n%d\n", track, name, sum(100));
}