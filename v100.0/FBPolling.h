/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol FBPolling <NSObject>
@property (assign,nonatomic,__weak) id<FBPollingDelegate> delegate; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,__weak,readonly) NSDate * fireDate; 
@property (nonatomic,copy) NSDate * lastPollDate; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (assign,nonatomic) double refreshInterval; 
@required
-(NSDate *)lastPollDate;
-(void)setLastPollDate:(id)arg1;
-(BOOL)enabled;
-(void)setDelegate:(id)arg1;
-(id<FBPollingDelegate>)delegate;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1;
-(NSDate *)fireDate;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1;

@end

