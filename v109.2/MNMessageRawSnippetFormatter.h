/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBMMessageSnippetGeneratorPluginProviding;
@class MNAttachmentStyleRendererManager, MNExtensibleAttachmentDemoModeGating, FBMobileConfigContextManager, NSString;

@interface MNMessageRawSnippetFormatter : NSObject <FBClassProvidable> {

	id<FBMMessageSnippetGeneratorPluginProviding> _messageSnippetGeneratorPluginProvider;
	MNAttachmentStyleRendererManager* _styleRendererManager;
	MNExtensibleAttachmentDemoModeGating* _xmaGating;
	/*^block*/id _memXMAForMessageBlock;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)rawSnippetForMessage:(id)arg1 senderName:(id)arg2 ;
-(id)initWithMessageSnippetGeneratorPluginProvider:(id)arg1 styleRendererManager:(id)arg2 xmaGating:(id)arg3 configManager:(id)arg4 ;
-(id)initWithMessageSnippetGeneratorPluginProvider:(id)arg1 styleRendererManager:(id)arg2 xmaGating:(id)arg3 memXMAForMessageBlock:(/*^block*/id)arg4 configManager:(id)arg5 ;
-(id)_snippetFromAttachmentsForMessage:(id)arg1 senderName:(id)arg2 ;
-(id)_snippetFromPluginsForMessage:(id)arg1 senderName:(id)arg2 ;
-(id)_snippetFromExtensibleAttachmentsForMessage:(id)arg1 senderName:(id)arg2 ;
-(id)_snippetFromNativeAttachmentsForMessage:(id)arg1 senderName:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

