/* Code Quest
 * Student: Larissa Voigt
 * Seneca Id: 024769143
 * codeQuestMain.c
 */

#include <stdio.h>

int main () {

  puts("+-----------------------+");
  puts("|                       |");
  puts("|      Code Quest       |");
  puts("|                       |");
  puts("+-----------------------+");

  puts("");
  puts("Character Creation");

  puts("");
  puts("Please enter your desired stats for your character:");

  int strength, speed, defense, intelligence;

  puts("");
  printf("Enter strength: ");
  scanf("%d", &strength);

  printf("Enter speed: ");
  scanf("%d", &speed);

  printf("Enter defense: ");
  scanf("%d", &defense);

  printf("Enter intelligence: ");
  scanf("%d", &intelligence);

  int sum_attributes = strength + speed + defense + intelligence;

  float strength_ratio = strength / (float)sum_attributes;
  float speed_ratio = speed / (float)sum_attributes;
  float defense_ratio = defense / (float)sum_attributes;
  float intelligence_ratio = intelligence / (float)sum_attributes;

  strength = strength_ratio * 100;
  speed = speed_ratio * 100;
  defense = defense_ratio * 100;
  intelligence = intelligence_ratio * 100;

  int luck = sum_attributes % 30;

  puts("");
  puts("Your player's final status are:");
  puts("");

  printf("Strength: %d\n", strength);
  printf("Speed: %d\n", speed);
  printf("Defense: %d\n", defense);
  printf("Intelligence: %d\n", intelligence);
  printf("Luck: %d\n", luck);

  return 0;

}
