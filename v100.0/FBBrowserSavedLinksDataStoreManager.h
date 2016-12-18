/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBBrowserSavedLinksDataStoreManagerListenerAnnouncer, NSString, NSDate;

@interface FBBrowserSavedLinksDataStoreManager : NSObject {

	FBUserSession* _session;
	FBBrowserSavedLinksDataStoreManagerListenerAnnouncer* _announcer;
	int _count;
	NSString* _timeFrame;
	NSDate* _lastFetchTime;

}

@property (nonatomic,readonly) int count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeFrame;              //@synthesize timeFrame=_timeFrame - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchTime;                 //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
-(NSDate *)lastFetchTime;
-(NSString *)timeFrame;
-(void)fetchSavedLinkCountData;
-(int)count;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
