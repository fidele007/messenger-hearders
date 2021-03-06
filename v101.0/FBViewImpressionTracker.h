/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSString, FBSession;

@interface FBViewImpressionTracker : NSObject {

	NSHashTable* _trackedImpressions;
	NSString* _eventName;
	FBSession* _session;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) FBSession * session;                      //@synthesize session=_session - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(id)initWithEventName:(id)arg1 ;
-(void)logImpressionWithView:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)dealloc;
-(NSString *)eventName;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
@end

