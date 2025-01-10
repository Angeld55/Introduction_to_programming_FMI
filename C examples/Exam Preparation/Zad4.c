#include <stdio.h>
#include <stdlib.h>

int checkForElementInSet(int element, const int* set, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (set[i] == element)
		{
			return 1;
		}
	}

	return 0;
}

void addWithIntersection(int* resultSet, const int* setToAdd, int setToAddSize, int resultSetSize)
{
	for (int i = 0; i < resultSetSize; i++)
	{
		int element = i;
		int elementExisits = resultSet[i];

		if (elementExisits)
		{
			int elementExistsInBothSets = checkForElementInSet(element, setToAdd, setToAddSize);

			if (!elementExistsInBothSets)
			{
				resultSet[element] = 0;
			}
		}
	}
}

void addWithUnion(int* resultSet, int* setToAdd, int size)
{
	for (int i = 0; i < size; i++)
	{
		int elementToAdd = setToAdd[i];
		resultSet[elementToAdd] = 1;
	}
}

void addToResult(int* resultSet, const int* setToAdd, int resultSetSize, int setToAddSize, int addType)
{
	if (addType == 1) // intersection
	{
		addWithIntersection(resultSet, setToAdd, setToAddSize, resultSetSize);
	}
	else // uion
	{
		addWithUnion(resultSet, setToAdd, setToAddSize);
	}

	free(setToAdd);
}

int* readSet(int* setSize, int* addType)
{
	int elementsCount = 0;
	scanf_s("%d", &elementsCount);

	int* set = (int*)malloc(elementsCount * sizeof(int));

	for (int i = 0; i < elementsCount; i++)
	{
		int element = 0;
		scanf_s("%d", &element);

		set[i] = element;
	}

	*setSize = elementsCount;

	scanf_s("%d", addType);

	return set;
}

void createResultSet(int* resultSet, int setsCount, int resultSetSize)
{
	int setSize = 0;
	int addType = 0;

	int* set = readSet(&setSize, &addType);

	addToResult(resultSet, set, resultSetSize, setSize, 2);

	for (int i = 1; i < setsCount; i++)
	{
		set = readSet(&setSize, &addType);

		addToResult(resultSet, set, resultSetSize, setSize, addType);
	}
}

int main()
{
	int setLimit;
	scanf_s("%d", &setLimit);

	int* resultSet = calloc(setLimit + 1, sizeof(int));

	int setsCount;
	scanf_s("%d", &setsCount);

	createResultSet(resultSet, setsCount, setLimit + 1);

	for (int i = 0; i < setLimit + 1; i++)
	{
		if (resultSet[i] == 1)
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	free(resultSet);
}