//
//  iTermPasswordManagerWindowController.h
//  iTerm
//
//  Created by George Nachman on 5/14/14.
//
//

#import <Cocoa/Cocoa.h>

@protocol iTermPasswordManagerDelegate <NSObject>

- (BOOL)iTermPasswordManagerCanEnterPassword;
- (void)iTermPasswordManagerEnterPassword:(NSString *)password;

@end

@interface iTermPasswordManagerWindowController : NSWindowController

@property(nonatomic, assign) id<iTermPasswordManagerDelegate> delegate;

// Re-check if the password can be entered.
- (void)update;

@end