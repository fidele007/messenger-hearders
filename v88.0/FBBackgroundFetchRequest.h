/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBackgroundFetchRequestDelegate;
@class NSArray, NSDate, NSTimer, NSDictionary;

@interface FBBackgroundFetchRequest : NSObject {

	/*^block*/id _completionHandler;
	NSArray* _registeredObservers;
	double _timeout;
	BOOL _finished;
	unsigned long long _finalResult;
	unsigned long long _numPendingCallbacks;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimer* _timeoutTimer;
	id<FBBackgroundFetchRequestDelegate> _delegate;
	NSDictionary* _notification;

}

@property (nonatomic,copy) NSDictionary * notification;                        //@synthesize notification=_notification - In the implementation block
@property (__weak) id<FBBackgroundFetchRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observer:(id)arg1 completedWithResult:(unsigned long long)arg2 ;
-(id)initWithRegisteredObservers:(id)arg1 notification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)observerCount;
-(void)setDelegate:(id<FBBackgroundFetchRequestDelegate>)arg1 ;
-(id<FBBackgroundFetchRequestDelegate>)delegate;
-(double)duration;
-(NSDictionary *)notification;
-(void)start;
-(void)_timeOut;
-(unsigned long long)result;
-(void)setNotification:(NSDictionary *)arg1 ;
-(void)_finish;
@end

