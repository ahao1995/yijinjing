#include <iostream>
#include "YJJ_DECLARE.h"
#include "JournalReader.h"
#include "Frame.hpp"
#include "Timer.h"
#include <cstring>

USING_YJJ_NAMESPACE
#define KUNGFU_JOURNAL_FOLDER_CUR "/shared/kungfu/test"

int main()
{
    getNanoTime();
    JournalReaderPtr reader = JournalReader::create(KUNGFU_JOURNAL_FOLDER_CUR, "test", -1, "Client_R");

    FramePtr frame;
    while (1)
    {
        frame = reader->getNextFrame();
        if (frame.get() != nullptr)
        {
            void *data = frame->getData();
            std::cout<<(char*) data<<std::endl;
        }
    }
}