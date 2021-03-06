/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPullToRefreshViewConfiguration, UICollectionViewLayout, UIColor, NSString;

@interface FBStreamListViewConfiguration : FBValueObject <NSCopying> {

	BOOL _useTableView;
	BOOL _shouldCancelTouchesWhenScrolling;
	FBPullToRefreshViewConfiguration* _pullToRefreshViewConfiguration;
	UICollectionViewLayout* _collectionViewLayout;
	UIColor* _scrollViewBackgroundColor;
	UIColor* _pullToRefreshBackgroundColor;
	double _bottomScrollBuffer;
	double _topScrollBuffer;
	NSString* _analyticsModule;
	NSString* _scrollViewAccessibilityIdentifier;

}

@property (nonatomic,readonly) BOOL useTableView;                                                              //@synthesize useTableView=_useTableView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshViewConfiguration * pullToRefreshViewConfiguration;              //@synthesize pullToRefreshViewConfiguration=_pullToRefreshViewConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelTouchesWhenScrolling;                                          //@synthesize shouldCancelTouchesWhenScrolling=_shouldCancelTouchesWhenScrolling - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout;                                  //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,copy,readonly) UIColor * scrollViewBackgroundColor;                                       //@synthesize scrollViewBackgroundColor=_scrollViewBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * pullToRefreshBackgroundColor;                                    //@synthesize pullToRefreshBackgroundColor=_pullToRefreshBackgroundColor - In the implementation block
@property (nonatomic,readonly) double bottomScrollBuffer;                                                      //@synthesize bottomScrollBuffer=_bottomScrollBuffer - In the implementation block
@property (nonatomic,readonly) double topScrollBuffer;                                                         //@synthesize topScrollBuffer=_topScrollBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * scrollViewAccessibilityIdentifier;                              //@synthesize scrollViewAccessibilityIdentifier=_scrollViewAccessibilityIdentifier - In the implementation block
-(FBPullToRefreshViewConfiguration *)pullToRefreshViewConfiguration;
-(BOOL)shouldCancelTouchesWhenScrolling;
-(double)bottomScrollBuffer;
-(double)topScrollBuffer;
-(UIColor *)scrollViewBackgroundColor;
-(BOOL)useTableView;
-(NSString *)scrollViewAccessibilityIdentifier;
-(UIColor *)pullToRefreshBackgroundColor;
-(id)initWithUseTableView:(BOOL)arg1 pullToRefreshViewConfiguration:(id)arg2 shouldCancelTouchesWhenScrolling:(BOOL)arg3 collectionViewLayout:(id)arg4 scrollViewBackgroundColor:(id)arg5 pullToRefreshBackgroundColor:(id)arg6 bottomScrollBuffer:(double)arg7 topScrollBuffer:(double)arg8 analyticsModule:(id)arg9 scrollViewAccessibilityIdentifier:(id)arg10 ;
-(NSString *)analyticsModule;
-(UICollectionViewLayout *)collectionViewLayout;
@end

