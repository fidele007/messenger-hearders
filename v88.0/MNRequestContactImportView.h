/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPrimerViewDelegate.h>
#import <Messenger/MNContactSyncLegalDisclaimerTextViewDelegate.h>

@protocol MNRequestContactImportViewDelegate;
@class MNPrimerAlertView, MNLoadingIndicator, MNContactSyncLegalDisclaimerTextView, NSString;

@interface MNRequestContactImportView : UIView <MNPrimerViewDelegate, MNContactSyncLegalDisclaimerTextViewDelegate> {

	MNPrimerAlertView* _primerAlertView;
	MNLoadingIndicator* _loadingIndicator;
	MNContactSyncLegalDisclaimerTextView* _legalDisclaimerTextView;
	id<MNRequestContactImportViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRequestContactImportViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactSyncLegalDisclaimerTextViewDidTapManageContacts:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showsDisclaimerTextView:(BOOL)arg2 ;
-(void)presentContactImportPrimer;
-(void)showLoadingIndication:(BOOL)arg1 ;
-(void)showLoadingIndication:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)primerViewDidClickCancel:(id)arg1 ;
-(void)primerViewDidClickOk:(id)arg1 ;
-(void)startArrowViewBouncingAnimation;
-(void)primerViewDidAppear:(id)arg1 ;
-(void)setDelegate:(id<MNRequestContactImportViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNRequestContactImportViewDelegate>)delegate;
@end

