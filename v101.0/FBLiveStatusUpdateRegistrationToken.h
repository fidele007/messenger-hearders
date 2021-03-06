/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLiveStatusUpdateRegistrationToken.h>

@protocol FBLiveStatusUpdateRegistrationToken <NSObject>
@required
-(void)unregister;

@end


@class FBLiveStatusUpdateService, FBLiveStatusUpdateStoryJob, FBLiveStatusUpdateJobSubscriber, NSString;

@interface FBLiveStatusUpdateRegistrationToken : NSObject <FBLiveStatusUpdateRegistrationToken> {

	FBLiveStatusUpdateService* _liveStatusUpdateService;
	FBLiveStatusUpdateStoryJob* _job;
	FBLiveStatusUpdateJobSubscriber* _subscriber;
	NSString* _debugContext;

}

@property (assign,nonatomic,__weak) FBLiveStatusUpdateService * liveStatusUpdateService;              //@synthesize liveStatusUpdateService=_liveStatusUpdateService - In the implementation block
@property (nonatomic,retain) FBLiveStatusUpdateStoryJob * job;                                        //@synthesize job=_job - In the implementation block
@property (assign,nonatomic,__weak) FBLiveStatusUpdateJobSubscriber * subscriber;                     //@synthesize subscriber=_subscriber - In the implementation block
@property (nonatomic,copy) NSString * debugContext;                                                   //@synthesize debugContext=_debugContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBLiveStatusUpdateService *)liveStatusUpdateService;
-(void)setLiveStatusUpdateService:(FBLiveStatusUpdateService *)arg1 ;
-(void)setDebugContext:(NSString *)arg1 ;
-(void)dealloc;
-(void)unregister;
-(void)clear;
-(void)setJob:(FBLiveStatusUpdateStoryJob *)arg1 ;
-(NSString *)debugContext;
-(FBLiveStatusUpdateJobSubscriber *)subscriber;
-(void)setSubscriber:(FBLiveStatusUpdateJobSubscriber *)arg1 ;
-(FBLiveStatusUpdateStoryJob *)job;
@end

