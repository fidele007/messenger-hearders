/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBDefaultLaunchImageView, NSString;

@interface FBDefaultLaunchImageViewController : UIViewController {

	FBDefaultLaunchImageView* _launchImageView;
	NSString* _launchImageBaseName;
	unsigned long long _supportedLaunchOrientations;

}
-(id)analyticsModule;
-(void)_setImageForOrientation:(long long)arg1 ;
-(id)_launchImageForOrientation:(long long)arg1 ;
-(id)initWithSupportedLaunchOrientations:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end

