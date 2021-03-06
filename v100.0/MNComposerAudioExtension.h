/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNAudioComposeViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNComposerExtensionPresentationStrategy;
@class MNAudioComposeViewController, MNSoundController, FBLazyCreator, MNComposerAudioExtensionPresentationStrategyProvider, NSString;

@interface MNComposerAudioExtension : MNAbstractComposerTrayExtension <MNAudioComposeViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _audioComposeViewControllerProvider;
	MNAudioComposeViewController* _audioComposeViewController;
	MNSoundController* _soundController;
	FBLazyCreator* _composerIconCreator;
	id _sendingContextToken;
	MNComposerAudioExtensionPresentationStrategyProvider* _presentationStrategyProvider;
	id<MNComposerExtensionPresentationStrategy> _presentationStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(id)extensionModule;
-(id)presentationStrategy;
-(id)viewControllerForPresentation;
-(void)audioComposeViewController:(id)arg1 didFinishRecordingWithAttachment:(id)arg2 ;
-(void)audioComposeViewControllerDidStartRecording:(id)arg1 ;
-(void)audioComposeViewControllerDidCancelRecording:(id)arg1 ;
-(void)audioComposeViewControllerDidReachDurationLimit:(id)arg1 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
-(void)tearDown;
@end

