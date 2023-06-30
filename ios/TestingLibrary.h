
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestingLibrarySpec.h"

@interface TestingLibrary : NSObject <NativeTestingLibrarySpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestingLibrary : NSObject <RCTBridgeModule>
#endif

@end
