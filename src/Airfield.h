//============================================================================
// AirspaceConverter
// Since       : 14/6/2016
// Author      : Alberto Realis-Luc <alberto.realisluc@gmail.com>
// Web         : http://www.alus.it/AirspaceConverter
// Copyright   : (C) 2016-2019 Alberto Realis-Luc
// License     : GNU GPL v3
//
// This source file is part of AirspaceConverter project
//============================================================================

#pragma once
#include "Waypoint.h"

class Airfield: public Waypoint {
public:
	Airfield(const std::string& longName, const std::string& shortName, const std::string& countryCode, const double lat, const double lon, const float alt, const int style, const int rwyDir, const int rwyLen, const double freq, const std::string& descr);
	~Airfield() {}

	inline int GetRunwayDir() const { return runwayDir; }
	inline int GetRunwayLength() const { return runwayLength; }
	inline double GetRadioFrequency() const { return radioFreq; }
	inline bool HasRunwayDir() const { return runwayDir > 0; }
	inline bool HasRunwayLength() const { return runwayLength > 0; }
	inline bool HasRadioFrequency() const { return radioFreq > 0; }

private:
	int runwayDir;    // [deg]
	int runwayLength; // [m]
	double radioFreq; // [MHz]

};

