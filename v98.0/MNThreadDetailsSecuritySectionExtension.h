/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/MNThreadDetailsSectionExtension.h>

@protocol MNThreadDetailsSectionExtensionDelegate;
@class MNThreadViewModel, MNPaymentsProtectionFlowController, MNPaymentsPINProtectionController, FBLazyCreator, NSString;

@interface MNThreadDetailsSecuritySectionExtension : NSObject <FBPaymentsUpdateListener, MNThreadDetailsSectionExtension> {

	MNThreadViewModel* _threadViewModel;
	MNPaymentsProtectionFlowController* _protectionFlowController;
	MNPaymentsPINProtectionController* _pinProtectionController;
	FBLazyCreator* _sectionFooterViewCreator;
	id<MNThreadDetailsSectionExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNThreadDetailsSectionExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)cellForRowIndex:(unsigned long long)arg1 ;
-(void)handleSelectionForRowIndex:(unsigned long long)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForFooterWithWidth:(double)arg1 ;
-(id)viewForFooterOfThreadDetailsSection;
-(BOOL)_isProtectedState;
-(void)_onSwitchProtection:(id)arg1 ;
-(void)_reloadSection;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)initWithPinController:(id)arg1 pinProtectionController:(id)arg2 touchIDController:(id)arg3 paymentsConnectionStatusProvider:(id)arg4 paymentsNavigationDelegate:(id)arg5 ;
-(void)setDelegate:(id<MNThreadDetailsSectionExtensionDelegate>)arg1 ;
-(id<MNThreadDetailsSectionExtensionDelegate>)delegate;
-(unsigned long long)numberOfRows;
@end
