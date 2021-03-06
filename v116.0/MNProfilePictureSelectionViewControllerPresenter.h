/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNProfilePictureSelectionViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider;
@class MNNavigationController, MNProfilePictureSelectionViewController, MNNavigationCoordinator, NSString;

@interface MNProfilePictureSelectionViewControllerPresenter : NSObject <MNProfilePictureSelectionViewControllerDelegate, FBClassProvidable> {

	MNNavigationController* _profilePictureSelectionViewControllerNavigationController;
	MNProfilePictureSelectionViewController* _profilePictureSelectionViewController;
	MNNavigationCoordinator* _navigationCoordinator;
	id<FBProvider> _sessionProvider;
	id<FBProvider> _captureManagerProvider;
	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _profilePhotoUploaderProvider;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profilePictureSelectionViewControllerDidTapNotNow:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidSelectProfilePicture:(id)arg1 ;
-(id)initWithSessionProvider:(id)arg1 captureManagerProvider:(id)arg2 navigationCoordinatorProvider:(id)arg3 profilePhotoUploaderProvider:(id)arg4 ;
-(void)_dismissProfilePictureSelectionViewController;
-(void)presentProfilePictureSelectionViewController;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(NSString *)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
@end

