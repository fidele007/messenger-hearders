/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface FBLogoutAlert : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	NSString* _title;
	NSString* _message;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIAlertView * alertView;               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelLogoutAlert;
-(void)showLogoutAlert;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(id)_alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
@end

