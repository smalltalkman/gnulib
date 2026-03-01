/* Test the Unicode character Arabic joining group functions.
   Copyright (C) 2011-2026 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2011.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unictype.h"

#include <string.h>

#include "macros.h"

int
main ()
{
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_NONE),                  "No Joining Group"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_AIN),                   "Ain"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_ALAPH),                 "Alaph"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_ALEF),                  "Alef"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_BEH),                   "Beh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_BETH),                  "Beth"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_BURUSHASKI_YEH_BARREE), "Burushaski Yeh Barree"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_DAL),                   "Dal"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_DALATH_RISH),           "Dalath Rish"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_E),                     "E"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_FARSI_YEH),             "Farsi Yeh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_FE),                    "Fe"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_FEH),                   "Feh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_FINAL_SEMKATH),         "Final Semkath"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_GAF),                   "Gaf"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_GAMAL),                 "Gamal"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_HAH),                   "Hah"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_HE),                    "He"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_HEH),                   "Heh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_HEH_GOAL),              "Heh Goal"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_HETH),                  "Heth"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_KAF),                   "Kaf"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_KAPH),                  "Kaph"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_KHAPH),                 "Khaph"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_KNOTTED_HEH),           "Knotted Heh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_LAM),                   "Lam"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_LAMADH),                "Lamadh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_MEEM),                  "Meem"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_MIM),                   "Mim"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_NOON),                  "Noon"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_NUN),                   "Nun"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_NYA),                   "Nya"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_PE),                    "Pe"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_QAF),                   "Qaf"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_QAPH),                  "Qaph"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_REH),                   "Reh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_REVERSED_PE),           "Reversed Pe"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SAD),                   "Sad"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SADHE),                 "Sadhe"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SEEN),                  "Seen"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SEMKATH),               "Semkath"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SHIN),                  "Shin"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SWASH_KAF),             "Swash Kaf"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_SYRIAC_WAW),            "Syriac Waw"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_TAH),                   "Tah"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_TAW),                   "Taw"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_TEH_MARBUTA),           "Teh Marbuta"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_TEH_MARBUTA_GOAL),      "Teh Marbuta Goal"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_TETH),                  "Teth"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_WAW),                   "Waw"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_YEH),                   "Yeh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_YEH_BARREE),            "Yeh Barree"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_YEH_WITH_TAIL),         "Yeh With Tail"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_YUDH),                  "Yudh"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_YUDH_HE),               "Yudh He"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_ZAIN),                  "Zain"));
  ASSERT (streq (uc_joining_group_name (UC_JOINING_GROUP_ZHAIN),                 "Zhain"));
  ASSERT (uc_joining_group_name (-1) == NULL);

  return test_exit_status;
}
