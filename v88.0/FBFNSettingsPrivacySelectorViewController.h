/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBFNSettingsPrivacySelectorViewControllerDelegate;
@class FBUserSession, UITableView, NSArray, UILabel, NSMutableDictionary, FBMemPrivacyOption, FBMemPrivacyOptionsLocationConnection, FBFNSettingsAppearanceConfiguration, NSString;

@interface FBFNSettingsPrivacySelectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	FBUserSession* _session;
	UITableView* _tableView;
	NSArray* _privacyOptions;
	UILabel* _privacyTitleLabel;
	UILabel* _privacyTextLabel;
	NSMutableDictionary* _privacyImages;
	FBMemPrivacyOption* _previouslySelectedOption;
	FBMemPrivacyOptionsLocationConnection* _privacyConnection;
	FBFNSettingsAppearanceConfiguration* _configuration;
	id<FBFNSettingsPrivacySelectorViewControllerDelegate> _delegate;
	FBMemPrivacyOption* _selectedOption;

}

@property (assign,nonatomic,__weak) id<FBFNSettingsPrivacySelectorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBMemPrivacyOption * selectedOption;                                                  //@synthesize selectedOption=_selectedOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_fetchPrivacyOptions;
-(void)addOption:(id)arg1 withEdge:(id)arg2 withIsStop:(BOOL*)arg3 ;
-(void)_configureCell:(id)arg1 withPrivacyOption:(id)arg2 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 privacyConnection:(id)arg3 ;
-(void)setDelegate:(id<FBFNSettingsPrivacySelectorViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBFNSettingsPrivacySelectorViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(FBMemPrivacyOption *)selectedOption;
-(void)setSelectedOption:(FBMemPrivacyOption *)arg1 ;
@end

