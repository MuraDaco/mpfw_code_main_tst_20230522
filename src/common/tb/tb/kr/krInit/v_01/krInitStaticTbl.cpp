//  *******************************************************************************
//  
//  mpfw / fw2 - Multi Platform FirmWare FrameWork 
//      library that contains the "main" entry point and, 
//      eventualy, application code that is platform dependent
//  Copyright (C) (2023) Marco Dau
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//  
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//  
//  You can contact me by the following email address
//  marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
//  
//  *******************************************************************************
/*
 * krInitStaticTbl.cpp
 *
 *  Created on: Sep, 30 2022
 *      Author: Marco Dau
 */

// module include
#include "krInitStaticTbl.h"

// lib include
#include "mpfw_code_libs_fw2_wrapper_resources/common/src/tb/kr/krInit/v_01/krInitStaticTbl.h"
#include "mpfw_code_apps_tst_20221206/src/tb/kr/krInit/v_02/krInitStaticTbl.h"

namespace fw2 { namespace core { namespace core {

krInitStaticTbl::InitFunction_t* krInitStaticTbl::krInitStaticPtr2Array[] = {
    fw2:: wrapper::resources::   krInitStaticTbl::krInitStaticPtrArray	,
    mpfw::libs::   tst_20221206::krInitStaticTbl::krInitStaticPtrArray	,
	nullptr
};

} } }	// namespace fw2::core::core

