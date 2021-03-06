/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUrlHandlerExtending.h>

@protocol FBProvider, MNMontageComposerPresenting;
@class NSString;

@interface MNMontageComposerUrlHandler : NSObject <MNUrlHandlerExtending> {

	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _montageComposerPresenterProvider;
	id<MNMontageComposerPresenting> _montageComposerPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)isPublic;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 montageComposerPresenterProvider:(id)arg2 ;
@end

