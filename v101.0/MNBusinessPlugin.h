/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlugin.h>

@protocol FBIntentHandler;
@class FBUserSession, MNBusinessNavigationHandler;

@interface MNBusinessPlugin : MNPlugin {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	MNBusinessNavigationHandler* _navigationHandler;

}

@property (nonatomic,readonly) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
-(void)startWithServices:(id)arg1 session:(id)arg2 ;
-(id)initWithIntentHandler:(id)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)stop;
@end

