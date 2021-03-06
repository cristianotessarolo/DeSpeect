#include "gtest/gtest.h"
#include "../Model/Command/header/loadplugincommand.h"

TEST(Command, LoadPluginTest){
    Speect* s=new Speect();
    std::string str("utt_textgrid.spi");
    LoadPluginCommand* cpl=new LoadPluginCommand(str);
    EXPECT_EQ(cpl->execute(s), "Adding Plugin:utt_textgrid.spi Operation status:No error");
}

TEST(Command, LoadPluginTestFail){
    Speect* s=new Speect();
    std::string str("abcd.spi");
    LoadPluginCommand* cpl=new LoadPluginCommand(str);
    EXPECT_EQ(cpl->execute(s), "Adding Plugin:abcd.spi Failed Operation status:Failure");
}
