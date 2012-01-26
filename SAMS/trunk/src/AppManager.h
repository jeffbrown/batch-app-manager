/**
 * @file AppManager.h
 * @brief AppManager declaration
 */

#ifndef APPMANAGER_H_
#define APPMANAGER_H_

#include "EmployeeList.h"

#include <string>
#include <iostream>
#include <fstream>

/**
 * @brief The AppManager class functions as the facade for the entire SAMS system.
 *
 * The main entry point for all of the system functionality and delegates system
 * operations to the appropriate objects in the system
 */
class AppManager {
public:
	/**
	 * Default AppManager constructor
	 */
  AppManager();

  /**
   * AppManager Destructor
   */
  virtual ~AppManager();

  /**
   * Start up method to call all necessary methods to read in data
   */
	void startup();
  
  /**
   * Shut down method to call all necessary methods to persist data and delete all variables from memory
   */
	void shutdown();

  // accessor methods

  /**
   * @return the system employee list
   */
  EmployeeList* getEmployees() const;

  // modifier methods

  /**
   * replace the employee list with the specified value
   * @param ePtr - the pointer to the new system employee list
   */
  void setEmployees(EmployeeList* ePtr);

  // system functions

  /**
   * add employees to the system
   */
  void addEmployees();

  /**
   * change employee informations
   */
  void changeEmployees();

  /**
   * remove employees from the system
   */
  void removeEmployees();

  /**
   * display all employees in the employee list
   */
  void displayEmployees();

private:
  EmployeeList* employees;
};

// accessor method definitions
inline EmployeeList* AppManager::getEmployees() const {return employees;}

// delligated system operations
inline void AppManager::addEmployees() {employees->addEmployee();}
inline void AppManager::changeEmployees() {employees->changeEmployee();}
inline void AppManager::removeEmployees() {employees->removeEmployee();}
inline void AppManager::displayEmployees() {employees->display();}

#endif /* APPMANAGER_H_ */
