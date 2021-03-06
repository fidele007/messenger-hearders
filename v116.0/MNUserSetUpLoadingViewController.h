/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNUserSetUpDataFetcherControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class MNLoadingView, MNUserSetUpDataFetcherController, NSString;

@interface MNUserSetUpLoadingViewController : UIViewController <MNUserSetUpDataFetcherControllerDelegate, MNUserSetUpStepViewController> {

	id<MNUserSetUpStepCompletion> completionDelegate;
	MNLoadingView* _loadingView;
	MNUserSetUpDataFetcherController* _userSetUpDataFetcherController;

}

@property (nonatomic,retain) MNLoadingView * loadingView;                                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) MNUserSetUpDataFetcherController * userSetUpDataFetcherController;              //@synthesize userSetUpDataFetcherController=_userSetUpDataFetcherController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(void)userSetUpDataFetcherController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userSetUpDataFetcherController:(id)arg1 didFetchUserData:(id)arg2 ;
-(id)initWithUserSetUpDataFetcherController:(id)arg1 ;
-(MNUserSetUpDataFetcherController *)userSetUpDataFetcherController;
-(void)setUserSetUpDataFetcherController:(MNUserSetUpDataFetcherController *)arg1 ;
-(unsigned long long)preferredTransitionType;
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setLoadingView:(MNLoadingView *)arg1 ;
-(MNLoadingView *)loadingView;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

