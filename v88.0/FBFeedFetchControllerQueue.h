/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMemFeedFetchControllerDelegate.h>

@protocol FBMemFeedFetchControllerDelegate;
@class _FBSwallowingProxy, NSString;

@interface FBFeedFetchControllerQueue : NSObject <FBMemFeedFetchControllerDelegate> {

	queue<NSInvocation *, std::__1::deque<NSInvocation *, std::__1::allocator<NSInvocation *> > >* _queue;
	_FBSwallowingProxy* _proxy;
	BOOL _isShimmeringStoriesBlockingUpdates;
	BOOL _isDataSourceActivated;
	id<FBMemFeedFetchControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemFeedFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isShimmeringStoriesBlockingUpdates;                           //@synthesize isShimmeringStoriesBlockingUpdates=_isShimmeringStoriesBlockingUpdates - In the implementation block
@property (assign,nonatomic) BOOL isDataSourceActivated;                                        //@synthesize isDataSourceActivated=_isDataSourceActivated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_flushQueueIfNeeded;
-(void)feedFetchControllerWillChangeContent:(id)arg1 ;
-(void)_enqueueInvocation;
-(void)feedFetchController:(id)arg1 didChangeEdge:(id)arg2 fromEdge:(id)arg3 atIndex:(unsigned long long)arg4 forChangeType:(unsigned long long)arg5 newIndex:(unsigned long long)arg6 ;
-(void)feedFetchControllerDidChangeContent:(id)arg1 source:(id)arg2 ;
-(void)feedFetchControllerDidFinishFetching:(id)arg1 ;
-(BOOL)isQueueingEnabled;
-(void)_dequeueAll;
-(void)setIsShimmeringStoriesBlockingUpdates:(BOOL)arg1 ;
-(void)setIsDataSourceActivated:(BOOL)arg1 ;
-(BOOL)isShimmeringStoriesBlockingUpdates;
-(BOOL)isDataSourceActivated;
-(void)setDelegate:(id<FBMemFeedFetchControllerDelegate>)arg1 ;
-(id)init;
-(id<FBMemFeedFetchControllerDelegate>)delegate;
-(id)_target;
@end
