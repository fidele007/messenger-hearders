/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>
#import <Messenger/MNMessagesModelMessageDeleteListener.h>

@class NSMutableDictionary, NSString;

@interface MNMessageVideoControllerMap : NSObject <FBViewerContextClassProvidable, MNMessagesAppearanceEventListener, MNMessagesModelMessageDeleteListener> {

	NSMutableDictionary* _messagesToVideoControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)modelController:(id)arg1 willDeleteMessage:(id)arg2 ;
-(void)modelController:(id)arg1 didFailToDeleteMessageWithMessageId:(id)arg2 withError:(id)arg3 ;
-(id)getVideoControllerForMessageKey:(id)arg1 ;
-(void)setVideoController:(id)arg1 forMessageKey:(id)arg2 ;
-(void)stopAllVideosExceptMessageKey:(id)arg1 ;
-(void)_invalidateAnyInactiveController;
-(void)removeVideoControllerForMessageKey:(id)arg1 ;
-(void)reset;
@end

