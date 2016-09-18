/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBListViewControllerConfiguring.h>

@protocol FBLoadingView;
@class UIColor, NSString, UIView, FBListViewControllerAnalyticsConfiguration, NSArray, FBScenePathContext;

@interface FBListViewControllerConfiguration : FBValueObject <FBListViewControllerConfiguring> {

	BOOL _hasNavBar;
	BOOL _hasBackArrowInNavBar;
	BOOL _hasChatBarButtonInNavBar;
	BOOL _hasTabBar;
	BOOL _hasPullToRefresh;
	BOOL _hideSearchInNavBar;
	BOOL _hideNavBarRightButton;
	BOOL _hasViewStateManager;
	BOOL _shouldCancelTouchesWhenScrolling;
	BOOL _showsVerticalScrollIndicator;
	BOOL _statusBarScrollToTopEnabled;
	BOOL _hasInitialLoadingView;
	BOOL _shouldCombineChangesets;
	BOOL _shouldTransitionViewStateManager;
	BOOL _shouldSupportOrientationChanges;
	BOOL _shouldShowCancelButton;
	BOOL _alwaysBounceVertical;
	BOOL _showsHorizontalScrollIndicator;
	BOOL _generateComponentsInBackground;
	UIColor* _backgroundColor;
	double _bottomScrollBuffer;
	NSString* _dataIdentifier;
	unsigned long long _dataSourceUpdatesCountToEnableScrollPositionRestoring;
	long long _cardedContentLayout;
	NSString* _noContentTextString;
	UIView* _noContentView;
	double _topScrollBuffer;
	NSString* _viewControllerTitle;
	UIView*<FBLoadingView> _initialLoadingView;
	NSArray* _fetchStatusListeners;
	/*^block*/id _workingRangeControllerPauseCompletionBlock;
	FBScenePathContext* _scenePathContext;
	double _contentWidth;
	FBListViewControllerAnalyticsConfiguration* _analyticsConfiguration;

}

