/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, FBWorkingRangeCircularBufferReaderDelegate;
@class FBWorkingRangeCircularBuffer, NSObject;

@interface FBWorkingRangeCircularBufferReader : NSObject {

	FBWorkingRangeCircularBuffer* _circularBuffer;
	/*^block*/id _objectReader;
	BOOL _paused;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBWorkingRangeCircularBufferReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWorkingRangeCircularBufferReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCircularBuffer:(id)arg1 withObjectReader:(/*^block*/id)arg2 ;
-(void)_readObjects;
-(void)setDelegate:(id<FBWorkingRangeCircularBufferReaderDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWorkingRangeCircularBufferReaderDelegate>)delegate;
-(void)resume;
-(void)pause;
@end

