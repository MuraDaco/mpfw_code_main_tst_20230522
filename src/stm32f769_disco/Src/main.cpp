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

/// lib include
#include "krInitStaticManager.h"
using namespace fw2::core::core;

#include "krThreadManager.h"
using namespace fw2::wrapper::core;

#include "rsSerial.h"
using namespace fw2::wrapper::resources;

// tst include
#include "mn/mg/tt_MainManager.h"
#include "sv/svSync/v_01/mn/tt_mn_svSyncMain.h"

// tst/tb include
#include "tb/kr/krInit/v_02/krInitStaticTbl.h"
#include "tb/kr/krThread/v_02/krThreadTbl.h"
#include "tb/kr/krTimer/v_02/krTimerTbl.h"
#include "tb/sv/svStateMachine/v_02/svStateMachineTbl.h"
using namespace mpfw::libs::tst_20221206;

#include "stm32f7xx_hal.h"

uint8_t rx_buffer[6];

int main(void) {
//    // ***************************************************************************
//    rsSerial::Tx("START  - Init static functions"); rsSerial::Tx(rsSerial::endl);
//    rsSerial::Tx(rsSerial::endl);
    krInitStaticManager::LoopOnUnits();
    //rsSerial::Init2();
    rsSerial::Tx(rsSerial::endl);

    // /* attach 12 MHz clock to FLEXCOMM8 (I2C master) */
    // CLOCK_AttachClk(kFRO12M_to_FLEXCOMM8);
    // /* reset FLEXCOMM for I2C */
    // RESET_PeripheralReset(kFC8_RST_SHIFT_RSTn);
    // BOARD_InitBootPins();

    // ***************************************************************************
    // ...........1234567890123456789012345678901234567890
    rsSerial::Tx("START  - Main"); rsSerial::Tx(rsSerial::endl);

    // ***************************************************************************
    // ...........1234567890123456789012345678901234567890
    rsSerial::Tx("START  - Setup Timer Service"); rsSerial::Tx(rsSerial::endl);
    rsSerial::Tx(rsSerial::endl);
    rsSerial::Tx(rsSerial::endl);

    // ***************************************************************************
    // ...........1234567890123456789012345678901234567890
    rsSerial::Tx("START  - Setup State Machine Service"); rsSerial::Tx(rsSerial::endl);
    rsSerial::Tx(rsSerial::endl);
    rsSerial::Tx(rsSerial::endl);

    // ***************************************************************************
    rsSerial::Tx("START  - Threads definition and then run them"); rsSerial::Tx(rsSerial::endl);
    rsSerial::Tx(rsSerial::endl);
    krThreadManager::InitThenRun();

    while (1) {

    }


    return 0 ;
}

