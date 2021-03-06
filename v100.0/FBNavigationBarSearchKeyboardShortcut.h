/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBKeyCommandSource.h>

@class FBNavigationBarSearchHandler, FBKeyCommandHandler, NSArray, NSString;

@interface FBNavigationBarSearchKeyboardShortcut : NSObject <FBKeyCommandSource> {

	FBNavigationBarSearchHandler* _searchHandler;
	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)_initializeKeyCommands;
-(void)_activateSearchField;
-(id)initWithSearchHandler:(id)arg1 ;
-(void)dealloc;
@end

