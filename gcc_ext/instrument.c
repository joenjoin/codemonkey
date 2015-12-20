#include <stdio.h>

/**
 * Need state:
 *        __attribute__((no_instrument_function))
 *
 * for __cyg_profile_func_* to avoid infinite instrument
 */
void __cyg_profile_func_enter(void* this, void* callsite)
						__attribute__((no_instrument_function));
void __cyg_profile_func_exit(void* this, void* callsite)
						__attribute__((no_instrument_function));

void __cyg_profile_func_enter(void* this, void* callsite)
{
	printf("Enter %p\n", (int*)this);
}

void __cyg_profile_func_exit(void* this, void* callsite)
{
	printf("Exit %p\n", (int*)this);
}
