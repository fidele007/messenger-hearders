/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebDialogsDelegate <NSObject>
@optional
-(void)webDialogsWillPresentDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3;
-(BOOL)webDialogsDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 shouldAutoHandleURL:(id)arg4;
-(void)webDialogsWillDismissDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 result:(unsigned long long*)arg4 url:(id*)arg5 error:(id*)arg6;

@end
