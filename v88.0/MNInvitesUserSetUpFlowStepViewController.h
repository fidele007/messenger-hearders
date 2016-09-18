/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNInvitesViewControllerPresenting.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class MNInviteSender, MNInvitesNuxFlowExperimentContext, NSString;

@interface MNInvitesUserSetUpFlowStepViewController : UIViewController <FBClassProvidable, MNInvitesViewControllerPresenting, MNUserSetUpStepViewController> {

	MNInviteSender* _inviteSender;
	MNInvitesNuxFlowExperimentContext* _invitesNuxFlowExperimentContext;
	id<MNUserSetUpStepCompletion> _completionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate;              //@synthesize completionDelegate=_completionDelegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithInviteSender:(id)arg1 session:(id)arg2 ;
-(void)presentInvitesViewController:(id)arg1 ;
-(void)dismissInvitesViewController:(id)arg1 ;
-(unsigned long long)preferredTransitionType;
-(void)viewDidLoad;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

