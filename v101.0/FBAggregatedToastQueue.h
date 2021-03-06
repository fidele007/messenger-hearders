/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastQueuing.h>

@protocol FBToastQueuing;
@class NSMutableArray, NSArray, NSString;

@interface FBAggregatedToastQueue : NSObject <FBToastQueuing> {

	id<FBToastQueuing> _writableQueue;
	NSMutableArray* _queues;

}

@property (nonatomic,copy) NSArray * queues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)queueToast:(id)arg1 ;
-(void)removeToast:(id)arg1 ;
-(id)_peekAndDequeue:(BOOL)arg1 ;
-(id)initWithWritableQueue:(id)arg1 andReadableQueues:(id)arg2 ;
-(NSArray *)queues;
-(void)setQueues:(NSArray *)arg1 ;
-(unsigned long long)queueCount;
-(void)addQueue:(id)arg1 ;
-(void)removeQueue:(id)arg1 ;
-(id)peek;
-(BOOL)isEmpty;
-(id)dequeue;
@end

