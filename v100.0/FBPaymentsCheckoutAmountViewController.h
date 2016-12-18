/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate.h>
#import <Messenger/FBPaymentsPriceListControlling.h>

@protocol MNSoundPluginService, FBPaymentsPriceListControllingDelegate;
@class MNPaymentsPeerToPeerAmountInputHandler, MNPaymentsPeerToPeerCurrencyAndAmountView, UILongPressGestureRecognizer, FBPaymentsCurrencyQuantity, NSString;

@interface FBPaymentsCheckoutAmountViewController : UIViewController <MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate, FBPaymentsPriceListControlling> {

	MNPaymentsPeerToPeerAmountInputHandler* _amountInputHandler;
	long long _colorPolicy;
	MNPaymentsPeerToPeerCurrencyAndAmountView* _currencyAndAmountView;
	id<MNSoundPluginService> _soundService;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	FBPaymentsCurrencyQuantity* _initialAmount;
	BOOL _canEdit;
	id<FBPaymentsPriceListControllingDelegate> _delegate;

}

@property (assign,nonatomic) BOOL canEdit;                                                            //@synthesize canEdit=_canEdit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPriceListControllingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setColorPolicy:(long long)arg1 ;
-(id)currencyAndAmountView:(id)arg1 didInsertText:(id)arg2 ;
-(id)currencyAndAmountViewDidDeleteBackward:(id)arg1 ;
-(BOOL)canBecomeFirstResponderForCurrencyAndAmountView:(id)arg1 ;
-(void)_setupLongPressPasteGesture;
-(void)_reloadAmount;
-(void)_updateOrientation:(BOOL)arg1 ;
-(void)_onLongPressCurrencyAndAmountView;
-(void)_pasteAmountIntoCurrencyAndAmountView;
-(void)_announceUpdates;
-(BOOL)isValidOrder;
-(id)totalAmount;
-(id)initWithSoundService:(id)arg1 initialAmount:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsPriceListControllingDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<FBPaymentsPriceListControllingDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)canResignFirstResponder;
-(void)setCanEdit:(BOOL)arg1 ;
-(BOOL)canEdit;
@end

