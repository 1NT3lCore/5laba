#include "sports.h"
#include <cstdlib>
#include <ctime>

void fillParticipants(std::vector<Participant>& participants) {
    srand(time(0));
    int n = 0;
    bool validInput = false;

    do {
        std::cout << "Enter the number of participants: ";
        if (std::cin >> n && n > 0) {
            validInput = true;
        }
        else {
            std::cout << "Invalid input. Please enter a positive number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!validInput);

    for (int i = 0; i < n; ++i) {
        Participant p;
        std::cout << "Enter participant's surname: ";
        std::cin >> p.surname;
        p.place_running = rand() % 10 + 1;
        p.place_swimming = rand() % 10 + 1;
        p.place_shooting = rand() % 10 + 1;
        p.place_jumping = rand() % 10 + 1;
        p.place_fencing = rand() % 10 + 1;
        participants.push_back(p);
    }
}

void printParticipants(const std::vector<Participant>& participants) {
    for (const auto& p : participants) {
        std::cout << "Participant: " << p.surname << std::endl;
        std::cout << "Running: " << p.place_running << std::endl;
        std::cout << "Swimming: " << p.place_swimming << std::endl;
        std::cout << "Shooting: " << p.place_shooting << std::endl;
        std::cout << "Jumping: " << p.place_jumping << std::endl;
        std::cout << "Fencing: " << p.place_fencing << std::endl;
        std::cout << std::endl;
    }
}

void findWinners(const std::vector<Participant>& participants) {
    for (int i = 0; i < 5; ++i) {
        int max_place = -1;
        std::vector<std::string> winners; 
        for (const auto& p : participants) {
            int place;
            switch (i) {
            case 0:
                place = p.place_running;
                break;
            case 1:
                place = p.place_swimming;
                break;
            case 2:
                place = p.place_shooting;
                break;
            case 3:
                place = p.place_jumping;
                break;
            case 4:
                place = p.place_fencing;
                break;
            }
            if (place > max_place) {
                max_place = place;
                winners.clear();
                winners.push_back(p.surname);
            }
            else if (place == max_place) { 
                winners.push_back(p.surname);
            }
        }
        switch (i) {
        case 0:
            std::cout << "Winners in Running: ";
            break;
        case 1:
            std::cout << "Winners in Swimming: ";
            break;
        case 2:
            std::cout << "Winners in Shooting: ";
            break;
        case 3:
            std::cout << "Winners in Jumping: ";
            break;
        case 4:
            std::cout << "Winners in Fencing: ";
            break;
        }

        for (const auto& winner : winners) {
            std::cout << winner << " ";
        }
        std::cout << std::endl;
    }
}