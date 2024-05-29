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

#pragma once
#include <msclr\marshal_cppstd.h>


namespace securedataeraser {
    System::String^ ConvertirStdString(std::string const& input) {
        return msclr::interop::marshal_as<System::String^>(input);
    }
}
