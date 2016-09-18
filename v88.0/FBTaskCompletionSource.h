/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

