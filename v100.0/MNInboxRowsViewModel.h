/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface MNInboxRowsViewModel : FBValueObject <NSCopying> {

	BOOL _fetchMoreThreadsOnScroll;
	BOOL _shouldSubscribeToActiveNowWhenPossible;
	BOOL _didReachEndOfRecentThreads;
	BOOL _showSeeAllTopPill;
	NSArray* _inboxRows;
	unsigned long long _timestampOfOldestVisibleThread;
	UIColor* _topBackgroundColor;
	UIColor* _bottomBackgroundColor;

}

@property (nonatomic,copy,readonly) NSArray * inboxRows;                                       //@synthesize inboxRows=_inboxRows - In the implementation block
@property (nonatomic,readonly) BOOL fetchMoreThreadsOnScroll;                                  //@synthesize fetchMoreThreadsOnScroll=_fetchMoreThreadsOnScroll - In the implementation block
@property (nonatomic,readonly) BOOL shouldSubscribeToActiveNowWhenPossible;                    //@synthesize shouldSubscribeToActiveNowWhenPossible=_shouldSubscribeToActiveNowWhenPossible - In the implementation block
@property (nonatomic,readonly) unsigned long long timestampOfOldestVisibleThread;              //@synthesize timestampOfOldestVisibleThread=_timestampOfOldestVisibleThread - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfRecentThreads;                                //@synthesize didReachEndOfRecentThreads=_didReachEndOfRecentThreads - In the implementation block
@property (nonatomic,copy,readonly) UIColor * topBackgroundColor;                              //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * bottomBackgroundColor;                           //@synthesize bottomBackgroundColor=_bottomBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL showSeeAllTopPill;                                         //@synthesize showSeeAllTopPill=_showSeeAllTopPill - In the implementation block
-(NSArray *)inboxRows;
-(BOOL)shouldSubscribeToActiveNowWhenPossible;
-(UIColor *)bottomBackgroundColor;
-(BOOL)fetchMoreThreadsOnScroll;
-(id)initWithInboxRows:(id)arg1 fetchMoreThreadsOnScroll:(BOOL)arg2 shouldSubscribeToActiveNowWhenPossible:(BOOL)arg3 timestampOfOldestVisibleThread:(unsigned long long)arg4 didReachEndOfRecentThreads:(BOOL)arg5 topBackgroundColor:(id)arg6 bottomBackgroundColor:(id)arg7 showSeeAllTopPill:(BOOL)arg8 ;
-(unsigned long long)timestampOfOldestVisibleThread;
-(BOOL)didReachEndOfRecentThreads;
-(BOOL)showSeeAllTopPill;
-(UIColor *)topBackgroundColor;
@end

