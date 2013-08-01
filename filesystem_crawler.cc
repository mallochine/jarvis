#include <boost/filesystem.hpp>
#include <string>
#include <stdio.h>

int main()
{
    boost::filesystem::path path = boost::filesystem::current_path();
    boost::filesystem::recursive_directory_iterator itr(path);
    while (itr != boost::filesystem::recursive_directory_iterator())
    {
        printf("%s\n", itr->path().string().c_str());
//        std::cout << itr->path().string() << std::endl;
        ++itr;
    }
    return 0;
}
