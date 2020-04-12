
namespace GRF {

    #pragma pack(1)
    struct header {
        char signature[16];
        unsigned char key[15];
		unsigned long file_table_offset;
		unsigned long skip;
		unsigned long filecount;
		unsigned long version;
    };
    #pragma pack()
}