@property (nonatomic,copy) UIColor * backgroundColor;                                                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * dataIdentifier;                                                               //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPullToRefresh;                                                                 //@synthesize hasPullToRefresh=_hasPullToRefresh - In the implementation block
@property (assign,nonatomic) BOOL hasInitialLoadingView;                                                            //@synthesize hasInitialLoadingView=_hasInitialLoadingView - In the implementation block
@property (nonatomic,retain) UIView*<FBLoadingView> initialLoadingView;                                             //@synthesize initialLoadingView=_initialLoadingView - In the implementation block
@property (assign,nonatomic) BOOL hasViewStateManager;                                                              //@synthesize hasViewStateManager=_hasViewStateManager - In the implementation block
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator;                                                     //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasNavBar;                                                                        //@synthesize hasNavBar=_hasNavBar - In the implementation block
@property (assign,nonatomic) BOOL hasBackArrowInNavBar;                                                             //@synthesize hasBackArrowInNavBar=_hasBackArrowInNavBar - In the implementation block
@property (assign,nonatomic) BOOL hideSearchInNavBar;                                                               //@synthesize hideSearchInNavBar=_hideSearchInNavBar - In the implementation block
@property (assign,nonatomic) BOOL hasChatBarButtonInNavBar;                                                         //@synthesize hasChatBarButtonInNavBar=_hasChatBarButtonInNavBar - In the implementation block
@property (assign,nonatomic) BOOL hideNavBarRightButton;                                                            //@synthesize hideNavBarRightButton=_hideNavBarRightButton - In the implementation block
@property (assign,nonatomic) BOOL hasTabBar;                                                                        //@synthesize hasTabBar=_hasTabBar - In the implementation block
@property (assign,nonatomic) long long cardedContentLayout;                                                         //@synthesize cardedContentLayout=_cardedContentLayout - In the implementation block
@property (assign,nonatomic) BOOL statusBarScrollToTopEnabled;                                                      //@synthesize statusBarScrollToTopEnabled=_statusBarScrollToTopEnabled - In the implementation block
@property (nonatomic,copy) NSString * noContentTextString;                                                          //@synthesize noContentTextString=_noContentTextString - In the implementation block
@property (nonatomic,retain) UIView * noContentView;                                                                //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,copy) NSString * viewControllerTitle;                                                          //@synthesize viewControllerTitle=_viewControllerTitle - In the implementation block
@property (assign,nonatomic) double bottomScrollBuffer;                                                             //@synthesize bottomScrollBuffer=_bottomScrollBuffer - In the implementation block
@property (assign,nonatomic) double topScrollBuffer;                                                                //@synthesize topScrollBuffer=_topScrollBuffer - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelTouchesWhenScrolling;                                                 //@synthesize shouldCancelTouchesWhenScrolling=_shouldCancelTouchesWhenScrolling - In the implementation block
@property (assign,nonatomic) unsigned long long dataSourceUpdatesCountToEnableScrollPositionRestoring;              //@synthesize dataSourceUpdatesCountToEnableScrollPositionRestoring=_dataSourceUpdatesCountToEnableScrollPositionRestoring - In the implementation block
@property (nonatomic,retain) FBListViewControllerAnalyticsConfiguration * analyticsConfiguration;                   //@synthesize analyticsConfiguration=_analyticsConfiguration - In the implementation block
@property (assign,nonatomic) double contentWidth;                                                                   //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldCombineChangesets;                                                          //@synthesize shouldCombineChangesets=_shouldCombineChangesets - In the implementation block
@property (nonatomic,copy) NSArray * fetchStatusListeners;                                                          //@synthesize fetchStatusListeners=_fetchStatusListeners - In the implementation block
@property (nonatomic,copy) id workingRangeControllerPauseCompletionBlock;                                           //@synthesize workingRangeControllerPauseCompletionBlock=_workingRangeControllerPauseCompletionBlock - In the implementation block
@property (nonatomic,retain) FBScenePathContext * scenePathContext;                                                 //@synthesize scenePathContext=_scenePathContext - In the implementation block
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager;                                                 //@synthesize shouldTransitionViewStateManager=_shouldTransitionViewStateManager - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportOrientationChanges;                                                  //@synthesize shouldSupportOrientationChanges=_shouldSupportOrientationChanges - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCancelButton;                                                           //@synthesize shouldShowCancelButton=_shouldShowCancelButton - In the implementation block
@property (assign,nonatomic) BOOL alwaysBounceVertical;                                                             //@synthesize alwaysBounceVertical=_alwaysBounceVertical - In the implementation block
@property (assign,nonatomic) BOOL showsHorizontalScrollIndicator;                                                   //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
@property (assign,nonatomic) BOOL generateComponentsInBackground;                                                   //@synthesize generateComponentsInBackground=_generateComponentsInBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAnalyticsConfiguration:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
+(id)newWithAnalyticsConfiguration:(id)arg1 ;
-(BOOL)hasPullToRefresh;
-(void)setHasPullToRefresh:(BOOL)arg1 ;
-(BOOL)hasInitialLoadingView;
-(void)setHasInitialLoadingView:(BOOL)arg1 ;
-(UIView*<FBLoadingView>)initialLoadingView;
-(void)setInitialLoadingView:(UIView*<FBLoadingView>)arg1 ;
-(BOOL)hasViewStateManager;
-(void)setHasViewStateManager:(BOOL)arg1 ;
-(BOOL)shouldTransitionViewStateManager;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1 ;
-(BOOL)hasNavBar;
-(void)setHasNavBar:(BOOL)arg1 ;
-(BOOL)hasBackArrowInNavBar;
-(void)setHasBackArrowInNavBar:(BOOL)arg1 ;
-(BOOL)hideSearchInNavBar;
-(void)setHideSearchInNavBar:(BOOL)arg1 ;
-(BOOL)hasChatBarButtonInNavBar;
-(void)setHasChatBarButtonInNavBar:(BOOL)arg1 ;
-(BOOL)hideNavBarRightButton;
-(void)setHideNavBarRightButton:(BOOL)arg1 ;
-(BOOL)hasTabBar;
-(void)setHasTabBar:(BOOL)arg1 ;
-(long long)cardedContentLayout;
-(void)setCardedContentLayout:(long long)arg1 ;
-(BOOL)statusBarScrollToTopEnabled;
-(void)setStatusBarScrollToTopEnabled:(BOOL)arg1 ;
-(NSString *)noContentTextString;
-(void)setNoContentTextString:(NSString *)arg1 ;
-(NSString *)viewControllerTitle;
-(void)setViewControllerTitle:(NSString *)arg1 ;
-(double)bottomScrollBuffer;
-(void)setBottomScrollBuffer:(double)arg1 ;
-(double)topScrollBuffer;
-(void)setTopScrollBuffer:(double)arg1 ;
-(BOOL)shouldCancelTouchesWhenScrolling;
-(void)setShouldCancelTouchesWhenScrolling:(BOOL)arg1 ;
-(unsigned long long)dataSourceUpdatesCountToEnableScrollPositionRestoring;
-(void)setDataSourceUpdatesCountToEnableScrollPositionRestoring:(unsigned long long)arg1 ;
-(FBListViewControllerAnalyticsConfiguration *)analyticsConfiguration;
-(void)setAnalyticsConfiguration:(FBListViewControllerAnalyticsConfiguration *)arg1 ;
-(NSArray *)fetchStatusListeners;
-(void)setFetchStatusListeners:(NSArray *)arg1 ;
-(BOOL)shouldCombineChangesets;
-(void)setShouldCombineChangesets:(BOOL)arg1 ;
-(id)workingRangeControllerPauseCompletionBlock;
-(void)setWorkingRangeControllerPauseCompletionBlock:(id)arg1 ;
-(FBScenePathContext *)scenePathContext;
-(void)setScenePathContext:(FBScenePathContext *)arg1 ;
-(BOOL)shouldSupportOrientationChanges;
-(void)setShouldSupportOrientationChanges:(BOOL)arg1 ;
-(BOOL)generateComponentsInBackground;
-(void)setGenerateComponentsInBackground:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(BOOL)alwaysBounceVertical;
-(void)setAlwaysBounceVertical:(BOOL)arg1 ;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(void)setNoContentView:(UIView *)arg1 ;
-(UIView *)noContentView;
-(double)contentWidth;
-(NSString *)dataIdentifier;
-(void)setDataIdentifier:(NSString *)arg1 ;
-(void)setContentWidth:(double)arg1 ;
-(BOOL)shouldShowCancelButton;
-(void)setShouldShowCancelButton:(BOOL)arg1 ;
@end

