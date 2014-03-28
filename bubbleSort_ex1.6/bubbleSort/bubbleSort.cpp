// bubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printVector(vector<int> toPrint)
{
	cout << "\n";
	for (unsigned i = 0 ; i < toPrint.size(); ++i)
		cout << "[" << toPrint.at(i) << "]";

}

vector<int> bubbleSort(vector<int> toSort, bool comparison)
{
     
	vector<int> sorted;
	
		for (unsigned i=0; i < toSort.size(); i++  )
	 {
		  for (unsigned j = 0; j < i; j++)
			  if (toSort.at(j) > toSort.at(j+1)) { swap(toSort[j], toSort[j+1]);}
			  printVector(toSort);
	 }



return sorted;
}





int _tmain(int argc, _TCHAR* argv[])
{

	return EXIT_SUCCESS;
}

