/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMinibarToastViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBProvider;
@class FBUserSession, MNThreadViewModel, MNMinibarToastView, FBToast, FBToastPresenter, NSString;

@interface MNMessengerExtensionToastController : NSObject <MNMinibarToastViewDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	id<FBProvider> _intentHandlerProvider;
	MNThreadViewModel* _threadViewModel;
	MNMinibarToastView* _toastView;
	FBToast* _toast;
	FBToastPresenter* _toastPresenter;

}

@property (assign,nonatomic,__weak) FBToastPresenter * toastPresenter;              //@synthesize toastPresenter=_toastPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBToastPresenter *)toastPresenter;
-(void)setToastPresenter:(FBToastPresenter *)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)showMessengerExtensionToastViewIfNecessary;
-(void)dismissMessengerExtensionToastAnimated:(BOOL)arg1 ;
-(void)minibarToastViewDidPressButton:(id)arg1 ;
-(void)_initToastIfNecessary;
-(id)initWithSession:(id)arg1 intentHandlerProvider:(id)arg2 ;
-(BOOL)_shouldShowMessengerExtensionToastView;
-(void)_showMessengerExtensionToastView;
-(void)_sendMessengerExtensionIntent;
@end
