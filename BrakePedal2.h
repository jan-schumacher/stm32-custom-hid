// C:\Users\Jan\workspace\testmx\BrakePedal2.h


char ReportDescriptor[27] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x04,                    // USAGE (Joystick)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x09, 0x01,                    //   USAGE (Pointer)
    0xa1, 0x00,                    //   COLLECTION (Physical)
    0x05, 0x02,                    //     USAGE_PAGE (Simulation Controls)
    0x09, 0xc5,                    //     USAGE (Brake)
    0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
    0x26, 0xff, 0x0f,              //     LOGICAL_MAXIMUM (4095)
    0x75, 0x0c,                    //     REPORT_SIZE (12)
    0x95, 0x01,                    //     REPORT_COUNT (1)
    0x81, 0x82,                    //     INPUT (Data,Var,Abs,Vol)
    0xc0,                          //         END_COLLECTION
    0xc0                           //     END_COLLECTION
};

