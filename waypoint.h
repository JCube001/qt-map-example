#ifndef WAYPOINT_H
#define WAYPOINT_H

class Waypoint
{
public:
    Waypoint();
    Waypoint(double latitude, double longitude, double altitude);
    ~Waypoint();

    double latitude();
    void setLatitude(double latitude);

    double longitude();
    void setLongitude(double longitude);

    double altitude();
    void setAltitude(double altitude);

private:
    double lat;
    double lon;
    double alt;
};

#endif // WAYPOINT_H
