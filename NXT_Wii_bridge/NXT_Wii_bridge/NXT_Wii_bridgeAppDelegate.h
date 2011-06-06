//
//  NXT_Wii_bridgeAppDelegate.h
//  NXT_Wii_bridge
//
//  Created by Rasmus Gulbaek on 12/05/11.
//  Copyright 2011 Gulbaek I/S. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NXT_Wii_bridgeAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
