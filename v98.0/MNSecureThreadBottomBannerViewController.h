/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNThreadBottomBannerViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSecureThreadBottomBannerViewControllerDelegate;
@class MNThreadBottomBannerView, NSString;

@interface MNSecureThreadBottomBannerViewController : UIViewController <MNThreadBottomBannerViewDelegate, FBClassProvidable> {

	MNThreadBottomBannerView* _secureThreadBottomBannerView;
	id<MNSecureThreadBottomBannerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSecureThreadBottomBannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)threadBottomBannerView:(id)arg1 didTouchTextCheckingResult:(id)arg2 ;
-(void)setDelegate:(id<MNSecureThreadBottomBannerViewControllerDelegate>)arg1 ;
-(id<MNSecureThreadBottomBannerViewControllerDelegate>)delegate;
-(void)loadView;
@end
