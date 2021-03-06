/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MNFamilyAppNavigationViewDelegate;
@class UIView, UITableView, MNProfileImageViewController, MNThreadImageManager, FBImageDownloader, FBMobileConfigContextManager, FBMUser, MNFamilyAppNavigationViewModel, NSString;

@interface MNFamilyAppNavigationView : UIView <UITableViewDelegate, UITableViewDataSource> {

	UIView* _containerRoundedCornerView;
	UITableView* _familyAppTableView;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBImageDownloader* _imageDownloader;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBMUser* _loggedInUser;
	MNFamilyAppNavigationViewModel* _familyAppNavigationViewModel;
	id<MNFamilyAppNavigationViewDelegate> _delegate;

}

@property (nonatomic,retain) FBMUser * loggedInUser;                                                     //@synthesize loggedInUser=_loggedInUser - In the implementation block
@property (nonatomic,retain) MNFamilyAppNavigationViewModel * familyAppNavigationViewModel;              //@synthesize familyAppNavigationViewModel=_familyAppNavigationViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNFamilyAppNavigationViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoggedInUser:(FBMUser *)arg1 ;
-(id)_familyAppNavigationSettingCellForTableView:(id)arg1 ;
-(id)_familyAppNavigationCellForTableView:(id)arg1 familyAppNavigationCellType:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 profileImageViewController:(id)arg2 threadImageManager:(id)arg3 imageDownloader:(id)arg4 mobileConfigContextManager:(id)arg5 ;
-(void)setFamilyAppNavigationViewModel:(MNFamilyAppNavigationViewModel *)arg1 ;
-(MNFamilyAppNavigationViewModel *)familyAppNavigationViewModel;
-(FBMUser *)loggedInUser;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNFamilyAppNavigationViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNFamilyAppNavigationViewDelegate>)delegate;
@end

