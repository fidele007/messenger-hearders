/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomQPLListenerDelegate
@required
-(BOOL)QPLTraceDidStartWithMarkerID:(int)arg1 uniqueID:(int)arg2 timestamp:(long long)arg3;
-(void)QPLTraceWillCancelWithMarkerID:(int)arg1 uniqueID:(int)arg2;
-(void)QPLTraceDidAnnotateWithMarkerID:(int)arg1 annotationKey:(const char*)arg2 annotationValue:(const char*)arg3 uniqueID:(int)arg4;
-(void)QPLTraceDidTagWithMarkerID:(int)arg1 tag:(const char*)arg2 uniqueID:(int)arg3;
-(void)QPLTraceDidNoteWithMarkerID:(int)arg1 actionID:(short)arg2 noteTag:(const char*)arg3 timestamp:(long long)arg4 uniqueID:(int)arg5;
-(void)QPLTraceWillEndWithMarkerID:(int)arg1 actionID:(short)arg2 timestamp:(long long)arg3 uniqueID:(int)arg4;

@end

