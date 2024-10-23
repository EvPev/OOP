#include <vector>
#include <tuple>

class Utils {
    private:


    public:
        std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);

        double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};