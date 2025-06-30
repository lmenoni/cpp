#include "phone.h"

void    add_new_contact(PhoneBook& Book){
    Contact New;
    std::string fn;
    std::string ln;
    std::string nk;
    std::string ph;
    std::string sc;

    std::cout << CYAN << "-Enter First Name.." << RESET << std::endl;
    safe_getline(fn);
    std::cout << CYAN << "-Enter Last Name.." << RESET << std::endl;
    safe_getline(ln);
    std::cout << CYAN << "-Enter Nickname.." << RESET << std::endl;
    safe_getline(nk);
    std::cout << CYAN << "-Enter Phone Number.." << RESET << std::endl;
    safe_getline(ph);
    std::cout << CYAN << "-Enter Darkest Secret.." << RESET << std::endl;
    safe_getline(sc);
    if (New.setContact(fn, ln, nk, ph, sc))
        Book.addContact(New);
}

bool check_int(std::string& line){
    if (line[0] == '\0')
        return (false);
    for (int i = 0; line[i] != '\0'; i++){
        if (line[i] < '0' || line[i] > '9')
            return (false);
    }
    return (true);
}

int safe_getline(std::string& line){
    if (!std::getline(std::cin, line)){
        std::cout << RED << "Input Error or EOF Detected." << RESET << std::endl;
        exit(0);
    }
    if (line.empty())
        return (1);
    return (0);
}

void    search_contact(PhoneBook& Book){
    std::string line;

    Book.displayAll();
    std::cout << YELLOW << "Specify Index.." << RESET << std::endl;
    if (safe_getline(line) != 0)
        return ;
    if (check_int(line))
        Book.displayOne(atoi(line.c_str()));
    else
        std::cout << RED << "Invalid Index."<< RESET << std::endl;
}

int main()
{
    PhoneBook   Book;
    std::string line;
    int         status = 0;

    while (1)
    {
        std::cout << CYAN << "Enter Command.." << RESET << std::endl;
        status = safe_getline(line);
        if (status == 2)
            break ;
        if (status == 1)
            continue;
        if (line == "ADD")
            add_new_contact(Book);
        else if (line == "SEARCH")
            search_contact(Book);
        else if (line == "EXIT")
            break ;
        else
            std::cout << RED << "Unknown command." << RESET << std::endl;
    }
    return (0);
}

//controllo su l'indice in search (segfaulta se non int)
//controllo EOF
//controllo tutti i campi vengano riempiti durante ADD
//separare in 2 file le classi 
//fare makefile