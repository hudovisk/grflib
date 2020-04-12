#include "file.h"

#include <iostream>
#include <algorithm>

template <class T>
void endswap(T *objp)
{
  unsigned char *memp = reinterpret_cast<unsigned char*>(objp);
  std::reverse(memp, memp + sizeof(T));
}

namespace GRF {

    File::File(const std::string& filename) {
        m_file.open(filename);
        if (!m_file.is_open()) {
            throw "Error";
        }

        m_file.seekg(0, m_file.beg);
        m_file.read((char*) &(this->m_header), sizeof(this->m_header));
    }

    File::~File() { 
        m_file.close();
    }

}