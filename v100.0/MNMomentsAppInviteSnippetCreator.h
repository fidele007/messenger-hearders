/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleSnippetCreator.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class NSString;

@interface MNMomentsAppInviteSnippetCreator : NSObject <MNAttachmentStyleSnippetCreator, FBViewerContextClassProvidable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_syncedSnippetForPhotoCount:(unsigned long long)arg1 senderName:(id)arg2 isSentBySelf:(BOOL)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)snippetForAttachment:(id)arg1 senderName:(id)arg2 isSentBySelf:(BOOL)arg3 ;
-(id)snippetForOutgoingAttachment:(id)arg1 ;
-(id)snippetForDemoModeWithSenderName:(id)arg1 isSentBySelf:(BOOL)arg2 ;
@end

