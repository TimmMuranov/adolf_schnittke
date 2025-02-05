#include <xlnt/xlnt.hpp>
#include <iostream>

void read_xlsx(const std::string& filename) {
    xlnt::workbook wb;
    wb.load(filename);

    // Чтение первой таблицы
    auto ws = wb.active_sheet();

    // Чтение данных из ячейки A1
    std::string value = ws.cell("A1").to_string();
    std::cout << "Value in A1: " << value << std::endl;

    // Пример чтения данных из определенной строки и столбца
    int row = 1; // первая строка
    int col = 1; // первый столбец (A)
    value = ws.cell(row, col).to_string();
    std::cout << "Value in Row " << row << ", Column " << col << ": " << value << std::endl;
}

int xl_reader() {
    read_xlsx("your_file.xlsx");
    return 0;
}
