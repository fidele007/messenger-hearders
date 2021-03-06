/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBErrorUtility : NSObject
+(BOOL)fberrorIsErrorFromSystemSession:(id)arg1 ;
+(id)apiUserMessageForError:(id)arg1 ;
+(id)jsonDictionaryForError:(id)arg1 ;
+(BOOL)errorIsNetworkError:(id)arg1 ;
+(id)innerErrorInfoFromError:(id)arg1 ;
+(BOOL)shouldNotifyUserForError:(id)arg1 ;
+(unsigned long long)errorCodeForError:(id)arg1 ;
+(unsigned long long)errorSubcodeForError:(id)arg1 ;
+(id)userTitleForError:(id)arg1 ;
+(id)fberrorForSystemPasswordChange:(id)arg1 ;
+(id)fberrorForRetry:(id)arg1 ;
+(void)fberrorGetCodeValueForError:(id)arg1 index:(unsigned long long)arg2 code:(int*)arg3 subcode:(int*)arg4 ;
+(long long)fberrorCategoryFromError:(id)arg1 code:(int)arg2 subcode:(int)arg3 returningUserMessage:(id*)arg4 andShouldNotifyUser:(BOOL*)arg5 ;
+(long long)errorCategoryForError:(id)arg1 ;
+(id)userMessageForError:(id)arg1 ;
+(BOOL)isTransientError:(id)arg1 ;
@end

