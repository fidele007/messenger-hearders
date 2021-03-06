/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MNThreadListViewModelViewState, MNThreadCellLayout, UIColor;

@interface MNInboxViewModel : FBValueObject <NSCopying> {

	BOOL _fetchMoreThreadsOnScroll;
	NSArray* _inboxRows;
	MNThreadListViewModelViewState* _threadListViewState;
	MNThreadCellLayout* _defaultThreadCellLayout;
	UIColor* _backgroundColor;
	unsigned long long _timestampOfOldestVisibleThread;

}

@property (nonatomic,copy,readonly) NSArray * inboxRows;                                               //@synthesize inboxRows=_inboxRows - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListViewModelViewState * threadListViewState;              //@synthesize threadListViewState=_threadListViewState - In the implementation block
@property (nonatomic,copy,readonly) MNThreadCellLayout * defaultThreadCellLayout;                      //@synthesize defaultThreadCellLayout=_defaultThreadCellLayout - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL fetchMoreThreadsOnScroll;                                          //@synthesize fetchMoreThreadsOnScroll=_fetchMoreThreadsOnScroll - In the implementation block
@property (nonatomic,readonly) unsigned long long timestampOfOldestVisibleThread;                      //@synthesize timestampOfOldestVisibleThread=_timestampOfOldestVisibleThread - In the implementation block
-(MNThreadListViewModelViewState *)threadListViewState;
-(NSArray *)inboxRows;
-(BOOL)fetchMoreThreadsOnScroll;
-(MNThreadCellLayout *)defaultThreadCellLayout;
-(unsigned long long)timestampOfOldestVisibleThread;
-(id)initWithInboxRows:(id)arg1 threadListViewState:(id)arg2 defaultThreadCellLayout:(id)arg3 backgroundColor:(id)arg4 fetchMoreThreadsOnScroll:(BOOL)arg5 timestampOfOldestVisibleThread:(unsigned long long)arg6 ;
-(UIColor *)backgroundColor;
@end

