/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCommentPublishingAnalytics : NSObject
+(void)reportCommentPostingFailedWithPublishTargetID:(id)arg1 error:(id)arg2 analyticsPayload:(id)arg3 ;
+(void)reportCommentPostingWithPublishTargetID:(id)arg1 analyticsPayload:(id)arg2 ;
+(void)reportDidFinishPublishingCommentWithGraphQLID:(id)arg1 attachmentType:(id)arg2 error:(id)arg3 requestStatus:(id)arg4 isCommentOnScreen:(BOOL)arg5 ;
+(void)reportWillStartPublishingCommentWithGraphQLID:(id)arg1 ;
@end
