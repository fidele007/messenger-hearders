/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPaymentsMessengerPaymentCoordinatorListener.h>
#import <Messenger/FBPaymentsSettingsSectionExtension.h>

@protocol FBIntentHandler, FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate;
@class FBUserSession, FBPaymentsPeerToPeerContactsService, FBPaymentsPeerToPeerTransferStatusModelContainer, MNPaymentsMessengerPaymentCoordinator, MNPaymentsExtensibleFlowMap, MNCDNProfileImageDownloader, FBPaymentsPeerToPeerNavigationCoordinator, NSArray, NSString;

@interface MNPaymentsSettingsPaymentHistorySectionExtension : NSObject <MNPaymentsMessengerPaymentCoordinatorListener, FBPaymentsSettingsSectionExtension> {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _statusModelContainer;
	MNPaymentsMessengerPaymentCoordinator* _transferCoordinator;
	MNPaymentsExtensibleFlowMap* _extensibleMap;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	NSArray* _transferCellViewModels;
	NSArray* _transferDataModels;
	BOOL _hasMoreTransfers;
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
-(void)didUpdateTransfer:(id)arg1 ;
-(void)_loadViewModelsForRecentTransfers;
-(void)_handleProcessedTransferCellViewModels:(id)arg1 transferDataModels:(id)arg2 hasMoreTransfers:(BOOL)arg3 ;
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 contactsService:(id)arg3 statusModelContainer:(id)arg4 transferCoordinator:(id)arg5 extensibleFlowMap:(id)arg6 paymentsNavigationCoordinator:(id)arg7 profileImageDownloader:(id)arg8 ;
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

