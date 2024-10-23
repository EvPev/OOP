#include <vector>
#include <tuple>

class Utils {
    private:


    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};