#include "zephyranthes.h"

VALUE rb_mZephyranthes;

void
Init_zephyranthes(void)
{
  rb_mZephyranthes = rb_define_module("Zephyranthes");
}
