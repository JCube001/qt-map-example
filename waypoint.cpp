#include "waypoint.h"

Waypoint::Waypoint()
{
}

Waypoint::Waypoint(double latitude, double longitude, double altitude)
{
    this->lat = latitude;
    this->lon = longitude;
    this->alt = altitude;
}

Waypoint::~Waypoint()
{
}

double Waypoint::latitude()
{
    return this->lat;
}

void Waypoint::setLatitude(double latitude)
{
    this->lat = latitude;
}

double Waypoint::longitude()
{
    return this->lon;
}

void Waypoint::setLongitude(double longitude)
{
    this->lon = longitude;
}

double Waypoint::altitude()
{
    return this->alt;
}

void Waypoint::setAltitude(double altitude)
{
    this->alt = altitude;
}
