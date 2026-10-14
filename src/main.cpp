#include <Geode/Geode.hpp>
#include <Geode/modify/CCLabelBMFont.hpp>

using namespace geode::prelude;

class $modify(MyLabelBMFont, CCLabelBMFont) {
    static CCLabelBMFont* create(const char* str, const char* fntFile) {
        std::string originalText = str;

        if (originalText == "Play") {
            return CCLabelBMFont::create("Играть", fntFile);
        }

        return CCLabelBMFont::create(str, fntFile);
    }
};
