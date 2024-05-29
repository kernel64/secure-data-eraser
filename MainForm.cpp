/*
 * This program is distributed under the terms of the GNU General Public License version 3.0 (GPL-3.0).
 * You should have received a copy of the license along with this program. If not, you can
 * find it on the Free Software Foundation's website: https://www.gnu.org/licenses/gpl-3.0.html
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GPL-3.0 license with this program. If not,
 * see the "LICENSE" file or visit the Free Software Foundation's website.
 */

#include "src\ConversionUtils.h"
#include "src\Constants.h"
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Indique que le thread principal doit être en mode STA
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	securedataeraser::MainForm form;
	Application::Run(% form);

	return 0;
}
