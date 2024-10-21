// COMP2811 Coursework 1: QuakeDataset class
#include "dataset.hpp"
#include "csv.hpp"

void QuakeDataset::loadData(const std::string& filename) {
    // Opens file 
    csv::CSVReader reader(filename);

    // Makes sure no data is in vector
    data.clear();
    
    // Reads row of csv and asigns each column to its matching class variable
    try {
        for (auto& row: reader) {
        std::string time = row["time"].get<std::string>();
        double latitude = row["latitude"].get<double>();
        double longitude = row["longitude"].get<double>();
        double depth = row["depth"].get<double>();
        double magnitude = row["mag"].get<double>();

        Quake quake(time, latitude, longitude, depth, magnitude);
        data.push_back(quake); // Adds Info To Vector Data
    }
    } catch (const std::exception& e) {
        std::cerr << "Error Reading Row: " << e.what() << std::endl;
    }
}

Quake QuakeDataset::strongest() const {
    if (data.empty()) {
        throw std::runtime_error("Dataset is empty");
    }

    const Quake* strongestQuake = &data[0];
    for (const auto& quake : data) {
        if (quake.getMagnitude() > strongestQuake->getMagnitude()) {
            strongestQuake = &quake;
        }
    }
    return *strongestQuake;
}

Quake QuakeDataset::shallowest() const {
    if (data.empty()) {
        throw std::runtime_error("Dataset is empty");
    }

    const Quake* shallowestQuake = &data[0];
    for (const auto& quake : data) {
        if (quake.getDepth() < shallowestQuake->getDepth()) {
            shallowestQuake = &quake;
        }
    }
    return *shallowestQuake;
}

double QuakeDataset::meanDepth() const {
    if (data.empty()) {
        throw std::runtime_error("Dataset is empty");
    }

    double totalDepth = 0.0;
    for (const auto& quake : data) {
        totalDepth += quake.getDepth();
    }
    return totalDepth / data.size();
}

double QuakeDataset::meanMagnitude() const {
    if (data.empty()) {
        throw std::runtime_error("Dataset is empty");
    }

    double totalMagnitude = 0.0;
    for (const auto& quake : data) {
        totalMagnitude += quake.getMagnitude();
    }
    return totalMagnitude / data.size();
}