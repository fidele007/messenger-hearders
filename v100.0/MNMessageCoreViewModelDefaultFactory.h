/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageCoreViewModelFactory.h>

@protocol MNAuthenticationManager;
@class FBEmoticonTranslator, MNAppMessageAttachmentUtils, MNAttachmentStyleRendererManager, MNExtensibleAttachmentDemoModeGating, MNThreadParticipantNameFormatter, FBUserSession, MNMetaRangesParser, MNVideoPlaybackConfiguration, FBMobileConfigContextManager, NSString;

@interface MNMessageCoreViewModelDefaultFactory : NSObject <MNMessageCoreViewModelFactory> {

	id<MNAuthenticationManager> _authManager;
	FBEmoticonTranslator* _emoticonTranslator;
	MNAppMessageAttachmentUtils* _messageAttachmentUtils;
	MNAttachmentStyleRendererManager* _styleRendererManager;
	MNExtensibleAttachmentDemoModeGating* _xmaGating;
	MNThreadParticipantNameFormatter* _threadParticipantNameFormatter;
	BOOL _extensibleMessageViewEnabled;
	FBUserSession* _userSession;
	MNMetaRangesParser* _metaRangesParser;
	MNVideoPlaybackConfiguration* _videoPlaybackConfiguration;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)messageCoreViewModelFromMessage:(id)arg1 threadViewModel:(id)arg2 ;
-(id)initWithAuthenticationManager:(id)arg1 emoticonTranslator:(id)arg2 messageAttachmentUtils:(id)arg3 styleRendererManager:(id)arg4 xmaGating:(id)arg5 threadParticipantNameFormatter:(id)arg6 extensibleMessageViewEnabled:(BOOL)arg7 userSession:(id)arg8 configContextManager:(id)arg9 videoPlaybackConfiguration:(id)arg10 metaRangesParser:(id)arg11 ;
@end

