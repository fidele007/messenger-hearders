/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBPreferenceChangeConfirmer : NSObject {

	NSMutableArray* _alertViewDelegates;
	BOOL _shouldTeardown;

}

@property (assign,nonatomic) BOOL shouldTeardown;              //@synthesize shouldTeardown=_shouldTeardown - In the implementation block
+(id)sharedTeardownConfirmer;
+(id)sharedBackgroundConfirmer;
-(void)confirmWithBlock:(/*^block*/id)arg1 cancellationBlock:(/*^block*/id)arg2 alertViewCreator:(id)arg3 ;
-(void)setShouldTeardown:(BOOL)arg1 ;
-(void)confirmerWorkerDone:(id)arg1 ;
-(BOOL)shouldTeardown;
-(id)initPrivate;
@end

