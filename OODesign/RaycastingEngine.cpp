#include "RaycastingEngine.h"


RaycastingEngine::RaycastingEngine(Player& player)
    : player(player) {}

void RaycastingEngine::render(sf::RenderWindow& window, const int worldMap[24][24], Enemy* enemies, int numEnemies) {
    for (int x = 0; x < screenWidth; x++) {
        // Calculate ray position and direction
        double cameraX = 2 * x / (double)screenWidth - 1;
        double rayDirX = player.getDirX() + player.getPlaneX() * cameraX;
        double rayDirY = player.getDirY() + player.getPlaneY() * cameraX;

        // Cast a ray
        Ray ray(player.getPosX(), player.getPosY(), rayDirX, rayDirY);
        ray.castRay(worldMap);

        // Calculate the line height based on perpendicular wall distance
        double perpWallDist = ray.getPerpWallDist();
        int lineHeight = (int)(screenHeight / perpWallDist);

        int drawStart = -lineHeight / 2 + screenHeight / 2;
        if (drawStart < 0) drawStart = 0;
        int drawEnd = lineHeight / 2 + screenHeight / 2;
        if (drawEnd >= screenHeight) drawEnd = screenHeight - 1;

        // Determine wall color
        sf::Color color;
        switch (worldMap[ray.getMapX()][ray.getMapY()]) {
            case 1:  color = sf::Color::Red;    break;
            case 2:  color = sf::Color::Green;  break;
            case 3:  color = sf::Color::Blue;   break;
            case 4:  color = sf::Color::White;  break;
            default: color = sf::Color::Yellow; break;
        }
        if (ray.getSide() == 1) color = sf::Color(color.r / 2, color.g / 2, color.b / 2);

        // Draw the vertical line for the ray
        sf::RectangleShape line(sf::Vector2f(1, drawEnd - drawStart));
        line.setPosition(x, drawStart);
        line.setFillColor(color);
        window.draw(line);


        
    }
}
