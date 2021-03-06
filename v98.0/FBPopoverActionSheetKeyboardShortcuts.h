/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBKeyCommandSource.h>

@class FBKeyCommandHandler, NSArray, FBActionSheetContentView, NSString;

@interface FBPopoverActionSheetKeyboardShortcuts : NSObject <FBKeyCommandSource> {

	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;
	unsigned long long _selectedItemIndex;
	BOOL _isRegistered;
	FBActionSheetContentView* _contentView;

}

@property (nonatomic,retain) FBActionSheetContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)_initializeKeyCommands;
-(void)registerKeyboardShortcuts;
-(void)unregisterKeyboardShortcuts;
-(void)_updateSelectedHighlightedItemFromIndex:(unsigned long long)arg1 ;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)_enterKeyPressed;
-(void)dealloc;
-(id)init;
-(FBActionSheetContentView *)contentView;
-(void)setContentView:(FBActionSheetContentView *)arg1 ;
@end

