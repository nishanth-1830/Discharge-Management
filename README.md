# 🏥 **DISCHARGE  MANAGEMENT  SYSTEM (C Programming)**
## 📄 **ABSTRACT**

The **Discharge Management System** is a terminal-based **C** application designed to manage patient discharge details efficiently.
It allows hospital administrators to **add**,** view**, **search**, **update**, and delete discharge records in a systematic way.

All records are stored permanently in a binary file (`discharge.txt`), ensuring that patient data remains saved even after the program is closed.

This project uses core C concepts such as **structures**, **file handling**, **conditionals**, **loops**, and **modular programming**, making it ideal for **beginners**, **academic mini-projects**, and **practical learning**.

---

## ✨ **FEATURES**

### **Core Functionalities**

- ➕ **Add new patient discharge records**
- 📋 **View all discharge records** in a formatted table
- 🔍 **Search patient discharge record using Patient ID**
- ✏️ **Update discharge information**
- ❌ **Delete a record using temporary file method**
- 💾 Saves all data in binary file (`discharge.txt`)
- 🖥️ Fully terminal-based, menu-driven system
- 👨‍💻 Beginner-friendly & modular code
- ⚙️ Auto-creates data file if missing
- ⚠️ Includes basic validation and error handling

---

## 🛠️ **TECHNICAL REQUIREMENTS**

### **System Requirements**

- OS: **Windows / Linux / macOS**
- Terminal or Command Prompt
- Minimum **4 MB RAM**
- Small disk space for `discharge.txt`

### **Software Requirements**

- C Compiler: **GCC / MinGW / Clang / MSVC**
- Editor: VS Code, Code::Blocks, Dev-C++, Turbo C (optional)
- Optional: **Makefile support**

### **Programming Requirements**

-Language: **C**
- Standards: **C89 / C99 / C11**
- Required Headers:

-`stdio.h`

-`stdlib.h`

-`string.h`

### **File Handling**

- Binary file storage (`discharge.txt`)
- Auto-creates file if not found
- Read/Write permissions required

  ---

## 📌 **FUNCTIONAL REQUIREMENTS**

### **User Interface**
- Terminal-based
- Menu-driven
- Handles invalid input safely

  ---

## 🏥 **Patient Discharge Operations**
## ➕ **Add Discharge Record**

-Enter: Patient ID, Name, Age, Disease, Treatment Details, Bill Amount
- Saved in 'discharge.txt'

### 📋 **View Discharge Records**

-Displays all stored records in a clean table format

### 🔍 **Search Record**

- Search by unique Patient ID

### ✏️ **Update Record**

- Modify any stored field (name, age, disease, bill, etc.)

### ❌ **Delete Record**

- Uses temporary file method
- Safely removes selected patient record

### 🔧 **DATA MANAGEMENT**

- Fast data access using binary file handling
- Safe updates and deletions
- Handles empty or missing files gracefully

### 🔄 **PROGRAM FLOW**

- Menu loop runs until user selects Exit
- Each operation shows success/error messages
- Well-structured logic for smooth navigation

  ---

## ▶️ **Running the Program**

###1️⃣ **Compile**
```bash
gcc discharge.c -o discharge
````

### 2️⃣ Run
**Linux / macOS**
```bash
./discharge
```

**Windows**

```
discharge.exe
```

### 3️⃣ Data File

 *Automatically creates discharge.txt
 *Stores all records in binary format

---

## 📸 **Screenshots (Optional)**
*Add Patient Discharge

*<img width="405" height="346" alt="Screenshot 2025-11-23 100752" src="https://github.com/user-attachments/assets/6f309258-9516-486c-bf89-2562981731d1" />


*View Records

*<img width="456" height="388" alt="Screenshot 2025-11-23 101106" src="https://github.com/user-attachments/assets/0aac6a39-995e-479a-8d27-36bf2d9e195f" />

*Search Patient

*<img width="422" height="394" alt="Screenshot 2025-11-23 101152" src="https://github.com/user-attachments/assets/0995061d-2328-42a8-802c-0f06ab2e9288" />


*Delete / Discharge

*<img width="685" height="240" alt="Screenshot 2025-11-23 101236" src="https://github.com/user-attachments/assets/24b44e77-d7c6-46ec-89c1-bbac5936fdd9" />


*Exit Screen

*<img width="438" height="159" alt="Screenshot 2025-11-23 101427" src="https://github.com/user-attachments/assets/10cc0a6f-0e8a-4c97-bdd8-eccc39d33eac" />


##📝 **Author**

**K. Nishanth Reddy**
