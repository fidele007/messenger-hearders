/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIWindow.h>
#import <Messenger/FBKeyCommandResponder.h>

@class FBKeyCommandHandler, NSString;

@interface MNApplicationWindow : UIWindow <FBKeyCommandResponder> {

	FBKeyCommandHandler* _keyCommandHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 keyCommandHandler:(id)arg2 ;
-(void)handleKeyCommandAction:(id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
@end

