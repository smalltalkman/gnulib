/* Test the Unicode character type functions.
   Copyright (C) 2011-2026 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

#include "unictype.h"

#include <string.h>

#include "macros.h"

int
main ()
{
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_NR), "Not Reordered"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_OV), "Overlay"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_NK), "Nukta"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_KV), "Kana Voicing"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_VR), "Virama"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_ATBL), "Attached Below Left"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_ATB), "Attached Below"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_ATA), "Attached Above"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_ATAR), "Attached Above Right"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_BL), "Below Left"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_B), "Below"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_BR), "Below Right"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_L), "Left"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_R), "Right"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_AL), "Above Left"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_A), "Above"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_AR), "Above Right"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_DB), "Double Below"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_DA), "Double Above"));
  ASSERT (streq (uc_combining_class_long_name (UC_CCC_IS), "Iota Subscript"));
  ASSERT (uc_combining_class_long_name (-5) == NULL);
  ASSERT (uc_combining_class_long_name (163) == NULL);
  ASSERT (uc_combining_class_long_name (255) == NULL);

  return test_exit_status;
}
