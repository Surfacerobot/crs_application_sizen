#include <iostream>
#include <string>

#include "generatepath.h"

int main() {
    std::vector<std::array<double,7>> pos;

    for(int i = 0; i < 5; i++){
        pos.push_back({1.000,2.000,3.000,4.000,5.000,6.000,7.000});
    }

    fanuc_post_processor::generate_LS program;
    program.program_name_ = "HUAB";
    program.comment_ = "\"\"";
    program.prog_size_ = "4757";
    program.file_name_ = "HUAB";
    program.version_ = "0";
    program.memory_size_ = "5089";
    program.pos_ = pos;
    program.velocity_ = "200";
    program.cnt_ = "CNT60";
    program.get_pos_size();

    program.First_Part();
    //DIY Part
    program.motion_add("\t3:\t;");
    program.motion_add("\t4:  DO[22:MOJI]=ON\t;");
    program.left_command();
    program.POS_Part();
    //std::cout<<program.line_cnt<<std::endl;
    program.write();
    program.display();

    return 0;
}
