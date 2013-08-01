#include <boost/filesystem.hpp>
#include <iostream>

int main()
{
    boost::filesystem::path path = boost::filesystem::current_path();
    boost::filesystem::recursive_directory_iterator itr(path);
    while (itr != boost::filesystem::recursive_directory_iterator())
    {
        std::cout << itr->path().string() << std::endl;
        ++itr;
    }
    return 0;
}
