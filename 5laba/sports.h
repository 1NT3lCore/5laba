#pragma once
#ifndef SPORTS_H
#define SPORTS_H

#include <iostream>
#include <string>
#include <vector>

struct Participant {
    std::string surname;
    int place_running;
    int place_swimming;
    int place_shooting;
    int place_jumping;
    int place_fencing;
};

void fillParticipants(std::vector<Participant>& participants);
void printParticipants(const std::vector<Participant>& participants);
void findWinners(const std::vector<Participant>& participants);

#endif