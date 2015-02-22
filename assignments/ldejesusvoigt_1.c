/* IPC144M - Assignment 1
 *
 * "I declare that the attached assignment is wholly my own work in accordance
 * with Seneca Academic Policy. No part of this assignment has been copied
 * manually or electronically from any other source (including web sites) or
 * distributed to other students."
 *
 * Name: Larissa Voigt   Student ID 024769143
*/

#include <stdio.h>

void print_fixed_item(const char *name, float price) {
  printf("%-30s%10.2f\n", name, price);
}

void print_var_item(int qty, const char *name, float price) {
  if (qty < 9) {
    printf("%d %-28s%10.2f\n", qty, name, price);
  } else if (qty < 99) {
    printf("%d %-27s%10.2f\n", qty, name, price);
  } else {
    printf("%d %-26s%10.2f\n", qty, name, price);
  }
}

int main () {

  int repeat;

  do {

    int package;
    int memory, monitor, hd, video_card;

    // Package components default prices
    float package_price = 0;
    float memory_price = 0;
    float monitor_price = 0;
    float hd_price = 0;
    float video_card_price = 0;

    // Package display options
    int hd_tb = 0;
    int ssd = 0;
    int video = 0;
    int gaming_monitor = 0;
    int ssd_tb = 0;

    printf("\nWelcome to the IPC Company's Computer System Calculator\n\n");

    printf("Enter the package desired\n");
    printf("(1: basic, 2: professional, 3: game system): ");
    scanf("%d", &package);

  switch(package) {
  case 1:
    package_price = 599;
    printf("Enter additional memory required\n");
    printf("(0: 4 GB included, 1: 8 GB, 2: 12GB): ");
    scanf("%d", &memory);
      if (memory == 1) {
        memory_price = 99;
        memory = 8;
      } else if ( memory == 2) {
        memory_price = 189;
        memory = 12;
      } else {
        memory = 4;
    }
    printf("Enter monitor required\n");
    printf("(0: 21 inch LED included, 1: 27 inch LED): ");
    scanf("%d", &monitor);
      if (monitor == 1) {
        monitor_price = 199;
        monitor = 27;
      } else {
        monitor = 21;
      }
    printf("Enter Hard Drive drive required\n");
    printf("(0: 512 GB included, 1: 128 GB SSD): ");
    scanf("%d", &hd);
      if (hd == 1) {
        hd_price = 119;
        hd = 128;
        ssd = 1;
      } else {
        hd = 512;
      }
    break;

  case 2:
    package_price = 899;
    printf("Enter additional memory required\n");
    printf("(0: 8 GB included, 1: 16 GB): ");
    scanf("%d", &memory);
      if (memory == 1) {
        memory_price = 189;
        memory = 16;
    } else {
        memory = 8;
    }
    printf("Enter monitor required\n");
    printf("(0: 27 inch LED included, 1: 32 inch LED): ");
    scanf("%d", &monitor);
      if (monitor == 1) {
        monitor_price = 199;
        monitor = 32;
      } else {
        monitor = 27;
      }
    printf("Enter Hard Drive drive required\n");
    printf("(0: 1 TB included, 1: 256 GB SSD, 2: 512 GB SSD): ");
    scanf("%d", &hd);
      if (hd == 1) {
        hd_price = 189;
        hd = 256;
        ssd = 1;
      } else if (hd == 2) {
        hd_price = 399;
        hd = 512;
        ssd = 1;
      } else {
        hd = 1;
        hd_tb = 1;
      }
    printf("Enter Video Card required\n");
    printf("(0: IGP included, 1: 2 GB Discrete): ");
    scanf("%d", &video_card);
    if ( video_card == 1) {
      video_card_price = 209;
      video_card = 2;
      video = 1;
    } else {
      video_card = 0;
    }
    break;

  case 3:
    package_price = 1499;
    printf("Enter additional memory required\n");
    printf("(0: 16 GB included, 1: 32 GB): ");
    scanf("%d", &memory);
      if (memory == 1) {
        memory_price = 389;
        memory = 32;
    } else {
        memory = 16;
    }
    printf("Enter monitor required\n");
    printf("(0: 32 inch LED included, 1: 28 inch 4K HD): ");
    scanf("%d", &monitor);
      if (monitor == 1) {
        monitor_price = 299;
        monitor = 28;
        gaming_monitor = 1;
      } else {
        monitor = 32;
      }
    printf("Enter Hard Drive drive required\n");
    printf("(0: 256 GB SSD included, 1: 512 GB SSD, 2: 1 TB SSD): ");
    scanf("%d", &hd);
      if (hd == 1) {
        hd_price = 299;
        hd = 512;
        ssd = 1;
      } else if (hd == 2) {
        hd_price = 399;
        hd = 1;
        ssd_tb = 1;
      } else {
        ssd = 1;
        hd = 256;
      }
    printf("Enter Video Card required\n");
    printf("(0: 2 GB Discrete included, 1: 4 GB Discrete): ");
    scanf("%d", &video_card);
    if ( video_card == 1) {
      video_card_price = 399;
      video_card = 4;
      video = 1;
    } else {
      video_card = 2;
      video = 1;
    }
    break;
  }

  float subtotal = package_price + memory_price + monitor_price + hd_price + video_card_price;
  float hst = subtotal * 0.13;
  float total = subtotal + hst;

  puts("");
  printf("========================================\n");

  if (package == 1) {
    print_fixed_item("Basic Package:", package_price);
  } else if (package == 2) {
    print_fixed_item("Professional Package:", package_price);
  } else if (package == 3){
    print_fixed_item("Game System Package:", package_price);
  } else {
    printf("error");
  }
  print_var_item(memory, "GB Memory", memory_price);

  if (gaming_monitor) {
    print_var_item(monitor, "inch 4k HD Monitor:", monitor_price);
  } else {
    print_var_item(monitor, "inch LED Monitor:", monitor_price);
  }

  if (ssd) {
    print_var_item(hd, "GB SSD", hd_price);
  } else if (hd_tb) {
    print_var_item(hd, "TB Hard Drive", hd_price);
  } else if (ssd_tb) {
    print_var_item(hd, "TB SSD", hd_price);
  } else {
    print_var_item(hd, "GB Hard Drive", hd_price);
  }

  if (package != 1) {
    if (video) {
      print_var_item(video_card, "GB Discrete Video", video_card_price);
    } else {
      print_fixed_item("IGP Video:", video_card_price);
    }
  }

  printf("========================================\n");
  print_fixed_item("Sub Total:", subtotal);
  print_fixed_item("HST:", hst);
  printf("========================================\n");
  print_fixed_item("Total:", total);

  puts("");

  printf("Do you wish to choose another computer package? (1: YES or 0: NO): ");
  scanf("%d", &repeat);

  } while (repeat == 1);

  return 0;

}
