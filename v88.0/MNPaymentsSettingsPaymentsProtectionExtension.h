/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsSettingsSectionExtension.h>

@protocol FBPaymentsConnectionStatusProviding, FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate;
@class FBUserSession, FBPaymentsPINController, MNPaymentsPINProtectionController, FBPaymentsTouchIDController, MNPaymentsProtectionFlowController, NSString;

@interface MNPaymentsSettingsPaymentsProtectionExtension : NSObject <FBPaymentsUpdateListener, FBPaymentsSettingsSectionExtension> {

	FBUserSession* _session;
	FBPaymentsPINController* _pinController;
	MNPaymentsPINProtectionController* _pinProtectionController;
	FBPaymentsTouchIDController* _touchIDController;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	MNPaymentsProtectionFlowController* _protectionFlowController;
	BOOL _passesGK;
	BOOL _isHidden;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBModalWebFlowDelegate> _modalWebFlowDelegate;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalWebFlowDelegate;                     //@synthesize modalWebFlowDelegate=_modalWebFlowDelegate - In the implementation block
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isProtectedState;
-(void)_onSwitchProtection:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentPinController:(id)arg2 protectionController:(id)arg3 touchIDController:(id)arg4 connectionStatusProvider:(id)arg5 ;
-(void)commitEditingStyle:(long long)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(id)titleForDeleteConfirmationButtonForRowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)interestedDataTypes;
-(id<FBModalWebFlowDelegate>)modalWebFlowDelegate;
-(void)setModalWebFlowDelegate:(id<FBModalWebFlowDelegate>)arg1 ;
-(id)previewingContext:(id)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 forRowAtRowIndex:(unsigned long long)arg3 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(id)sectionFooterViewText;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)tearDown;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setUp;
-(long long)editingStyleForRowAtIndex:(unsigned long long)arg1 ;
@end

