/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class MNThreadListGenericSnippetsPolicy, MNAppMessageAttachmentUtils, NSMutableArray, MNAttachmentStyleRendererManager;

@interface MNThreadGenericSnippetDecider : NSObject {

	MNThreadListGenericSnippetsPolicy* _policy;
	MNAppMessageAttachmentUtils* _messageAttachmentUtils;
	id<MNAuthenticationManager> _authManager;
	NSMutableArray* _possibleGenericSnippetLoaders;
	MNAttachmentStyleRendererManager* _styleRendererManager;

}
-(id)initWithPolicy:(id)arg1 appMessageAttachmentUtils:(id)arg2 authManager:(id)arg3 styleRendererManager:(id)arg4 ;
-(id)latestSnippetMessagePairFromMessages:(id)arg1 threadSummary:(id)arg2 ;
-(void)_registerPossibleSnippetLoaders;
-(void)_registerPhotoSnippetLoader;
-(void)_registerStickerSnippetLoader;
-(void)_registerCustomLikeEmojiSnippetLoader;
-(void)_registerLikeStickerSnippetLoader;
-(void)_registerVideoSnippetLoader;
-(void)_registerLocationSnippetLoader;
-(void)_registerSponsoredMessageSnippetLoader;
-(BOOL)_canHandleGenericSnippetFromMessage:(id)arg1 ;
-(BOOL)_overridesLatestMessageForTextSnippet;
-(id)genericSnippetLoaderFromMessage:(id)arg1 ;
@end

