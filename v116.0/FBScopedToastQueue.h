/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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

