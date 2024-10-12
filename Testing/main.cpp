#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>

int main() {
    const int screenWidth = 1200;
    const int screenHeight = 720;
    int timeToWin = 7;


    sf::Font font;
    if (!font.loadFromFile("Arial.ttf")) {
    return -1;
    }

    
    std::ifstream endTextFile("PlayerScores.txt");

    std::string endTimeTemp;
    int bestThreeTimes[3] {100000,100000,100000};
    getline(endTextFile, endTimeTemp);
    while (getline(endTextFile, endTimeTemp)) {
        if (stoi(endTimeTemp) < bestThreeTimes[0]) {
            bestThreeTimes[0] = stoi(endTimeTemp);
        } else if (stoi(endTimeTemp) < bestThreeTimes[1]) {
            bestThreeTimes[1] = stoi(endTimeTemp);
        } else if (stoi(endTimeTemp) < bestThreeTimes[2]) {
            bestThreeTimes[2] = stoi(endTimeTemp);
        }
    }

    std::string timesDisplayString;
    timesDisplayString = timesDisplayString + "Current Time: " + std::to_string(timeToWin);
    timesDisplayString = timesDisplayString + "\n \nPrevious Best Times:\n";
    for (int i = 0; i < 3; i++) {
        timesDisplayString = timesDisplayString + std::to_string(bestThreeTimes[i]) + "\n";
    }
    sf::Text endText;
    endText.setFont(font);
    endText.setString(timesDisplayString);
    endText.setCharacterSize(50);  // Set font size
    endText.setFillColor(sf::Color::White);  // Text color
    endText.setPosition(10, 10);  // Text position

    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Raycaster");

    // Set up timing
    sf::Clock clock;

    sf::Event event;
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }   
    // Clear window
    window.clear();

    // Render screen
    window.draw(endText);

    // Display rendered frame
    window.display();   
    }
}