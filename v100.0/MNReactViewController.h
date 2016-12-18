/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class RCTBridge, NSString, NSDictionary, UIImageView, FBImageDownloader, MNReactViewControllerConfiguration;

@interface MNReactViewController : UIViewController {

	RCTBridge* _bridge;
	NSString* _moduleName;
	NSDictionary* _initialProperties;
	UIImageView* _titleView;
	FBImageDownloader* _imageDownloader;
	MNReactViewControllerConfiguration* _configuration;

}
-(id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 imageDownloader:(id)arg4 configuration:(id)arg5 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
