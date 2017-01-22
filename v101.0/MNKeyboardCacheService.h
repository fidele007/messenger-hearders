/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@class UIWindow, FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNKeyboardCacheService : NSObject <MNServiceControllable, FBClassProvidable> {

	UIWindow* _window;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	BOOL _hasShownKeyboard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 window:(id)arg2 ;
-(void)_keyboardWillShow;
-(void)_cacheKeyboard;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
