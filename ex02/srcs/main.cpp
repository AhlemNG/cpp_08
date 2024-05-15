#include "../incs/MutantStack.hpp"
#include <list>
#include <string>

int main()
{
   {
        std::cout << YELLOW << "***************MUTANTSTACK*****************" << RESET << std::endl;

        std::cout << BLUE << "***************copy constructor*****************" << RESET << std::endl;

        MutantStack<std::string> poem;

        poem.push("hello elephant");
        poem.push("yellow elephant");
        poem.push("how are you today?");

        MutantStack<std::string> poem_cpy(poem);
        std::cout << "size of poem = " << poem.size() << std::endl;
        std::cout << poem.top() << std::endl;
        poem.pop();
        std::cout << poem.top() << std::endl;
        poem.pop();
        std::cout << poem.top() << std::endl;
        poem.pop();
        std::cout << "size of poem = " << poem.size() << std::endl;
        std::cout << "size of copy = " << poem_cpy.size() << std::endl;
   }
   {
        MutantStack<std::string> poem;
        MutantStack<std::string> poem1;

        poem.push("hello elephant");
        poem.push("yellow elephant");
        poem.push("how are you today");
        
        std::cout << BLUE << "***************Assignment operator*****************" << RESET << std::endl;

        std::cout << "***************poem1*****************" << std::endl;
        poem1 = poem;
        std::cout << "size of poem1 = " << poem1.size() << std::endl;
        std::cout << poem1.top() << std::endl;
        poem1.pop();
        std::cout << poem1.top() << std::endl;
        poem1.pop();
        std::cout << poem1.top() << std::endl;
        poem1.pop();
        std::cout << "size of poem1 = " << poem1.size() << std::endl;

        std::cout << YELLOW << "***************MUTANTSTACK*****************" << RESET << std::endl;
        MutantStack<std::string>::iterator it = poem.begin();
        MutantStack<std::string>::iterator ite = poem.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << "size of poem = " << poem.size() << std::endl;
   }
    {
        std::cout << YELLOW << "***************LIST*****************" << RESET << std::endl;

        std::list<std::string> poem;

        poem.push_back("hello elephant");
        poem.push_back("yellow elephant");
        poem.push_back("how are you today?");

        std::list<std::string>::iterator it = poem.begin();
        std::list<std::string>::iterator ite = poem.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}




// int main()
// {
//     MutantStack<int> mstack;
//     std::cout << "*************************test**********************" << std::endl;

//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     std::cout << "*************************test**********************" << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     // std::cout << "copied s" << std::endl;
//     // std::cout << s.top() << std::endl;
//     // s.pop();
//     // std::cout << s.top() << std::endl;
//     // s.pop();
//     // std::cout << s.top() << std::endl;
//     {
//         std::cout << YELLOW <<"*************************MUTANTSTACK**********************"<< RESET << std::endl;
//         MutantStack<int> mstack;

//         mstack.push(17);
//         mstack.push(5);
//         mstack.push(3);
//         mstack.push(5);
//         mstack.push(737);
//         mstack.push(0);
//         MutantStack<int>::iterator it = mstack.begin();
//         MutantStack<int>::iterator ite = mstack.end();
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//         std::cout<< YELLOW << "*************************LIST**********************"<< RESET << std::endl;
//         std::list<int> lst;
//         lst.push_back(17);
//         lst.push_back(5);
//         lst.push_back(3);
//         lst.push_back(5);
//         lst.push_back(737);
//         lst.push_back(0);
//         std::list<int>::iterator it1 = lst.begin();
//         std::list<int>::iterator ite1 = lst.end();
//         while (it1 != ite1)
//         {
//             std::cout << *it1 << std::endl;
//             ++it1;
//         }
//     }
//     return 0;
// }

