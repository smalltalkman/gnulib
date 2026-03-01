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
  ASSERT (streq (uc_combining_class_name (UC_CCC_NR), "NR"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_OV), "OV"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_NK), "NK"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_KV), "KV"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_VR), "VR"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_ATBL), "ATBL"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_ATB), "ATB"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_ATA), "ATA"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_ATAR), "ATAR"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_BL), "BL"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_B), "B"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_BR), "BR"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_L), "L"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_R), "R"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_AL), "AL"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_A), "A"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_AR), "AR"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_DB), "DB"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_DA), "DA"));
  ASSERT (streq (uc_combining_class_name (UC_CCC_IS), "IS"));
  ASSERT (uc_combining_class_name (-5) == NULL);
  ASSERT (uc_combining_class_name (163) == NULL);
  ASSERT (uc_combining_class_name (255) == NULL);

  return test_exit_status;
}
