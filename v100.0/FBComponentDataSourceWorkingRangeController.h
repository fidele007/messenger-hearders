/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComponentCollectionViewDataSourceEventListener.h>
#import <Messenger/FBComponentScrollEventListener.h>
#import <Messenger/FBComponentTableViewDataSourceEventListener.h>
#import <Messenger/FBWorkingRangeCircularBufferReaderDelegate.h>
#import <Messenger/FBWorkingRangeSnapshotterDelegate.h>

@protocol OS_dispatch_queue;
@class FBComponentCollectionViewDataSource, FBComponentTableViewDataSource, FBComponentDataSourceItemViewStateRecorder, NSObject, FBWorkingRangeSnapshotter, FBComponentNotifyingWorkingRangeController, FBWorkingRangeCircularBuffer, FBWorkingRangeCircularBufferReader, NSArray, NSString;

@interface FBComponentDataSourceWorkingRangeController : NSObject <FBComponentCollectionViewDataSourceEventListener, FBComponentScrollEventListener, FBComponentTableViewDataSourceEventListener, FBWorkingRangeCircularBufferReaderDelegate, FBWorkingRangeSnapshotterDelegate> {

	FBComponentCollectionViewDataSource* _componentCollectionViewDataSource;
	FBComponentTableViewDataSource* _componentTableViewDataSource;
	FBComponentDataSourceItemViewStateRecorder* _componentDataSourceItemViewStateRecorder;
	NSObject*<OS_dispatch_queue> _processingQueue;
	FBWorkingRangeSnapshotter* _snapshotter;
	FBComponentNotifyingWorkingRangeController* _standardController;
	FBWorkingRangeCircularBuffer* _snapshotCircularBuffer;
	FBWorkingRangeCircularBufferReader* _snapshotCircularBufferReader;
	NSArray* _itemViewStates;
	BOOL _isPaused;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSourceWillBeginUpdates:(id)arg1 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(void)scrollViewDidScroll;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)commonInit:(BOOL)arg1 ;
-(void)_finishedRecordingItemViewStates:(id)arg1 ;
-(void)circularBufferReader:(id)arg1 didReadObject:(id)arg2 ;
-(void)workingRangeSnapshotterDidTrigger:(id)arg1 ;
-(id)initWithComponentCollectionViewDataSource:(id)arg1 itemViewStateIdentifierFactory:(/*function pointer*/void*)arg2 session:(id)arg3 ;
-(id)initWithComponentTableViewDataSource:(id)arg1 itemViewStateIdentifierFactory:(/*function pointer*/void*)arg2 session:(id)arg3 ;
-(void)pauseWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)scrollViewDidStopScrolling;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)resume;
@end

