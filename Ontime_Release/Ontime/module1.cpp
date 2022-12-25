#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <iomanip>
#include <algorithm>
#include <Windows.h>
#pragma execution_character_set("unicode")

void setRussianLocale()
{
	setlocale(LC_ALL, "Russian");
}
struct Task
{
	std::string name;
	std::chrono::system_clock::time_point deadline;
	std::chrono::system_clock::time_point startTime;
	bool isCompleted = false;
};
Task createTask(const std::string& name, const std::chrono::system_clock::time_point& deadline)
{
	Task task;
	task.name = name;
	task.deadline = deadline;
	return task;
}
void showTasks(const std::vector<Task>& tasks)
{
	setRussianLocale();
	std::cout << "Список заданий:" << std::endl;
	for (size_t i = 0; i < tasks.size(); ++i)
	{
		const auto& task = tasks[i];
		std::cout << i + 1 << ". " << task.name;
		if (task.isCompleted)
			std::cout << " (выполнено)";
		else if (task.deadline < std::chrono::system_clock::now())
			std::cout << " (провалено)";
		std::cout << std::endl;
	}
}
void markTaskAsCompleted(std::vector<Task>& tasks, size_t index)
{
	if (index >= tasks.size())
	{
		std::cout << "Неправильный номер задания" << std::endl;
		return;
	}

	tasks[index].isCompleted = true;
	std::cout << "Задание помечено как выполненное" << std::endl;
}
void deleteTask(std::vector<Task>& tasks, size_t index)
{
	if (index >= tasks.size())
	{
		std::cout << "Неправильный номер задания" << std::endl;
		return;
	}

	tasks.erase(tasks.begin() + index);
	std::cout << "Задание удалено" << std::endl;
}
void showPersonalCabinet(const std::vector<Task>& tasks)
{
	setRussianLocale();
	size_t completedCount = 0;
	size_t failedCount = 0;
	for (const auto& task : tasks)
	{
		if (task.isCompleted)
		{
			++completedCount;
		}
		else if (task.deadline < std::chrono::system_clock::now())
		{
			++failedCount;
		}
	}

	std::cout << "Личный кабинет:" << std::endl;
	std::cout << "Выполнено заданий: " << completedCount << std::endl;
	std::cout << "Провалено заданий: " << failedCount << std::endl;
}
void drawMenu()
{
	std::cout << "===========================" << std::endl;
	std::cout << "1. Создать задание         " << std::endl;
	std::cout << "2. Просмотреть задания     " << std::endl;
	std::cout << "3. Завершить задание       " << std::endl;
	std::cout << "4. Удалить задание         " << std::endl;
	std::cout << "5. Профиль                 " << std::endl;
	std::cout << "6. Выход                   " << std::endl;
	std::cout << "============================" << std::endl;
	std::cout << std::endl;
}
void module1()
{
	setRussianLocale();

	std::vector<Task> tasks;
	bool isRunning = true;

	while (isRunning)
	{
		drawMenu();


		int action;
		std::cout << "Введите номер действия: ";
		std::cin >> action;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		std::cin.ignore();
		switch (action)
		{
		case 1:
		{
			std::string name;
			std::cout << "Введите название задания: ";
			std::getline(std::cin, name);

			std::tm deadline;
			std::cout << "Введите дату и время завершения в формате ДД.ММ.ГГГГ ЧЧ:ММ:СС: ";
			// мб очищать буфер?
			if (!(std::cin >> std::get_time(&deadline, "%d.%m.%Y %H:%M:%S"))) {
				std::cout << "Неправильный ввод даты и времени!" << std::endl;
				break;
			}
			// конверт объекта в хрон
			auto deadline_time_point = std::chrono::system_clock::from_time_t(std::mktime(&deadline));

			// создание таска
			tasks.push_back(createTask(name, deadline_time_point));
			std::cout << "Задание успешно создано" << std::endl;

			break;
		}
		case 2:
		{
			if (tasks.size() == 0)
			{
				std::cout << "Активных заданий нет! Создайте хотя бы одно." << std::endl;
			}
			else
			{
				showTasks(tasks);
			}
			break;
		}
		case 3:
		{
			size_t index;
			std::cout << "Введите номер задания: ";
			std::cin >> index;
			--index;
			markTaskAsCompleted(tasks, index);
			break;
		}
		case 4:
		{
			if (tasks.size() == 0)
			{
				std::cout << "Активных заданий нет! Создайте хотя бы одно." << std::endl;
				break;
			}
			else
			{
				size_t index;
				std::cout << "Введите номер задания: ";
				std::cin >> index;
				--index;
				deleteTask(tasks, index);
				break;
			}
		}
		case 5:
		{
			showPersonalCabinet(tasks);
			break;
		}
		case 6:
		{
			isRunning = false;
			break;
		}
		default:
		{
			std::cout << "Неправильный выбор" << std::endl;
			break;
		}
		}
	}
}
