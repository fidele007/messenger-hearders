/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBClassProvidable.h>

@class NSUserDefaults, FBAnalyticsPerfLogger, NSBundle, NSString;

@interface MNLinkTimeLoggingService : NSObject <MNServiceControllable, FBClassProvidable> {

	NSUserDefaults* _defaults;
	FBAnalyticsPerfLogger* _perfLogger;
	NSBundle* _shellBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserDefaults:(id)arg1 perfLogger:(id)arg2 shellBundle:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)stop;
-(void)start:(id)arg1 ;
@end

