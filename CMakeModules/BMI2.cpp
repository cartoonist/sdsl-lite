#include <stdint.h>
#include <bmi2intrin.h>

int main()
{
	uint64_t x   = 31;
	uint64_t y   = 1;
	uint64_t res = _pdep_u64(x, y);
}
