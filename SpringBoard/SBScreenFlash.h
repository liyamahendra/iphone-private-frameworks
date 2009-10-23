/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIWindow, UIView;

@interface SBScreenFlash : NSObject {
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;
}
+(id)sharedInstance;
-(void)_createUI;
-(void)_tearDown;
-(void)_orderWindowOut:(id)anOut;
-(void)_orderWindowFront:(id)front;
-(void)stopFlash;
-(void)flash;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
@end
