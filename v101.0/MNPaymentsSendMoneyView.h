/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate, UILayoutSupport, FBPaymentsViewModelConfigurable;
@class UIScrollView, UIView, FBPaymentsCheckoutExplanationInfoView, MNPaymentsPayActionFooterView, MNPaymentsTwoActionTabView, MNPaymentsThemeCollectionView, MNPaymentsThemeScrollController, NSString;

@interface MNPaymentsSendMoneyView : UIView <FBPaymentsExpandableItem> {

	UIScrollView* _contentView;
	BOOL _isLoading;
	BOOL _isLandscapeMode;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<UILayoutSupport> _topLayoutGuide;
	long long _amountEditMode;
	UIView*<FBPaymentsViewModelConfigurable> _headerView;
	UIView* _currencyAndAmountView;
	UIView* _paymentMethodView;
	FBPaymentsCheckoutExplanationInfoView* _explanationInfoView;
	MNPaymentsPayActionFooterView* _payActionFooterView;
	UIView* _composerView;
	MNPaymentsTwoActionTabView* _payRequestView;
	MNPaymentsThemeCollectionView* _themeView;
	MNPaymentsThemeScrollController* _themeScrollController;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;                                                            //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                                          //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                                                                //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL isLandscapeMode;                                                                          //@synthesize isLandscapeMode=_isLandscapeMode - In the implementation block
@property (assign,nonatomic) long long amountEditMode;                                                                      //@synthesize amountEditMode=_amountEditMode - In the implementation block
@property (nonatomic,readonly) UIView*<FBPaymentsViewModelConfigurable> headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * currencyAndAmountView;                                                              //@synthesize currencyAndAmountView=_currencyAndAmountView - In the implementation block
@property (nonatomic,readonly) UIView * paymentMethodView;                                                                  //@synthesize paymentMethodView=_paymentMethodView - In the implementation block
@property (nonatomic,readonly) FBPaymentsCheckoutExplanationInfoView * explanationInfoView;                                 //@synthesize explanationInfoView=_explanationInfoView - In the implementation block
@property (nonatomic,readonly) MNPaymentsPayActionFooterView * payActionFooterView;                                         //@synthesize payActionFooterView=_payActionFooterView - In the implementation block
@property (nonatomic,readonly) UIView * composerView;                                                                       //@synthesize composerView=_composerView - In the implementation block
@property (nonatomic,readonly) MNPaymentsTwoActionTabView * payRequestView;                                                 //@synthesize payRequestView=_payRequestView - In the implementation block
@property (nonatomic,readonly) MNPaymentsThemeCollectionView * themeView;                                                   //@synthesize themeView=_themeView - In the implementation block
@property (nonatomic,readonly) MNPaymentsThemeScrollController * themeScrollController;                                     //@synthesize themeScrollController=_themeScrollController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(UIView *)composerView;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(MNPaymentsThemeCollectionView *)themeView;
-(void)_updateViewsLayout;
-(CGRect)_getContentRect;
-(id)_viewsLayout;
-(double)_getVisibleKeyboardHeight;
-(BOOL)isLandscapeMode;
-(void)setIsLandscapeMode:(BOOL)arg1 ;
-(void)setAmountEditMode:(long long)arg1 ;
-(UIView *)currencyAndAmountView;
-(UIView *)paymentMethodView;
-(FBPaymentsCheckoutExplanationInfoView *)explanationInfoView;
-(MNPaymentsPayActionFooterView *)payActionFooterView;
-(MNPaymentsTwoActionTabView *)payRequestView;
-(long long)amountEditMode;
-(MNPaymentsThemeScrollController *)themeScrollController;
-(id)initWithHeaderView:(id)arg1 currencyAndAmountView:(id)arg2 paymentMethodView:(id)arg3 explanationInfoView:(id)arg4 payActionFooterView:(id)arg5 composerView:(id)arg6 payRequestView:(id)arg7 themeView:(id)arg8 ;
-(void)setKeyboardFrame:(CGRect)arg1 shouldLayout:(BOOL)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<UILayoutSupport>)topLayoutGuide;
-(UIView*<FBPaymentsViewModelConfigurable>)headerView;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(CGRect)keyboardFrame;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end
