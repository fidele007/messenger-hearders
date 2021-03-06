/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionPresentationStrategy.h>

@class UIViewController, NSString;

@interface MNComposerExtensionDrawerPresentationStrategy : NSObject <MNComposerExtensionPresentationStrategy> {

	UIViewController* _viewController;
	/*^block*/id _viewControllerProvider;
	long long _drawerMode;

}

@property (nonatomic,readonly) long long drawerMode;                //@synthesize drawerMode=_drawerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long style; 
-(long long)drawerMode;
-(id)initWithViewControllerProvider:(/*^block*/id)arg1 drawerMode:(long long)arg2 ;
-(void)present:(id)arg1 ;
-(BOOL)isPresented:(id)arg1 ;
-(BOOL)requiresTextEditing:(id)arg1 ;
-(BOOL)isViewControllerLoaded;
-(BOOL)shouldAutoRotate;
-(long long)style;
-(id)viewController;
-(void)dismiss:(id)arg1 ;
@end

