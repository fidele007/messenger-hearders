/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewController.h>
#import <Messenger/MNMessagesViewThemeUpdateListening.h>

@class MNAppThemeConfiguration, UIColor, NSString;

@interface MNWebViewController : FBWebViewController <MNMessagesViewThemeUpdateListening> {

	MNAppThemeConfiguration* _appThemeConfiguration;
	UIColor* _themeColor;

}

@property (nonatomic,retain) UIColor * themeColor;                  //@synthesize themeColor=_themeColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThemeColor:(UIColor *)arg1 ;
-(void)messagesViewThemeDidUpdateThemeColor:(id)arg1 customLikeEmoji:(id)arg2 ;
-(UIColor *)themeColor;
-(id)initModalWithPolicy:(int)arg1 appThemeConfiguration:(id)arg2 session:(id)arg3 ;
-(id)initWithPolicy:(int)arg1 appThemeConfiguration:(id)arg2 session:(id)arg3 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

