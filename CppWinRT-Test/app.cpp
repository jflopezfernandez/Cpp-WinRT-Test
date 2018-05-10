
#pragma comment(lib, "windowsapp")

#include "winrt/Windows.System.Profile.SystemManufacturers.h"


using namespace winrt;
using namespace Windows::System::Profile::SystemManufacturers;


int main()
{
	init_apartment();
	const auto SerialNumber = SmbiosInformation::SerialNumber();
	printf("Serial Number: %ls\n", SerialNumber.c_str());
}
