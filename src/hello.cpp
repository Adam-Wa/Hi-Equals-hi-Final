#include "hello.hpp"
#include <cctype>

int strcmp_case_insensitive(const std::string& s1, const std::string& s2, bool skip_spaces) {
   size_t i = 0, j = 0;

   // Continue as long as there is at least one character left in either string
   while (i < s1.length() || j < s2.length()) {

      // 1. Check for spaces to skip first
      if (skip_spaces && i < s1.length() && s1[i] == ' ') {
         i++;
      }
      else if (skip_spaces && j < s2.length() && s2[j] == ' ') {
         j++;
      }
      // 2. Check if we've reached the end of the strings after potential skips
      else if (i == s1.length() && j == s2.length()) {
         return 0; // Both finished simultaneously
      }
      else if (i == s1.length()) {
         return -1; // s1 ended first
      }
      else if (j == s2.length()) {
         return 1; // s2 ended first
      }
      // 3. The actual character comparison
      else {
         char c1 = std::tolower(static_cast<unsigned char>(s1[i]));
         char c2 = std::tolower(static_cast<unsigned char>(s2[j]));

         if (c1 < c2) {
            return -1;
         }
         else if (c1 > c2) {
            return 1;
         }

         // Move both pointers forward only if characters matched
         i++;
         j++;
      }
   }

   return 0;
}