/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/MNPaymentsSettingsThreadProtectionCellDelegate.h>
#import <Messenger/FBPaymentsSettingsSectionExtension.h>

@protocol FBPaymentsConnectionStatusProviding, FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate;
@class FBUserSession, MNUserStore, MNCDNProfileImageDownloader, FBPaymentsPINController, MNPaymentsPINProtectionController, FBPaymentsTouchIDController, MNPaymentsProtectionFlowController, NSArray, NSString;

@interface MNPaymentsSettingsThreadProtectionExtension : NSObject <FBPaymentsUpdateListener, MNPaymentsSettingsThreadProtectionCellDelegate, FBPaymentsSettingsSectionExtension> {

	FBUserSession* _session;
	MNUserStore* _userStore;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBPaymentsPINController* _pinController;
	MNPaymentsPINProtectionController* _pinProtectionController;
	FBPaymentsTouchIDController* _touchIDController;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	MNPaymentsProtectionFlowController* _protectionFlowController;
	NSArray* _cellViewModels;
	BOOL _passesGK;
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
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)threadProtectionCell:(id)arg1 didSwitchTo:(BOOL)arg2 ;
-(void)_updateViewModelsWithUsersById:(id)arg1 withOldViewModels:(id)arg2 ;
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
-(id)initWithSession:(id)arg1 profileImageDownloader:(id)arg2 userStore:(id)arg3 paymentPinController:(id)arg4 protectionController:(id)arg5 touchIDController:(id)arg6 connectionStatusProvider:(id)arg7 ;
-(id)sectionFooterViewText;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(long long)_numberOfRows;
-(void)tearDown;
-(void)_updateViewModels;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)setUp;
-(long long)editingStyleForRowAtIndex:(unsigned long long)arg1 ;
@end

