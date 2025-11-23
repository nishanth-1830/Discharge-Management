#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
    float treatmentCost;
    float roomCharges;
    float totalBill;
};

void addPatient();
void viewPatients();
void searchPatient();
void deletePatient();
void calculateBill(struct Patient *p);

int main() {
    int choice;

    while(1) {
        printf("\n===== DISCHARGE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Discharge Details\n");
        printf("2. View All Records\n");
        printf("3. Search Patient\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addPatient();
                break;
            case 2:
                viewPatients();
                break;
            case 3:
                searchPatient();
                break;
            case 4:
                deletePatient();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void calculateBill(struct Patient *p) {
    p->totalBill = p->treatmentCost + p->roomCharges;
}

void addPatient() {
    struct Patient p;
    FILE *fp = fopen("discharge.txt", "ab");

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);

    printf("Enter Name: ");
    getchar(); 
    fgets(p.name, 50, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Disease: ");
    getchar();
    fgets(p.disease, 50, stdin);
    p.disease[strcspn(p.disease, "\n")] = '\0';

    printf("Enter Treatment Cost: ");
    scanf("%f", &p.treatmentCost);

    printf("Enter Room Charges: ");
    scanf("%f", &p.roomCharges);

    calculateBill(&p);

    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);

    printf("\nRecord Added Successfully!\n");
}

void viewPatients() {
    struct Patient p;
    FILE *fp = fopen("discharge.txt", "rb");

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\n==== ALL DISCHARGE RECORDS ====\n");

    while(fread(&p, sizeof(p), 1, fp)) {
        printf("\nPatient ID: %d\n", p.id);
        printf("Name: %s\n", p.name);
        printf("Age: %d\n", p.age);
        printf("Disease: %s\n", p.disease);
        printf("Treatment Cost: %.2f\n", p.treatmentCost);
        printf("Room Charges: %.2f\n", p.roomCharges);
        printf("TOTAL BILL: %.2f\n", p.totalBill);
        printf("------------------------------------\n");
    }

    fclose(fp);
}

void searchPatient() {
    struct Patient p;
    FILE *fp = fopen("discharge.txt", "rb");
    int id, found = 0;

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter Patient ID to search: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1, fp)) {
        if(p.id == id) {
            printf("\nRecord Found:\n");
            printf("Patient ID: %d\n", p.id);
            printf("Name: %s\n", p.name);
            printf("Age: %d\n", p.age);
            printf("Disease: %s\n", p.disease);
            printf("Treatment Cost: %.2f\n", p.treatmentCost);
            printf("Room Charges: %.2f\n", p.roomCharges);
            printf("TOTAL BILL: %.2f\n", p.totalBill);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Record Not Found!\n");

    fclose(fp);
}

void deletePatient() {
    struct Patient p;
    FILE *fp = fopen("discharge.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");
    int id, found = 0;

    if(fp == NULL) {
        printf("No records available to delete!\n");
        return;
    }

    printf("Enter Patient ID to delete: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1, fp)) {
        if(p.id == id) {
            found = 1;
            continue; 
        }
        fwrite(&p, sizeof(p), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("discharge.txt");
    rename("temp.txt", "discharge.txt");

    if(found)
        printf("Record Deleted Successfully!\n");
    else
        printf("Record Not Found!\n");
}
