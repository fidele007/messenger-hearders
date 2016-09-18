/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelLoadResultConfigurable.h>

@protocol FBProvider;
@class MNThreadDetailsActionsController, MNThreadDetailsViewController, MNThreadViewModelLoadResult, MNProgressBarController, NSString;

@interface MNThreadDetailsController : NSObject <FBClassProvidable, MNThreadViewModelLoadResultConfigurable> {

	id<FBProvider> _threadDetailsActionsControllerProvider;
	id<FBProvider> _threadDetailsViewControllerProvider;
	MNThreadDetailsActionsController* _threadDetailsActionsController;
	MNThreadDetailsViewController* _threadDetailsViewController;
	MNThreadViewModelLoadResult* _threadViewModelLoadResult;
	MNProgressBarController* _progressBarController;

}

@property (nonatomic,retain) MNProgressBarController * progressBarController;              //@synthesize progressBarController=_progressBarController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)tearDownThreadViewModelDependencies;
-(MNProgressBarController *)progressBarController;
-(void)setProgressBarController:(MNProgressBarController *)arg1 ;
-(id)threadDetailsActionsController;
-(id)initializeThreadDetailsViewController;
-(id)summaryUpdateCreator;
-(void)configureThreadViewModelDependenciesWithViewModelLoadResult:(id)arg1 ;
@end
