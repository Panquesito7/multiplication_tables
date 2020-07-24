/**
 * @file
 * @brief [Multiplication tables](https://en.wikipedia.org/wiki/Multiplication_table) for any number
 *
 * @author [David Leal](https://github.com/Panquesito7)
 */

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

/**
 * Prototypes
 */
void askData(int&);
void show_tables(int&);
void pause(int);
void license_notice();

/**
 * Main function
 */
int main() {
    int number = 0;

    askData(number);
    show_tables(number); std::cout << "\n";

    pause(1);
    return 0;
}

/**
 * Press ENTER to continue (pause)
 * @param opt show message or not
 * @return void
 */
void pause(int opt) {
    rewind(stdin);
    if (opt == 1) {
        std::cout << "Press ENTER key to continue . . .";
        std::cin.get();
    }

    else {
        std::cin.get();
    }
}

/**
 * [GNU GPL](http://www.gnu.org/licenses/gpl-3.0.html) license notice
 */
void license_notice() {
    char opt[10];
    do {
        std::cout << "Multiplication tables\n"
            "Copyright (C) 2020 David Leal (halfpacho@gmail.com)\n\n"

            "This program comes with ABSOLUTELY NO WARRANTY;"
            " for details type `show w`.\n"
            "This is free software, and you are welcome to redistribute it\n"
            "under certain conditions; type `show c` for details.\n"
            "\nType `exit` to go to the main program: ";

        std::cin.getline(opt, 10, '\n');

        if (opt[5] == 'w') {
            std::cout << "\nTHERE IS NO WARRANTY FOR THE PROGRAM, "
                "TO THE EXTENT PERMITTED BY\n"
                "APPLICABLE LAW. EXCEPT WHEN OTHERWISE "
                "STATED IN WRITING THE COPYRIGHT\n"
                "HOLDERS AND / OR OTHER PARTIES PROVIDE THE "
                "PROGRAM \"AS IS\" WITHOUT WARRANTY\n"
                "OF ANY KIND, EITHER EXPRESSED OR IMPLIED, "
                "INCLUDING, BUT NOT LIMITED TO,\n"
                "THE IMPLIED WARRANTIES OF MERCHANTABILITY "
                "AND FITNESS FOR A PARTICULAR\n"
                "PURPOSE. THE ENTIRE RISK AS TO THE "
                "QUALITY AND PERFORMANCE OF THE PROGRAM\n"
                "IS WITH YOU. SHOULD THE PROGRAM PROVE "
                "DEFECTIVE, YOU ASSUME THE COST OF\n"
                "ALL NECESSARY SERVICING, REPAIR OR CORRECTION.\n\n";

            pause(0);

        }
        else if (opt[5] == 'c') {
            std::cout << "\nWhen we speak of free software, "
                "we are referring to freedom, not\n"
                "price.  Our General Public Licenses are "
                "designed to make sure that you\n"
                "have the freedom to distribute copies "
                "of free software (and charge for\n"
                "them if you wish), that you receive source "
                "code or can get it if you\n"
                "want it, that you can change the software "
                "or use pieces of it in new\n"
                "free programs, and that you know you can do these things.\n"

                "\nTo protect your rights, we need to "
                "prevent others from denying you\n"
                "these rights or asking you to surrender "
                "the rights. Therefore, you have\n"
                "certain responsibilities if you distribute "
                "copies of the software, or if\n"
                "you modify it : responsibilities to "
                "respect the freedom of others.\n"

                "\nFor example, if you distribute copies of "
                "such a program, whether\n"
                "gratis or for a fee, you must pass on "
                "to the recipients the same\n"
                "freedoms that you received. You must make "
                "sure that they, too, receive\n"
                "or can get the source code. And you must "
                "show them these terms so they\n"
                "know their rights.\n\n";

            pause(0);
        }

        system("cls");
        if ((opt[5] == 'w') || (opt[5] == 'c')) {
            strcpy(opt, "");
        }
    } while (opt[0] != 'e');
}

/**
 * Ask number to user
 * @param number number for the user to type
 * @return void
 */
void askData(int &number) {
    std::cout << "Please type a number: ";
    std::cin >> number;
}

/**
 * Show multiplication tables
 * @param number multiplication table to show
 * @return void
 */
void show_tables(int &number) {
    std::cout << "\n";
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }
}
