/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkingRangeSnapshotterDelegate;
@interface FBWorkingRangeSnapshotter : NSObject {

	double _throttleDelay;
	BOOL _isPaused;
	double _lastSnapshotTimestamp;
	id<FBWorkingRangeSnapshotterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWorkingRangeSnapshotterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithThrottleDelay:(double)arg1 ;
-(void)forceSnapshot;
-(void)attemptSnapshot;
-(void)setDelegate:(id<FBWorkingRangeSnapshotterDelegate>)arg1 ;
-(id<FBWorkingRangeSnapshotterDelegate>)delegate;
-(void)resume;
-(void)pause;
@end

