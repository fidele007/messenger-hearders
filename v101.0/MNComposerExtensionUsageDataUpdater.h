/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposeViewControllerListener.h>
#import <Messenger/FBMMessageSendListening.h>

@class NSString;

@interface MNComposerExtensionUsageDataUpdater : NSObject <MNComposeViewControllerListener, FBMMessageSendListening> {

	NSString* _lastTappedExtensionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)didTransitionToExtension:(id)arg1 ;
-(void)didSelectExtension:(id)arg1 ;
-(void)didCommitSendingContentFromExtension:(id)arg1 ;
-(void)_logSendContentWithExtensionIdentifier:(id)arg1 ;
-(void)_didOpenExtension:(id)arg1 ;
-(void)_didTapExtension:(id)arg1 ;
-(void)_didSendContentFromExtension:(id)arg1 ;
-(id)init;
@end

