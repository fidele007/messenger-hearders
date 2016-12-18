/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, MNNavigationPluginService;
@class FBUserSession;

@interface MNBusinessNavigationHandler : NSObject {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<MNNavigationPluginService> _navigationService;

}

@property (nonatomic,readonly) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                            //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id<MNNavigationPluginService> navigationService;              //@synthesize navigationService=_navigationService - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(id<MNNavigationPluginService>)navigationService;
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 navigationService:(id)arg3 ;
-(void)openURL:(id)arg1 ;
-(FBUserSession *)session;
@end
