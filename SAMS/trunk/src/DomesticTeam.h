/**
 * @file DomesticTeam.h
 * @brief Domestic Team declaration
 * @author Kurt Andrews & Brian Royer
 */

#ifndef DOMESTICTEAM_H_
#define DOMESTICTEAM_H_

#include "Team.h"
#include "EmployeeList.h"
#include "Application.h"

class DomesticTeam : public Team
{
  private:
  public:
    /**
     * The Domestic Team constructor
     */
    DomesticTeam();

    /**
     * Domestic Team destructor
     */
    virtual ~DomesticTeam();

    /**
     * Display the domestic team
     */
    void display() const;

    /**
     * Populate an domestic team
     */
    void populate();

    /**
     * Add employees to a team
     * @param employees - pointer to the employee list
     */
    void addMember(EmployeeList* employees);

    /**
     * Remove employees from the domestic team
     */
    void removeMember();

    /**
     * Add applications to a team
     * @param applications - pointer to the application list
     */
    void addApplication(ApplicationList* applications);

    /**
     * Start up method to call all necessary methods to load domestic team data
     * @param inFile - input file stream
     * @param employees - pointer to the employee list
     */
    void startup(std::ifstream& inFile, EmployeeList* employees, ApplicationList* applications);

    /**
     * Shut down method to call all necessary methods to persist domestic team data
     * @param outFile - output file stream
     */
    void shutdown(std::ofstream& outFile);

    bool isDomestic() const;
};

/**
 * Overload output operation for domestic team object
 */
std::ostream& operator << (std::ostream& os, const DomesticTeam& team);

inline bool DomesticTeam::isDomestic() const {return true;}

#endif /* DOMESTICTEAM_H_ */