/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDataModelPluginService.h>

@protocol FBMMessageSnippetGeneratorPluginProviding;
@class NSString;

@interface MNDataModelPluginServiceImpl : NSObject <MNDataModelPluginService> {

	id<FBMMessageSnippetGeneratorPluginProviding> _messageSnippetGeneratorPluginProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBMMessageSnippetGeneratorPluginProviding> messageSnippetGeneratorPluginProvider;              //@synthesize messageSnippetGeneratorPluginProvider=_messageSnippetGeneratorPluginProvider - In the implementation block
-(id)memStoryAttachmentForMessage:(id)arg1 ;
-(id<FBMMessageSnippetGeneratorPluginProviding>)messageSnippetGeneratorPluginProvider;
-(id)initWithMessageSnippetGeneratorPluginProvider:(id)arg1 ;
@end
