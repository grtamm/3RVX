#include "Settings.h"

void Settings::Load() {
}

std::wstring Settings::SkinName() {
    const char* skinName = _root->FirstChildElement("skin")->GetText();
    if (skinName == NULL) {
        return L"Default";
    } else {
        return StringUtils::Widen(skinName);
    }
}