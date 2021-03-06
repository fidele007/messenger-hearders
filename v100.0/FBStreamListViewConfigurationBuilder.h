/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewLayout, UIColor, NSString;

@interface FBStreamListViewConfigurationBuilder : NSObject {

	BOOL _useTableView;
	BOOL _hasPullToRefresh;
	BOOL _shouldCancelTouchesWhenScrolling;
	UICollectionViewLayout* _collectionViewLayout;
	UIColor* _scrollViewBackgroundColor;
	UIColor* _pullToRefreshBackgroundColor;
	double _bottomScrollBuffer;
	double _topScrollBuffer;
	NSString* _analyticsModule;
	NSString* _scrollViewAccessibilityIdentifier;

}
+(id)aStreamListViewConfiguration;
+(id)aStreamListViewConfigurationFromExistingStreamListViewConfiguration:(id)arg1 ;
-(id)withScrollViewBackgroundColor:(id)arg1 ;
-(id)withShouldCancelTouchesWhenScrolling:(BOOL)arg1 ;
-(id)withCollectionViewLayout:(id)arg1 ;
-(id)withUseTableView:(BOOL)arg1 ;
-(id)withHasPullToRefresh:(BOOL)arg1 ;
-(id)withPullToRefreshBackgroundColor:(id)arg1 ;
-(id)withBottomScrollBuffer:(double)arg1 ;
-(id)withTopScrollBuffer:(double)arg1 ;
-(id)withAnalyticsModule:(id)arg1 ;
-(id)withScrollViewAccessibilityIdentifier:(id)arg1 ;
-(id)build;
@end

