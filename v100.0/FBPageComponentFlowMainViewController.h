/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Messenger/FBPageComponentFlowCalendarCollectionViewDataSourceDelegate.h>
#import <Messenger/FBPageComponentFlowDatePickerDelegate.h>
#import <Messenger/FBPageComponentFlowElementsActionResponder.h>
#import <Messenger/FBPageComponentFlowScreenActionStateManagerDelegate.h>
#import <Messenger/FBPageComponentFlowNavbarControllerDelegate.h>

@protocol FBQueriedPagesPlatformScreenUnionFieldsProtocol, FBPageComponentFlowNavigationDelegate;
@class FBUserSession, FBTransientViewStateManager, UICollectionView, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBPageComponentFlowComponentContext, NSString, FBPageComponentFlowMainView, FBPageComponentFlowFormFieldsManager, FBPageComponentFlowFunnelLogger, FBPageComponentFlowElementIndexManager, FBPageComponentFlowFormFieldUpdateListenerAnnouncer, FBPageComponentFlowScreenActionStateManager, UIColor, FBPageComponentFlowNavbarController, FBPageComponentFlowEventsHandler, FBPageComponentFlowActionHandler;

@interface FBPageComponentFlowMainViewController : UIViewController <FBComponentCollectionViewDataSourceCellConfigProvider, FBPageComponentFlowCalendarCollectionViewDataSourceDelegate, FBPageComponentFlowDatePickerDelegate, FBPageComponentFlowElementsActionResponder, FBPageComponentFlowScreenActionStateManagerDelegate, FBPageComponentFlowNavbarControllerDelegate> {

	FBUserSession* _session;
	FBTransientViewStateManager* _transientViewStateManager;
	UICollectionView* _collectionView;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBPageComponentFlowComponentContext* _componentContext;
	NSString* _screenId;
	BOOL _isViewReady;
	BOOL _isPresentedModally;
	BOOL _hasAppeared;
	id<FBQueriedPagesPlatformScreenUnionFieldsProtocol> _data;
	FBPageComponentFlowMainView* _mainView;
	id<FBPageComponentFlowNavigationDelegate> _navigationDelegate;
	FBPageComponentFlowFormFieldsManager* _formFieldsManager;
	FBPageComponentFlowFunnelLogger* _funnelLogger;
	FBPageComponentFlowElementIndexManager* _elementIndexManager;
	FBPageComponentFlowFormFieldUpdateListenerAnnouncer* _announcer;
	FBPageComponentFlowScreenActionStateManager* _screenActionStateManager;
	UIColor* _gapColor;
	FBPageComponentFlowNavbarController* _navbarController;
	FBPageComponentFlowEventsHandler* _eventsHandler;
	FBPageComponentFlowActionHandler* _actionHandler;
	NSString* _analyticsUUID;
	NSString* _anchorId;

}

@property (nonatomic,copy,readonly) NSString * analyticsUUID;              //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchorId;                   //@synthesize anchorId=_anchorId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsUUID;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)_didTapBack;
-(BOOL)fb_hidesTabBar;
-(BOOL)fb_showNavBarSearchField;
-(NSString *)anchorId;
-(void)openURL:(id)arg1 screenElementId:(id)arg2 ;
-(void)configureWithScreenData:(id)arg1 ;
-(void)configureWithPartialScreenData:(id)arg1 ;
-(void)dataFetchFailed:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 isPresentedModally:(BOOL)arg2 analyticsUUID:(id)arg3 navigationDelegate:(id)arg4 actionHandler:(id)arg5 funnelLogger:(id)arg6 ;
-(void)didSelectDate:(id)arg1 fromDatePickerFormField:(id)arg2 ;
-(void)didTapOnScreenElement:(id)arg1 ;
-(void)didUpdateShoppingCartFormFieldWithModel:(id)arg1 isItemDeleted:(BOOL)arg2 ;
-(void)updateScreenActionStatus:(BOOL)arg1 ;
-(void)didTapOnScreenElementWithId:(id)arg1 destinationScreenId:(id)arg2 ;
-(void)didTapScreenAction:(id)arg1 ;
-(void)_insertScreenElement:(id)arg1 withChangeSetItems:(Items*)arg2 withCurrentIndex:(long long*)arg3 ;
-(void)_insertGapToElement:(id)arg1 withIndex:(int)arg2 inElementArray:(id)arg3 withChangeSetItems:(Items*)arg4 withCurrentIndex:(long long*)arg5 ;
-(void)_logShoppingCartUpdateWithModel:(id)arg1 ;
-(void)_updateComponentAtIndex:(long long)arg1 withModel:(id)arg2 forElementwithID:(id)arg3 ;
-(void)_updateCalendarComponentFromDate:(id)arg1 usingCalendar:(id)arg2 withSelectedDate:(id)arg3 isForward:(BOOL)arg4 fromTimeSelectionFormField:(id)arg5 ;
-(void)_handleScreenElement:(id)arg1 withChangeSetItems:(Items*)arg2 withCurrentIndex:(long long*)arg3 forContainerElementId:(id)arg4 ;
-(void)_insertDummyElementWithChangeSetItems:(Items*)arg1 withCurrentIndex:(long long*)arg2 forContainerElementId:(id)arg3 ;
-(void)_insertDataModel:(id)arg1 forElementWithID:(id)arg2 forContainerElementWithID:(id)arg3 ;
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(void)goToPreviousTimeIntervalFromDate:(id)arg1 usingCalendar:(id)arg2 withCurrentSelectedDate:(id)arg3 fromTimeSelectionFormField:(id)arg4 ;
-(void)goToNextTimeIntervalFromDate:(id)arg1 usingCalendar:(id)arg2 withCurrentSelectedDate:(id)arg3 fromTimeSelectionFormField:(id)arg4 ;
-(void)didSelectDate:(id)arg1 fromTimeSelectionFormField:(id)arg2 ;
-(BOOL)fb_hideNavBarRightButton;
-(SEL)fb_actionForBackArrowButton;
-(void)didTapCancelFlowInNavbar;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

