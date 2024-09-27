#include <string>

namespace colours {
// Misc
const std::string RESET = "\033[0m";
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";

// Text colours
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string CYAN = "\033[36m";
const std::string ORANGE = "\033[38;2;255;165;0m";
const std::string LIGHT_GREEN = "\033[38;2;144;238;144m";
// Background colours
const std::string RED_BG = "\033[41m";
const std::string GREEN_BG = "\033[48;2;144;238;144m";
}  // namespace colours