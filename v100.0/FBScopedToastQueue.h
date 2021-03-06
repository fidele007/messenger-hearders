/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastQueuing.h>

@class FBAggregatedToastQueue, FBToastQueue, NSString;

@interface FBScopedToastQueue : NSObject <FBToastQueuing> {

	FBAggregatedToastQueue* _aggregatedQueue;
	FBToastQueue* _globalToastQueue;
	FBToastQueue* _localToastQueue;

}

@property (nonatomic,retain) FBToastQueue * globalToastQueue;              //@synthesize globalToastQueue=_globalToastQueue - In the implementation block
@property (nonatomic,retain) FBToastQueue * localToastQueue;               //@synthesize localToastQueue=_localToastQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBToastQueue *)globalToastQueue;
-(void)setGlobalToastQueue:(FBToastQueue *)arg1 ;
-(void)queueToast:(id)arg1 ;
-(void)removeToast:(id)arg1 ;
-(FBToastQueue *)localToastQueue;
-(id)initWithLocalToastQueue:(id)arg1 globalToastQueue:(id)arg2 ;
-(void)setLocalToastQueue:(FBToastQueue *)arg1 ;
-(id)peek;
-(id)init;
-(BOOL)isEmpty;
-(id)dequeue;
@end

