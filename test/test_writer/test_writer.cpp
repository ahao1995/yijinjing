#include <iostream>
#include "YJJ_DECLARE.h"
#include "JournalWriter.h"
#include "Timer.h"
#include <cstring>
USING_YJJ_NAMESPACE
#define KUNGFU_JOURNAL_FOLDER_CUR "/shared/kungfu/test"
int main()
{
    getNanoTime();
    std::cout << "time" << std::endl;
    JournalWriterPtr test_writer = JournalWriter::create(KUNGFU_JOURNAL_FOLDER_CUR, "test", "Client_test");
    int len = 10;
    std::cout << "DataLength:" << len << std::endl;
    char *data = new char[len];
    data[len - 1] = 0;
    strncpy(data, "This is a test", len - 1);
    int count = 4000;
    for (int i = 0; i < count; ++i)
    {
        long nano = test_writer->write_frame(data, len, 11, 5, 0, 1);

        for (int j = 0; j < 1000; ++j)
        {
            test_writer->write_frame(data, len, 11, 5, 0, 1);
        }
        test_writer->write_frame(data, len, 11, 5, 1, 1);
    }
    return 0;
}
