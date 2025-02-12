#pragma once

namespace chip8
{
    void initialize();
    void update();
    void load(const char*);
    bool draw_frame();
    bool clear_screen();
};