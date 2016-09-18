/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastQueuing.h>

@protocol FBToastQueuing;
@class NSString;

@interface FBFilteredToastQueue : NSObject <FBToastQueuing> {

	/*^block*/id _predicate;
	id<FBToastQueuing> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToastQueue:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)queueToast:(id)arg1 ;
-(void)removeToast:(id)arg1 ;
-(id)peek;
-(BOOL)isEmpty;
-(id)dequeue;
@end

