#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define DAYS 31
#define FILE_NAME "users.txt"

typedef struct {
    int id;
    char name[50];
    char position[30];
    float salary;
    int attendance[DAYS]; 
} Employee;

Employee employees[MAX];
int count = 0;
int isAdmin = 0;  

// ================= USER SYSTEM =================

// check if username exists
int exists(char *user) {
    char fuser[50], fpass[50];
    FILE *f = fopen(FILE_NAME, "r");
    if (!f) return 0;
    while (fscanf(f, "%s %s", fuser, fpass) != EOF)
        if (!strcmp(user, fuser)) { fclose(f); return 1; }
    fclose(f);
    return 0;
}

void signUp(){
    char user[50], pass[50];
    printf("New username: "); scanf("%s", user);
    if (exists(user)) { printf("⚠️ Username exists!\n"); return; }
    printf("New password: "); scanf("%s", pass);
    FILE *f = fopen(FILE_NAME, "a");
    fprintf(f, "%s %s\n", user, pass);
    fclose(f);
    printf("✅ Sign-up done!\n");
}

int loginUser() {
    char user[50], pass[50], fuser[50], fpass[50];
    printf("Username: "); scanf("%s", user);
    printf("Password: "); scanf("%s", pass);
    FILE *f = fopen(FILE_NAME, "r");
    if (!f) return 0;
    while (fscanf(f, "%s %s", fuser, fpass) != EOF)
        if (!strcmp(user, fuser) && !strcmp(pass, fpass)) { fclose(f); return 1; }
    fclose(f);
    return 0;
}

int loginAdmin() {
    char user[50], pass[50];
    printf("Admin username: "); scanf("%s", user);
    printf("Admin password: "); scanf("%s", pass);
    return (!strcmp(user, "admin") && !strcmp(pass, "1234")); 
}

// ================= EMPLOYEE SYSTEM =================

// Save to file
void saveToFile() {
    FILE *fp = fopen("employees.dat", "wb");
    if (!fp) { printf("Error saving!\n"); return; }
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(employees, sizeof(Employee), count, fp);
    fclose(fp);
}

// Load from file
void loadFromFile() {
    FILE *fp = fopen("employees.dat", "rb");
    if (!fp) return;
    fread(&count, sizeof(int), 1, fp);
    fread(employees, sizeof(Employee), count, fp);
    fclose(fp);
}
// Add employee
void addEmployee() {
    if (count >= MAX) { printf("Database full!\n"); return; }
    Employee e;
    memset(&e.attendance, 0, sizeof(e.attendance));
    printf("Enter ID: "); scanf("%d", &e.id);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == e.id) {
            printf("Error: ID already exists!\n");
            return;
        }
    }
     printf("Enter Name: "); getchar(); fgets(e.name, 50, stdin);
    e.name[strcspn(e.name, "\n")] = 0;
    printf("Enter Position: "); fgets(e.position, 30, stdin);
    e.position[strcspn(e.position, "\n")] = 0;
    printf("Enter Salary: "); scanf("%f", &e.salary);
    employees[count++] = e;
    printf("Employee added.\n");
}

// Display employees
void displayEmployees() {
    if (!count) { printf("No records.\n"); return; }
    for (int i = 0; i < count; i++)
        printf("ID:%d | %s | %s | %.2f\n", employees[i].id,
               employees[i].name, employees[i].position, employees[i].salary);
}

// Search employee
void searchEmployee() {
    int choice, id; char name[50];
    printf("Search by (1-ID,2-Name): "); scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter ID: "); scanf("%d", &id);
        for (int i = 0; i < count; i++)
            if (employees[i].id == id) {
                printf("Found: %s, %s, %.2f\n", employees[i].name,
                       employees[i].position, employees[i].salary);
                return;
            }
    } else {
        printf("Enter Name: "); getchar(); fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = 0;
        for (int i = 0; i < count; i++)
            if (!strcmp(employees[i].name, name)) {
                printf("Found: ID:%d, %s, %.2f\n", employees[i].id,
                       employees[i].position, employees[i].salary);
                return;
            }
    }
    printf("Not found.\n");
}

