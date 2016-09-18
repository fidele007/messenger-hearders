/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextInputTraits.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/MNPaymentsAmountCollectionViewLayoutDelegate.h>

@protocol MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate;
@class UICollectionView, NSString, NSMutableDictionary, UIImageView;

@interface MNPaymentsPeerToPeerCurrencyAndAmountView : UIView <UITextInputTraits, UIKeyInput, UICollectionViewDataSource, MNPaymentsAmountCollectionViewLayoutDelegate> {

	UICollectionView* _amountCollectionView;
	NSString* _amount;
	NSMutableDictionary* _insertOperationsByIndexPath;
	NSMutableDictionary* _deleteOperationsByIndexPath;
	UIImageView* _currencyIconView;
	BOOL _shouldShrinkBasedOnNumberOfDigits;
	long long _colorPolicy;
	double _amountScale;
	id<MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate> _delegate;

}

@property (assign,nonatomic) long long colorPolicy;                                                              //@synthesize colorPolicy=_colorPolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldShrinkBasedOnNumberOfDigits;                                             //@synthesize shouldShrinkBasedOnNumberOfDigits=_shouldShrinkBasedOnNumberOfDigits - In the implementation block
@property (assign,nonatomic) double amountScale;                                                                 //@synthesize amountScale=_amountScale - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) BOOL hasText; 
-(long long)colorPolicy;
-(void)setColorPolicy:(long long)arg1 ;
-(void)setDisplayAmount:(id)arg1 ;
-(CGPoint)collectionView:(id)arg1 layout:(id)arg2 scaleForItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 insertAnimationDirectionForItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 deleteAnimationDirectionForItemAtIndexPath:(id)arg3 ;
-(void)_updateCollectionAccessibilityLabelAndPostAnnouncementNotification:(BOOL)arg1 ;
-(void)_updateCurrencyIconColor;
-(void)_changeTextColors;
-(void)_reloadCurrencyIconAnimated:(BOOL)arg1 ;
-(void)_performUpdatesOnCollectionViewWithResult:(id)arg1 ;
-(BOOL)shouldShrinkBasedOnNumberOfDigits;
-(double)amountScale;
-(void)setAmountScale:(double)arg1 ;
-(void)setShouldShrinkBasedOnNumberOfDigits:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsPeerToPeerCurrencyAndAmountViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)isSecureTextEntry;
-(long long)keyboardType;
-(id)inputAccessoryView;
-(void)_reloadCollectionView;
-(double)_currentScale;
@end

