#include "sports.h"

int main() {
    std::vector<Participant> participants;

    fillParticipants(participants);

    std::cout << "\nParticipants Information:\n";
    printParticipants(participants);

    findWinners(participants);

    return 0;
}