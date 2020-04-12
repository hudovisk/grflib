#pragma once

#include <fstream>

#include "grf.h"

namespace GRF {

    class File {
    public:
        File(const std::string& filename);
        ~File();

        const header& getHeader() const { return m_header; }

    private:
        header m_header;
        std::fstream m_file;

        void parseHeader(std::istream input);
    };
}