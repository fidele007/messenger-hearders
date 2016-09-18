/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionPresentationStrategy.h>

@class UIViewController, NSString;

@interface MNComposerExtensionPopupPresentationStrategy : NSObject <MNComposerExtensionPresentationStrategy> {

	UIViewController* _viewController;
	/*^block*/id _viewControllerCreationBlock;
	long long _style;
	BOOL _shouldDismissAfterCommittingActions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
-(BOOL)shouldAutoRotate;
-(id)initWithViewControllerCreationBlock:(/*^block*/id)arg1 shouldDismissAfterCommittingActions:(BOOL)arg2 ;
-(void)present:(id)arg1 ;
-(BOOL)isPresented:(id)arg1 ;
-(BOOL)requiresTextEditing:(id)arg1 ;
-(BOOL)isViewControllerLoaded;
-(BOOL)shouldDismissAfterCommittingActions;
-(long long)style;
-(id)viewController;
-(void)dismiss:(id)arg1 ;
@end

