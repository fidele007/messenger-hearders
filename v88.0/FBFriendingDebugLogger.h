/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFriendingDebugLogger : NSObject
+(void)logFriendingErrorDetailWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 errorDomain:(id)arg4 errorCode:(id)arg5 errorDescription:(id)arg6 ;
+(void)logFriendingActionPerformWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipBeforeAction:(id)arg4 action:(unsigned long long)arg5 ;
+(void)logFriendingActionFailWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipAfterRollback:(id)arg4 failedAction:(unsigned long long)arg5 ;
+(void)logFriendingActionCancelWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendshipAfterCancel:(id)arg4 canceledAction:(unsigned long long)arg5 ;
+(void)logFriendshipResetWithAnalyticsModule:(id)arg1 userID:(id)arg2 friendID:(id)arg3 friendship:(id)arg4 ;
@end

