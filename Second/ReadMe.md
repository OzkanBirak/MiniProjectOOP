# Report on University Registration System Components

The university registration system comprises several key components encapsulated within separate header files and the main program file. Each component plays a crucial role in managing various aspects of student enrollment, course registration, and administrative functions.

### Waitlist.h:

Defines the Waitlist class for storing information about waitlisted students. Attributes include waitlistId, studentId, and courseCode. Provides access functions to retrieve waitlist information.

### Schedule.h:

Represents the Schedule class responsible for managing scheduling details. Attributes include studentId, courseCode, semester, days, and room. Includes member functions for accessing schedule information.

### FacultyAdvisor.h:

Defines the FacultyAdvisor class dedicated to advising students. Contains adviseStudent function to advise a specific student by name. 

### Faculty.h:

Represents the Faculty class detailing faculty information. Attributes encompass facultyId, facultyName, facultyEmail, facultyPhoneNumber, department, and coursesTaught. Offers member functions to access faculty details.

### FinancialInformation.h:

Defines the FinancialInformation class for managing students' financial data. Attributes consist of studentFinancial, courseFees, paymentHistory, and financialStatus. Provides functions to retrieve financial information.

### Course.h:

Represents the Course class to handle course-related operations. Attributes include courseCode, title, credits, instructor, enrolledStudents, and type (CourseType). Implements functions to display course details and register students in courses.

### Registration.h:

Represents the Registration class for storing registration details. Attributes encompass registrationId, studentId, courseCode, registrationDate, status, and paymentStatus. Offers functions to access registration information.

### AdministrativeStaff.h:

Defines the AdministrativeStaff class responsible for enrolling students in courses. Contains enrollStudentInCourse function to enroll a student in a specific course. 

The main.cpp file serves as the core program logic, orchestrating interactions between different system components. It provides user login functionalities for students, administrative staff, and faculty advisors, enabling them to perform actions such as course registration and student enrollment.

In conclusion, the collaborative functionality of these components forms a comprehensive university registration system, catering to student needs, course management, faculty advising, and administrative tasks within an educational institution.
