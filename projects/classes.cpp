  // --------------------------------

  Assignment::Assignment(char* _name, string _due_date){
    name = _name;
    due_date = _due_date;
  }

  Assignment::Assignment(){
  }

  char* Assignment::get_name(){
    return name;
  }

  void Assignment::set_name(char* _name){
    name = _name;
  }

  string Assignment::get_due_date(){
    return due_date;
  }

  void Assignment::set_due_date(string _due_date){
    due_date = _due_date;
  }

  Assignment& Assignment::operator= (const Assignment assignment){
    name =  assignment.name;
    due_date = assignment.due_date;

    return *this;
  }

  // --------------------------------

  Course::Course(string _couse_name, string _course_number){
      course_name = _course_name;
      course_number = _course_number;
  }

  string Course::get_course_name(){
    return course_name;
  }

  void Course::set_course_name(string _course_name){
    course_name = _course_name;
  }

  string Course::get_course_number(){
    return course_number;
  }

  void Course::set_course_number(string _course_number){
    course_number = _course_number;
  }

  void Course::show_content(){

    cout << "Name: " << course_name << endl;
    cout << "Number: " << course_number << endl;
    cout << "------------------------" << endl;

    if(assignments.isEmpty()){
      cout << "There are no assingments in list!" << endl;
      cout << "------------------------" << endl;
    }

    for(int i=0; i<assinments.size(); i++){
      cout << "Name of assingment: " << assingments[i].get_name() << endl;
      cout << "Due date: " << assingments[i].get_due_date() << endl;
      cout << "------------------------" << endl;
    }

  } 

// --------------------------------
