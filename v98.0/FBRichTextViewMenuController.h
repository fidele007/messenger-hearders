/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIMenuController, NSTimer, NSArray, FBRichTextView;

@interface FBRichTextViewMenuController : NSObject {

	UIMenuController* _menuController;
	NSTimer* _longPressTimer;
	BOOL _isVisible;
	NSArray* _menuItems;
	FBRichTextView* _richTextView;
	double _menuDelay;

}

@property (assign,nonatomic) double menuDelay;              //@synthesize menuDelay=_menuDelay - In the implementation block
+(id)newMenuControllerForRichTextView:(id)arg1 menuItems:(id)arg2 ;
-(void)_didLongPress:(id)arg1 ;
-(BOOL)timerIsActive;
-(BOOL)menuControllerIsVisible;
-(void)activateMenuControllerAtPoint:(CGPoint)arg1 ;
-(void)dismissMenuController;
-(void)_didDismissMenuController;
-(BOOL)_canDisplayWithTextCheckingResult:(id)arg1 ;
-(void)_willHideMenuController:(id)arg1 ;
-(double)menuDelay;
-(void)setMenuDelay:(double)arg1 ;
-(void)dealloc;
@end

