/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSoftErrorLogger : NSObject
+(void)setSoftErrorReporter:(id)arg1 ;
+(void)logSoftErrorWithExtra:(id)arg1 ;
+(void)logSoftErrorWithClassName:(const char*)arg1 function:(const char*)arg2 line:(int)arg3 flag:(int)arg4 tag:(id)arg5 format:(id)arg6 ;
+(void)logSoftErrorWithFileName:(const char*)arg1 function:(const char*)arg2 line:(int)arg3 flag:(int)arg4 tag:(id)arg5 format:(id)arg6 ;
@end

