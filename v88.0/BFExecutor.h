/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)mainThreadExecutor;
+(id)defaultExecutor;
+(id)executorWithDispatchQueue:(id)arg1 ;
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)immediateExecutor;
+(id)executorWithOperationQueue:(id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

