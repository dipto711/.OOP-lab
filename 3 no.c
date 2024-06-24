class Student {

    private static String university = "XYZ University";
    private static int studentCount = 0;


    private int id;
    private String name;
    private String department;
    private double cgpa;


    public Student(int id, String name, String department, double cgpa) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.cgpa = cgpa;
        studentCount++;
    }


    public void displayStudentDetails() {
        System.out.println("Student ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("CGPA: " + cgpa);
        System.out.println("University: " + university);
        System.out.println();
    }


    public static void displayStudentCount() {
        System.out.println("Total number of students: " + studentCount);
    }
}

public class Main {
    public static void main(String[] args) {
        Student student1 = new Student(1, "John Doe", "Computer Science", 3.8);
        Student student2 = new Student(2, "Jane Smith", "Engineering", 3.5);
        Student student3 = new Student(3, "Bob Johnson", "Business", 3.2);

        student1.displayStudentDetails();
        student2.displayStudentDetails();
        student3.displayStudentDetails();

        Student.displayStudentCount();
    }
}
