#include "corrections_personal.c"

bool should_correct_chord(char* buffer) {
  if (strcmp(buffer, "the ") == 0) return true;
  if (strcmp(buffer, "be ") == 0) return true;
  if (strcmp(buffer, "of ") == 0) return true;
  if (strcmp(buffer, "and ") == 0) return true;
  if (strcmp(buffer, "a ") == 0) return true;
  if (strcmp(buffer, "A ") == 0) return true;
  if (strcmp(buffer, "to ") == 0) return true;
  if (strcmp(buffer, "in ") == 0) return true;
  if (strcmp(buffer, "he ") == 0) return true;
  if (strcmp(buffer, "have ") == 0) return true;
  if (strcmp(buffer, "it ") == 0) return true;
  if (strcmp(buffer, "that ") == 0) return true;
  if (strcmp(buffer, "for ") == 0) return true;
  if (strcmp(buffer, "they ") == 0) return true;
  if (strcmp(buffer, "I ") == 0) return true;
  if (strcmp(buffer, "with ") == 0) return true;
  if (strcmp(buffer, "as ") == 0) return true;
  if (strcmp(buffer, "not ") == 0) return true;
  if (strcmp(buffer, "by ") == 0) return true;
  if (strcmp(buffer, "this ") == 0) return true;
  if (strcmp(buffer, "we ") == 0) return true;
  if (strcmp(buffer, "you ") == 0) return true;
  if (strcmp(buffer, "do ") == 0) return true;
  if (strcmp(buffer, "but ") == 0) return true;
  if (strcmp(buffer, "from ") == 0) return true;
  if (strcmp(buffer, "or ") == 0) return true;
  if (strcmp(buffer, "one ") == 0) return true;
  if (strcmp(buffer, "would ") == 0) return true;
  if (strcmp(buffer, "all ") == 0) return true;
  if (strcmp(buffer, "will ") == 0) return true;
  if (strcmp(buffer, "there ") == 0) return true;
  if (strcmp(buffer, "say ") == 0) return true;
  if (strcmp(buffer, "who ") == 0) return true;
  if (strcmp(buffer, "can ") == 0) return true;
  if (strcmp(buffer, "more ") == 0) return true;
  if (strcmp(buffer, "if ") == 0) return true;
  if (strcmp(buffer, "no ") == 0) return true;
  if (strcmp(buffer, "out ") == 0) return true;
  if (strcmp(buffer, "other ") == 0) return true;
  if (strcmp(buffer, "so ") == 0) return true;
  if (strcmp(buffer, "what ") == 0) return true;
  if (strcmp(buffer, "time ") == 0) return true;
  if (strcmp(buffer, "up ") == 0) return true;
  if (strcmp(buffer, "go ") == 0) return true;
  if (strcmp(buffer, "about ") == 0) return true;
  if (strcmp(buffer, "could ") == 0) return true;
  if (strcmp(buffer, "state ") == 0) return true;
  if (strcmp(buffer, "only ") == 0) return true;
  if (strcmp(buffer, "new ") == 0) return true;
  if (strcmp(buffer, "year ") == 0) return true;
  if (strcmp(buffer, "some ") == 0) return true;
  if (strcmp(buffer, "take ") == 0) return true;
  if (strcmp(buffer, "come ") == 0) return true;
  if (strcmp(buffer, "these ") == 0) return true;
  if (strcmp(buffer, "know ") == 0) return true;
  if (strcmp(buffer, "see ") == 0) return true;
  if (strcmp(buffer, "get ") == 0) return true;
  if (strcmp(buffer, "like ") == 0) return true;
  if (strcmp(buffer, "then ") == 0) return true;
  if (strcmp(buffer, "first ") == 0) return true;
  if (strcmp(buffer, "any ") == 0) return true;
  if (strcmp(buffer, "may ") == 0) return true;
  if (strcmp(buffer, "such ") == 0) return true;
  if (strcmp(buffer, "give ") == 0) return true;
  if (strcmp(buffer, "over ") == 0) return true;
  if (strcmp(buffer, "think ") == 0) return true;
  if (strcmp(buffer, "most ") == 0) return true;
  if (strcmp(buffer, "even ") == 0) return true;
  if (strcmp(buffer, "find ") == 0) return true;
  if (strcmp(buffer, "day ") == 0) return true;
  if (strcmp(buffer, "also ") == 0) return true;
  if (strcmp(buffer, "after ") == 0) return true;
  if (strcmp(buffer, "way ") == 0) return true;
  if (strcmp(buffer, "many ") == 0) return true;
  if (strcmp(buffer, "must ") == 0) return true;
  if (strcmp(buffer, "look ") == 0) return true;
  if (strcmp(buffer, "back ") == 0) return true;
  if (strcmp(buffer, "through ") == 0) return true;
  if (strcmp(buffer, "long ") == 0) return true;
  if (strcmp(buffer, "where ") == 0) return true;
  if (strcmp(buffer, "much ") == 0) return true;
  if (strcmp(buffer, "should ") == 0) return true;
  if (strcmp(buffer, "people ") == 0) return true;
  if (strcmp(buffer, "down ") == 0) return true;
  if (strcmp(buffer, "own ") == 0) return true;
  if (strcmp(buffer, "just ") == 0) return true;
  if (strcmp(buffer, "because ") == 0) return true;
  if (strcmp(buffer, "good ") == 0) return true;
  if (strcmp(buffer, "each ") == 0) return true;
  if (strcmp(buffer, "those ") == 0) return true;
  if (strcmp(buffer, "seem ") == 0) return true;
  if (strcmp(buffer, "high ") == 0) return true;
  if (strcmp(buffer, "too ") == 0) return true;
  if (strcmp(buffer, "place ") == 0) return true;
  if (strcmp(buffer, "little ") == 0) return true;
  if (strcmp(buffer, "world ") == 0) return true;
  if (strcmp(buffer, "very ") == 0) return true;
  if (strcmp(buffer, "still ") == 0) return true;
  if (strcmp(buffer, "nation ") == 0) return true;
  if (strcmp(buffer, "hand ") == 0) return true;
  if (strcmp(buffer, "old ") == 0) return true;
  if (strcmp(buffer, "life ") == 0) return true;
  if (strcmp(buffer, "tell ") == 0) return true;
  if (strcmp(buffer, "write ") == 0) return true;
  if (strcmp(buffer, "become ") == 0) return true;
  if (strcmp(buffer, "here ") == 0) return true;
  if (strcmp(buffer, "show ") == 0) return true;
  if (strcmp(buffer, "house ") == 0) return true;
  if (strcmp(buffer, "both ") == 0) return true;
  if (strcmp(buffer, "between ") == 0) return true;
  if (strcmp(buffer, "mean ") == 0) return true;
  if (strcmp(buffer, "call ") == 0) return true;
  if (strcmp(buffer, "develop ") == 0) return true;
  if (strcmp(buffer, "under ") == 0) return true;
  if (strcmp(buffer, "last ") == 0) return true;
  if (strcmp(buffer, "right ") == 0) return true;
  if (strcmp(buffer, "thing ") == 0) return true;
  if (strcmp(buffer, "general ") == 0) return true;
  if (strcmp(buffer, "school ") == 0) return true;
  if (strcmp(buffer, "never ") == 0) return true;
  if (strcmp(buffer, "same ") == 0) return true;
  if (strcmp(buffer, "begin ") == 0) return true;
  if (strcmp(buffer, "while ") == 0) return true;
  if (strcmp(buffer, "number ") == 0) return true;
  if (strcmp(buffer, "part ") == 0) return true;
  if (strcmp(buffer, "turn ") == 0) return true;
  if (strcmp(buffer, "real ") == 0) return true;
  if (strcmp(buffer, "leave ") == 0) return true;
  if (strcmp(buffer, "might ") == 0) return true;
  if (strcmp(buffer, "point ") == 0) return true;
  if (strcmp(buffer, "form ") == 0) return true;
  if (strcmp(buffer, "off ") == 0) return true;
  if (strcmp(buffer, "child ") == 0) return true;
  if (strcmp(buffer, "small ") == 0) return true;
  if (strcmp(buffer, "since ") == 0) return true;
  if (strcmp(buffer, "against ") == 0) return true;
  if (strcmp(buffer, "late ") == 0) return true;
  if (strcmp(buffer, "home ") == 0) return true;
  if (strcmp(buffer, "interest ") == 0) return true;
  if (strcmp(buffer, "large ") == 0) return true;
  if (strcmp(buffer, "person ") == 0) return true;
  if (strcmp(buffer, "end ") == 0) return true;
  if (strcmp(buffer, "open ") == 0) return true;
  if (strcmp(buffer, "public ") == 0) return true;
  if (strcmp(buffer, "during ") == 0) return true;
  if (strcmp(buffer, "present ") == 0) return true;
  if (strcmp(buffer, "without ") == 0) return true;
  if (strcmp(buffer, "again ") == 0) return true;
  if (strcmp(buffer, "hold ") == 0) return true;
  if (strcmp(buffer, "govern ") == 0) return true;
  if (strcmp(buffer, "around ") == 0) return true;
  if (strcmp(buffer, "possible ") == 0) return true;
  if (strcmp(buffer, "head ") == 0) return true;
  if (strcmp(buffer, "word ") == 0) return true;
  if (strcmp(buffer, "problem ") == 0) return true;
  if (strcmp(buffer, "however ") == 0) return true;
  if (strcmp(buffer, "lead ") == 0) return true;
  if (strcmp(buffer, "set ") == 0) return true;
  if (strcmp(buffer, "order ") == 0) return true;
  if (strcmp(buffer, "eye ") == 0) return true;
  if (strcmp(buffer, "plan ") == 0) return true;
  if (strcmp(buffer, "run ") == 0) return true;
  if (strcmp(buffer, "keep ") == 0) return true;
  if (strcmp(buffer, "face ") == 0) return true;
  if (strcmp(buffer, "fact ") == 0) return true;
  if (strcmp(buffer, "group ") == 0) return true;
  if (strcmp(buffer, "stand ") == 0) return true;
  if (strcmp(buffer, "increase ") == 0) return true;
  if (strcmp(buffer, "early ") == 0) return true;
  if (strcmp(buffer, "course ") == 0) return true;
  if (strcmp(buffer, "line ") == 0) return true;
  if (strcmp(buffer, "probably ") == 0) return true;
  if (strcmp(buffer, "thanks ") == 0) return true;
  if (strcmp(buffer, "schema ") == 0) return true;
  if (strcmp(buffer, "Elbereth") == 0) return true;
  if (strcmp(buffer, "kubernetes ") == 0) return true;
  return should_correct_chord_personal(buffer);
}