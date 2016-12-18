/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsAddressListViewControllerDelegate.h>
#import <Messenger/FBPaymentsAddressFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsTableViewSection.h>

@protocol FBPaymentsNavigationDelegate, FBPaymentsTableViewSectionDelegate;
@class FBUserSession, FBPaymentsAddressDataFetcher, FBMemMailingAddress, NSString;

@interface FBPaymentsSettingsPersonalInfoSectionExtension : NSObject <FBPaymentsAddressListViewControllerDelegate, FBPaymentsAddressFormViewControllerDelegate, FBPaymentsTableViewSection> {

	FBUserSession* _session;
	FBPaymentsAddressDataFetcher* _addressDataFetcher;
	FBMemMailingAddress* _defaultMailingAddress;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(void)_fetchAddressAndUpdate;
-(void)_handleDefaultAddress:(id)arg1 error:(id)arg2 ;
-(void)addressListViewController:(id)arg1 didUpdateDefaultAddress:(id)arg2 ;
-(void)addressFormViewControllerDidCancel:(id)arg1 ;
-(void)addressFormViewControllerDidAddOrUpdateAddress:(id)arg1 ;
-(void)addressFormViewControllerHasUpdates:(id)arg1 ;
-(void)addressFormViewControllerDidDeleteAddress:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
@end

