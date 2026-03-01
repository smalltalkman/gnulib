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
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_AL), "Arabic Letter"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_AN), "Arabic Number"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_B), "Paragraph Separator"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_BN), "Boundary Neutral"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_CS), "Common Separator"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_EN), "European Number"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_ES), "European Separator"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_ET), "European Terminator"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_L), "Left To Right"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_LRE), "Left To Right Embedding"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_LRO), "Left To Right Override"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_NSM), "Nonspacing Mark"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_ON), "Other Neutral"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_PDF), "Pop Directional Format"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_R), "Right To Left"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_RLE), "Right To Left Embedding"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_RLO), "Right To Left Override"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_S), "Segment Separator"));
  ASSERT (streq (uc_bidi_class_long_name (UC_BIDI_WS), "White Space"));
  ASSERT (uc_bidi_class_long_name (-1) == NULL);

  return test_exit_status;
}
