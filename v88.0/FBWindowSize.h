/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBWindowSize : NSObject {

	BOOL _hasLoggedInitialSize;
	long long _orientation;
	CGSize _size;

}

@property (assign) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
+(id)privateInstance;
+(void)beginObservingWindowSize;
+(CGSize)size;
+(void)initialize;
-(void)_logWindowSize;
-(void)_updateSize:(id)arg1 ;
-(void)_willChangeOrientation:(id)arg1 ;
-(CGSize)size;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setSize:(CGSize)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
@end

