/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsContactInfoFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsContactInfoSectionSelectActionProviding.h>

@protocol FBPaymentsNavigationDelegate, FBPaymentsContactInfoSectionSelectActionProvidingDelegate;
@class FBUserSession, NSString;

@interface FBPaymentsContactInfoEmailSectionSelectActionProvider : NSObject <FBPaymentsContactInfoFormViewControllerDelegate, FBPaymentsContactInfoSectionSelectActionProviding> {

	FBUserSession* _session;
	BOOL _shouldHideMakeAsDefaultSection;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideMakeAsDefaultSection;                                                        //@synthesize shouldHideMakeAsDefaultSection=_shouldHideMakeAsDefaultSection - In the implementation block
-(void)contactInfoFormViewControllerDidCancel:(id)arg1 ;
-(void)contactInfoFormViewControllerDidUpdateData:(id)arg1 ;
-(void)contactInfoFormViewController:(id)arg1 didAddContactDatawithNewContactID:(id)arg2 ;
-(void)contactInfoFormViewControllerDidDeleteData:(id)arg1 ;
-(void)contactInfoFormViewControllerDidSetDefault:(id)arg1 ;
-(void)_dismissContactInfoFormViewController;
-(void)_popContactInfoFormViewController;
-(void)selectContactData:(id)arg1 withTotalNumberOfContacts:(long long)arg2 ;
-(BOOL)shouldHideMakeAsDefaultSection;
-(void)setShouldHideMakeAsDefaultSection:(BOOL)arg1 ;
-(void)setDelegate:(id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate>)arg1 ;
-(id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)_pushViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

