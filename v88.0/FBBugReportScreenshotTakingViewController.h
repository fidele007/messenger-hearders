/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIButton;

@interface FBBugReportScreenshotTakingViewController : UIViewController {

	/*^block*/id _userEventBlock;
	UIButton* _takeScreenshotButton;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UIButton * takeScreenshotButton;              //@synthesize takeScreenshotButton=_takeScreenshotButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) id userEventBlock;                              //@synthesize userEventBlock=_userEventBlock - In the implementation block
-(id)createButtonWithText:(id)arg1 color:(id)arg2 backgoundColor:(id)arg3 ;
-(id)userEventBlock;
-(UIButton *)takeScreenshotButton;
-(void)setUserEventBlock:(id)arg1 ;
-(void)setTakeScreenshotButton:(UIButton *)arg1 ;
-(void)cancel;
-(void)viewWillLayoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewDidLoad;
-(void)takeScreenshot;
@end

