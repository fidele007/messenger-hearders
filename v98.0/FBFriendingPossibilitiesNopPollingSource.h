/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPolling.h>

@protocol FBPollingDelegate;
@class NSDate, NSString;

@interface FBFriendingPossibilitiesNopPollingSource : NSObject <FBPolling> {

	BOOL _enabled;
	id<FBPollingDelegate> _delegate;
	NSDate* _fireDate;
	NSDate* _lastPollDate;
	NSString* _name;
	double _refreshInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPollingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) NSDate * fireDate;                         //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPollDate;                                //@synthesize lastPollDate=_lastPollDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double refreshInterval;                             //@synthesize refreshInterval=_refreshInterval - In the implementation block
-(NSDate *)lastPollDate;
-(void)setLastPollDate:(NSDate *)arg1 ;
-(BOOL)enabled;
-(void)setDelegate:(id<FBPollingDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBPollingDelegate>)delegate;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDate *)fireDate;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
@end

