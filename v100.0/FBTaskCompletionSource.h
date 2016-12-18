/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTask;

@interface FBTaskCompletionSource : NSObject {

	FBTask* _task;

}

@property (nonatomic,retain) FBTask * task;              //@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(BOOL)trySetResult:(id)arg1 ;
-(BOOL)trySetError:(id)arg1 ;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(FBTask *)task;
-(void)setTask:(FBTask *)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setException:(id)arg1 ;
@end