// Update employee
void updateEmployee() {
    int id; printf("Enter ID: "); scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("New Name: "); getchar(); fgets(employees[i].name, 50, stdin);
            employees[i].name[strcspn(employees[i].name, "\n")] = 0;
            printf("New Position: "); fgets(employees[i].position, 30, stdin);
            employees[i].position[strcspn(employees[i].position, "\n")] = 0;
            printf("New Salary: "); scanf("%f", &employees[i].salary);
            printf("Updated.\n"); return;
        }
    }
    printf("ID not found.\n");
}

// Delete employee
void deleteEmployee() {
    int id; printf("Enter ID to delete: "); scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++)
                employees[j] = employees[j + 1];
            count--;
            printf("Employee deleted.\n");
            return;
        }
    }
    printf("ID not found.\n");
}

// Mark attendance
void markAttendance() {
    int id, day;
    printf("Enter Employee ID: "); scanf("%d", &id);
    printf("Enter Day (1-31): "); scanf("%d", &day);
    if (day < 1 || day > DAYS) { printf("Invalid day!\n"); return; }
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            employees[i].attendance[day-1] = 1;
            printf("Attendance marked for %s on day %d.\n", employees[i].name, day);
            return;
        }
    }
    printf("Employee not found.\n");
}

// Attendance report
void viewAttendanceReport() {
    if (!count) { printf("No employees.\n"); return; }
    printf("\n--- Attendance Report ---\n");
    for (int i = 0; i < count; i++) {
        int total = 0;
        for (int d = 0; d < DAYS; d++) total += employees[i].attendance[d];
        printf("ID:%d | %s | Present: %d days\n", employees[i].id,
               employees[i].name, total);
    }
}

// Salary report
void viewSalaryReport() {
    if (!count) { printf("No employees.\n"); return; }
    int workingDays;
    printf("Enter total working days in month: ");
    scanf("%d", &workingDays);
    printf("\n--- Salary Report ---\n");
    for (int i = 0; i < count; i++) {
        int present = 0;
        for (int d = 0; d < DAYS; d++) present += employees[i].attendance[d];
        float daily = employees[i].salary / workingDays;
        float payable = daily * present;
        printf("ID:%d | %s | Base: %.2f | Present: %d | Payable: %.2f\n",
               employees[i].id, employees[i].name, employees[i].salary,
               present, payable);
    }
}

// ================= MAIN =================
int main() {
    int ch;
    loadFromFile();

    printf("\n--- Login ---\n1. User Login  2. Admin Login  3. Sign Up\nChoice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        if (loginUser()) { isAdmin = 0; printf("✅ User login Successful\n"); }
        else { printf("❌ Login Fail.\n"); return 0; }
    } else if (ch == 2) {
        if (loginAdmin()) { isAdmin = 1; printf("✅ Admin login Successful\n"); }
        else { printf("❌ Wrong admin!\n"); return 0; }
    } else if (ch == 3) {
        signUp();
        return 0;
    } else return 0;

    do {
        printf("\n--- Employee Management ---\n");
        printf("1.Display 2.Search 3.Attendance Report\n");

        if (isAdmin) {
            printf("4.Add 5.Update 6.Delete 7.Mark Attendance\n");
            printf("8.Salary Report 9.Save\n");
        }

        printf("0.Exit\nChoice: "); 
        scanf("%d", &ch);

        if (!isAdmin) {
            switch (ch) {
                case 1: displayEmployees(); break;
                case 2: searchEmployee(); break;
                case 3: viewAttendanceReport(); break;
                case 0: saveToFile(); printf("Exiting...\n"); break;
                default: printf("Not allowed! (User mode)\n");
            }
        } else {
            switch (ch) {
                case 1: displayEmployees(); break;
                case 2: searchEmployee(); break;
                case 3: viewAttendanceReport(); break;
                case 4: addEmployee(); break;
                case 5: updateEmployee(); break;
                case 6: deleteEmployee(); break;
                case 7: markAttendance(); break;
                case 8: viewSalaryReport(); break;
                case 9: saveToFile(); break;
                case 0: saveToFile(); printf("Exiting...\n"); break;
                default: printf("Invalid!\n");
            }
        }
    } while (ch != 0);

    return 0;
}
